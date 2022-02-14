
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;



void FUNC_0( vec3_t VAR_0, vec3_t VAR_1, float VAR_2, vec3_t VAR_3)
{
 VAR_3[0] = VAR_0[0] * (1.0f - VAR_2) + VAR_1[0] * VAR_2;
 VAR_3[1] = VAR_0[1] * (1.0f - VAR_2) + VAR_1[1] * VAR_2;
 VAR_3[2] = VAR_0[2] * (1.0f - VAR_2) + VAR_1[2] * VAR_2;
}
