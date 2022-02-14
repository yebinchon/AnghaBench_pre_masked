
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec4_t ;
typedef float uint16_t ;



void FUNC_0(uint16_t *VAR_0, vec4_t VAR_1)
{
 VAR_0[0] = VAR_1[0] * 65535.0f + 0.5f;
 VAR_0[1] = VAR_1[1] * 65535.0f + 0.5f;
 VAR_0[2] = VAR_1[2] * 65535.0f + 0.5f;
 VAR_0[3] = VAR_1[3] * 65535.0f + 0.5f;
}
