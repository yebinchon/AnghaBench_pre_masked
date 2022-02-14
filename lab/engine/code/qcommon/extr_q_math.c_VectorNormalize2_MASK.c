
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float vec_t ;
typedef float* vec3_t ;


 int FUNC_0 (float*) ;
 scalar_t__ FUNC_1 (float) ;

vec_t FUNC_2( const vec3_t VAR_0, vec3_t VAR_1) {
 float VAR_2, VAR_3;

 VAR_2 = VAR_0[0]*VAR_0[0] + VAR_0[1]*VAR_0[1] + VAR_0[2]*VAR_0[2];

 if (VAR_2)
 {

  VAR_3 = 1/(float)FUNC_1 (VAR_2);

  VAR_2 *= VAR_3;
  VAR_1[0] = VAR_0[0]*VAR_3;
  VAR_1[1] = VAR_0[1]*VAR_3;
  VAR_1[2] = VAR_0[2]*VAR_3;
 } else {
  FUNC_0( VAR_1 );
 }

 return VAR_2;

}
