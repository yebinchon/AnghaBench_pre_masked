
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;



void FUNC_0(vec3_t VAR_0[3], int VAR_1, int VAR_2) {
 float VAR_3 = VAR_0[VAR_1][VAR_2];
 VAR_0[VAR_1][VAR_2] = VAR_0[VAR_2][VAR_1];
 VAR_0[VAR_2][VAR_1] = VAR_3;
}
