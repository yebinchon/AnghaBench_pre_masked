
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 int VAR_0 ;
 float FUNC_0 (float*,float*) ;
 int FUNC_1 (float*,float*,float*) ;
 int FUNC_2 (float*,float*) ;
 scalar_t__ FUNC_3 (float*) ;
 float FUNC_4 (float*,float*) ;
 int FUNC_5 (float*,float*,float*) ;

__attribute__((used)) static void FUNC_6( float *VAR_1, vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4 ){
 int VAR_5;
 float VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;



 FUNC_5( VAR_3, VAR_2, VAR_8 );
 if ( FUNC_4( VAR_8, VAR_8 ) < 0.125f ) {
  return;
 }
 FUNC_5( VAR_4, VAR_3, VAR_9 );
 if ( FUNC_4( VAR_9, VAR_9 ) < 0.125f ) {
  return;
 }
 FUNC_5( VAR_4, VAR_2, VAR_10 );
 if ( FUNC_4( VAR_10, VAR_10 ) < 0.125f ) {
  return;
 }


 if ( FUNC_0( VAR_8, VAR_9 ) > 0.99f && FUNC_0( VAR_8, VAR_10 ) > 0.99f ) {
  return;
 }


 FUNC_5( VAR_3, VAR_2, VAR_8 );
 FUNC_5( VAR_4, VAR_3, VAR_9 );


 FUNC_2( VAR_2, VAR_12 );
 for ( VAR_5 = 0, VAR_7 = 0.0f, VAR_6 = 0.0f; VAR_5 < VAR_0; VAR_5++, VAR_6 += ( 1.0f / VAR_0 ) )
 {

  VAR_13[ 0 ] = ( ( 1.0f - VAR_6 ) * VAR_8[ 0 ] ) + ( VAR_6 * VAR_9[ 0 ] );
  VAR_13[ 1 ] = ( ( 1.0f - VAR_6 ) * VAR_8[ 1 ] ) + ( VAR_6 * VAR_9[ 1 ] );
  VAR_13[ 2 ] = ( ( 1.0f - VAR_6 ) * VAR_8[ 2 ] ) + ( VAR_6 * VAR_9[ 2 ] );


  FUNC_1( VAR_2, VAR_13, VAR_11 );
  FUNC_5( VAR_11, VAR_12, VAR_13 );


  VAR_7 += FUNC_3( VAR_13 );
  FUNC_2( VAR_11, VAR_12 );
 }


 if ( VAR_7 > *VAR_1 ) {
  *VAR_1 = VAR_7;
 }
}
