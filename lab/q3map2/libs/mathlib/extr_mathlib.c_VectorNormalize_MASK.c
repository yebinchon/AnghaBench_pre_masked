
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;


 int FUNC_0 (float*) ;
 double FUNC_1 (float) ;

vec_t FUNC_2( const vec3_t VAR_0, vec3_t VAR_1 ) {
 vec_t VAR_2, VAR_3;

 VAR_2 = (vec_t)FUNC_1( VAR_0[0] * VAR_0[0] + VAR_0[1] * VAR_0[1] + VAR_0[2] * VAR_0[2] );
 if ( VAR_2 == 0 ) {
  FUNC_0( VAR_1 );
  return 0;
 }

 VAR_3 = 1.0f / VAR_2;
 VAR_1[0] = VAR_0[0] * VAR_3;
 VAR_1[1] = VAR_0[1] * VAR_3;
 VAR_1[2] = VAR_0[2] * VAR_3;

 return VAR_2;



}
