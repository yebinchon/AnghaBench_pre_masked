
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
typedef int qboolean ;


 int FUNC_0 (float*) ;
 int FUNC_1 (float*,float,float,float) ;
 float FUNC_2 (float) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_3( vec3_t VAR_2, vec3_t VAR_3 ){
 vec3_t VAR_4;



 if ( VAR_2[ 0 ] == 0.0f && VAR_2[ 1 ] == 0.0f && VAR_2[ 2 ] == 0.0f ) {
  FUNC_0( VAR_3 );
  return VAR_0;
 }


 VAR_4[ 0 ] = FUNC_2( VAR_2[ 0 ] );
 VAR_4[ 1 ] = FUNC_2( VAR_2[ 1 ] );
 VAR_4[ 2 ] = FUNC_2( VAR_2[ 2 ] );


 if ( VAR_4[ 2 ] > VAR_4[ 0 ] - 0.0001f && VAR_4[ 2 ] > VAR_4[ 1 ] - 0.0001f ) {
  if ( VAR_2[ 2 ] > 0.0f ) {
   FUNC_1( VAR_3, 0.0f, 0.0f, 1.0f );
  }
  else{
   FUNC_1( VAR_3, 0.0f, 0.0f, -1.0f );
  }
 }
 else if ( VAR_4[ 0 ] > VAR_4[ 1 ] - 0.0001f && VAR_4[ 0 ] > VAR_4[ 2 ] - 0.0001f ) {
  if ( VAR_2[ 0 ] > 0.0f ) {
   FUNC_1( VAR_3, 1.0f, 0.0f, 0.0f );
  }
  else{
   FUNC_1( VAR_3, -1.0f, 0.0f, 0.0f );
  }
 }
 else
 {
  if ( VAR_2[ 1 ] > 0.0f ) {
   FUNC_1( VAR_3, 0.0f, 1.0f, 0.0f );
  }
  else{
   FUNC_1( VAR_3, 0.0f, -1.0f, 0.0f );
  }
 }


 return VAR_1;
}
