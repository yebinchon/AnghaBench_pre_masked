
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double vec_t ;
typedef double* vec3_t ;


 int FUNC_0 (double*) ;
 double FUNC_1 (double) ;

vec_t FUNC_2(vec3_t VAR_0)
{
 vec_t VAR_1, VAR_2;

 VAR_1 = FUNC_1 (VAR_0[0]*VAR_0[0] + VAR_0[1]*VAR_0[1] + VAR_0[2]*VAR_0[2]);
 if (VAR_1 == 0)
 {
  FUNC_0 (VAR_0);
  return 0;
 }

 VAR_2 = 1.0/VAR_1;
 VAR_0[0] = VAR_0[0]*VAR_2;
 VAR_0[1] = VAR_0[1]*VAR_2;
 VAR_0[2] = VAR_0[2]*VAR_2;

 return VAR_1;
}
