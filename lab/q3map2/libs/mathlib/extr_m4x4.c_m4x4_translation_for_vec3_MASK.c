
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;
typedef int* m4x4_t ;



void FUNC_0( m4x4_t VAR_0, const vec3_t VAR_1 ){
 VAR_0[1] = VAR_0[2] = VAR_0[3] =
        VAR_0[4] = VAR_0[6] = VAR_0[7] =
               VAR_0[8] = VAR_0[9] = VAR_0[11] = 0;

 VAR_0[0] = VAR_0[5] = VAR_0[10] = VAR_0[15] = 1;

 VAR_0[12] = VAR_1[0];
 VAR_0[13] = VAR_1[1];
 VAR_0[14] = VAR_1[2];
}
