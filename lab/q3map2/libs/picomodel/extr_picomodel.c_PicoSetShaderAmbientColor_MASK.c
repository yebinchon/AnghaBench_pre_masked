
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** ambientColor; } ;
typedef TYPE_1__ picoShader_t ;
typedef void** picoColor_t ;



void FUNC_0( picoShader_t *VAR_0, picoColor_t VAR_1 ){
 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ) {
  return;
 }
 VAR_0->ambientColor[ 0 ] = VAR_1[ 0 ];
 VAR_0->ambientColor[ 1 ] = VAR_1[ 1 ];
 VAR_0->ambientColor[ 2 ] = VAR_1[ 2 ];
 VAR_0->ambientColor[ 3 ] = VAR_1[ 3 ];
}
