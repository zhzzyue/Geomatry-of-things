#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(200,200,250);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetLineWidth(1);
    ofNoFill();
    ;
    ofTranslate(500, 300);
    
    for(int j = 0; j<50; j++){
    
    ofPushMatrix();
    
    ofRotate(20*j-90);
    
    for(int i = 0; i<8; i++){
        
        
        ofSetColor(255,255,200-20*i,70);
        ofDrawCircle(0, 30-i*30, i*10);
    }
    
    ofPopMatrix();
        
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
