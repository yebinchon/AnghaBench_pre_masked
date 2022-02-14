
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
typedef float* mat4_t ;



void FUNC_0( vec3_t VAR_0, mat4_t VAR_1 )
{
 VAR_1[ 0] = 1.0f; VAR_1[ 4] = 0.0f; VAR_1[ 8] = 0.0f; VAR_1[12] = VAR_0[0];
 VAR_1[ 1] = 0.0f; VAR_1[ 5] = 1.0f; VAR_1[ 9] = 0.0f; VAR_1[13] = VAR_0[1];
 VAR_1[ 2] = 0.0f; VAR_1[ 6] = 0.0f; VAR_1[10] = 1.0f; VAR_1[14] = VAR_0[2];
 VAR_1[ 3] = 0.0f; VAR_1[ 7] = 0.0f; VAR_1[11] = 0.0f; VAR_1[15] = 1.0f;
}
