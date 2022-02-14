
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;



void FUNC_0( vec3_t VAR_0, vec3_t VAR_1, vec3_t VAR_2 ){
 VAR_2[0] = VAR_0[1] * VAR_1[2] - VAR_0[2] * VAR_1[1];
 VAR_2[1] = VAR_0[2] * VAR_1[0] - VAR_0[0] * VAR_1[2];
 VAR_2[2] = VAR_0[0] * VAR_1[1] - VAR_0[1] * VAR_1[0];
}
