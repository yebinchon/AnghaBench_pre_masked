
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float shininess; } ;
typedef TYPE_1__ picoShader_t ;



void FUNC_0( picoShader_t *VAR_0, float VAR_1 ){
 if ( VAR_0 == ((void*)0) ) {
  return;
 }
 VAR_0->shininess = VAR_1;


 if ( VAR_0->shininess < 0.0 ) {
  VAR_0->shininess = 0.0;
 }
 if ( VAR_0->shininess > 127.0 ) {
  VAR_0->shininess = 127.0;
 }
}
