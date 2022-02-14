
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec4_t ;
typedef float* m4x4_t ;



void FUNC_0( const m4x4_t VAR_0, vec4_t VAR_1 ){
 float VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_2 = VAR_0[0] * VAR_1[0];
 VAR_3 = VAR_0[1] * VAR_1[0];
 VAR_4 = VAR_0[2] * VAR_1[0];
 VAR_5 = VAR_0[3] * VAR_1[0];
 VAR_2 += VAR_0[4] * VAR_1[1];
 VAR_3 += VAR_0[5] * VAR_1[1];
 VAR_4 += VAR_0[6] * VAR_1[1];
 VAR_5 += VAR_0[7] * VAR_1[1];
 VAR_2 += VAR_0[8] * VAR_1[2];
 VAR_3 += VAR_0[9] * VAR_1[2];
 VAR_4 += VAR_0[10] * VAR_1[2];
 VAR_5 += VAR_0[11] * VAR_1[2];
 VAR_2 += VAR_0[12] * VAR_1[3];
 VAR_3 += VAR_0[13] * VAR_1[3];
 VAR_4 += VAR_0[14] * VAR_1[3];
 VAR_5 += VAR_0[15] * VAR_1[3];

 VAR_1[0] = VAR_2;
 VAR_1[1] = VAR_3;
 VAR_1[2] = VAR_4;
 VAR_1[3] = VAR_5;
}
