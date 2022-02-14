
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec4_t ;
typedef float* vec3_t ;
typedef int qboolean ;


 float FUNC_0 (float*,float*) ;
 float VAR_0 ;
 float VAR_1 ;
 int FUNC_1 (float*,float*,float*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static qboolean FUNC_2( vec3_t VAR_4, vec4_t VAR_5, vec3_t VAR_6, vec3_t VAR_7, vec3_t VAR_8, vec3_t VAR_9 ){
 vec3_t VAR_10, VAR_11, VAR_12;
 float VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;



 FUNC_1( VAR_7, VAR_6, VAR_10 );
 FUNC_1( VAR_8, VAR_6, VAR_11 );
 FUNC_1( VAR_4, VAR_6, VAR_12 );


 VAR_13 = FUNC_0( VAR_10, VAR_10 );
 VAR_14 = FUNC_0( VAR_10, VAR_11 );
 VAR_15 = FUNC_0( VAR_11, VAR_11 );
 VAR_16 = FUNC_0( VAR_12, VAR_10 );
 VAR_17 = FUNC_0( VAR_12, VAR_11 );
 VAR_18 = VAR_14 * VAR_14 - VAR_13 * VAR_15;


 VAR_9[ 1 ] = ( VAR_14 * VAR_17 - VAR_15 * VAR_16 ) / VAR_18;
 if ( VAR_9[ 1 ] < VAR_1 || VAR_9[ 1 ] > VAR_0 ) {
  return VAR_2;
 }
 VAR_9[ 2 ] = ( VAR_14 * VAR_17 - VAR_13 * VAR_17 ) / VAR_18;
 if ( VAR_9[ 2 ] < VAR_1 || VAR_9[ 2 ] > VAR_0 ) {
  return VAR_2;
 }
 VAR_9[ 0 ] = 1.0f - ( VAR_9[ 1 ] + VAR_9[ 2 ] );


 return VAR_3;
}
