
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
typedef float* mat4_t ;


 float FUNC_0 (float*,float*) ;
 int FUNC_1 (float* const,float*) ;
 int FUNC_2 (float*,float,float*) ;

void FUNC_3( const mat4_t VAR_0, mat4_t VAR_1)
{
 vec3_t VAR_2;
 float VAR_3;

 FUNC_1(VAR_0 + 0, VAR_2);
 VAR_3 = 1.0f / FUNC_0(VAR_2, VAR_2); FUNC_2(VAR_2, VAR_3, VAR_2);
 VAR_1[ 0] = VAR_2[0]; VAR_1[ 4] = VAR_2[1]; VAR_1[ 8] = VAR_2[2]; VAR_1[12] = -FUNC_0(VAR_2, &VAR_0[12]);

 FUNC_1(VAR_0 + 4, VAR_2);
 VAR_3 = 1.0f / FUNC_0(VAR_2, VAR_2); FUNC_2(VAR_2, VAR_3, VAR_2);
 VAR_1[ 1] = VAR_2[0]; VAR_1[ 5] = VAR_2[1]; VAR_1[ 9] = VAR_2[2]; VAR_1[13] = -FUNC_0(VAR_2, &VAR_0[12]);

 FUNC_1(VAR_0 + 8, VAR_2);
 VAR_3 = 1.0f / FUNC_0(VAR_2, VAR_2); FUNC_2(VAR_2, VAR_3, VAR_2);
 VAR_1[ 2] = VAR_2[0]; VAR_1[ 6] = VAR_2[1]; VAR_1[10] = VAR_2[2]; VAR_1[14] = -FUNC_0(VAR_2, &VAR_0[12]);

 VAR_1[ 3] = 0.0f; VAR_1[ 7] = 0.0f; VAR_1[11] = 0.0f; VAR_1[15] = 1.0f;
}
