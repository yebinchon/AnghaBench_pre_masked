
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
typedef float int16_t ;



void FUNC_0(int16_t *VAR_0, vec3_t VAR_1)
{
 VAR_0[0] = VAR_1[0] * 32767.0f + (VAR_1[0] > 0.0f ? 0.5f : -0.5f);
 VAR_0[1] = VAR_1[1] * 32767.0f + (VAR_1[1] > 0.0f ? 0.5f : -0.5f);
 VAR_0[2] = VAR_1[2] * 32767.0f + (VAR_1[2] > 0.0f ? 0.5f : -0.5f);
 VAR_0[3] = 0;
}
