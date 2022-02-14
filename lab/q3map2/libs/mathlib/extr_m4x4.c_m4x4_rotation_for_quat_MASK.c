
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec4_t ;
typedef int* m4x4_t ;



void FUNC_0( m4x4_t VAR_0, const vec4_t VAR_1 ){
 float VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;

 VAR_2 = VAR_1[0] * VAR_1[0];
 VAR_3 = VAR_1[0] * VAR_1[1];
 VAR_4 = VAR_1[0] * VAR_1[2];
 VAR_5 = VAR_1[0] * VAR_1[3];

 VAR_6 = VAR_1[1] * VAR_1[1];
 VAR_7 = VAR_1[1] * VAR_1[2];
 VAR_8 = VAR_1[1] * VAR_1[3];

 VAR_9 = VAR_1[2] * VAR_1[2];
 VAR_10 = VAR_1[2] * VAR_1[3];

 VAR_0[0] = 1 - 2 * ( VAR_6 + VAR_9 );
 VAR_0[4] = 2 * ( VAR_3 - VAR_10 );
 VAR_0[8] = 2 * ( VAR_4 + VAR_8 );

 VAR_0[1] = 2 * ( VAR_3 + VAR_10 );
 VAR_0[5] = 1 - 2 * ( VAR_2 + VAR_9 );
 VAR_0[9] = 2 * ( VAR_7 - VAR_5 );

 VAR_0[2] = 2 * ( VAR_4 - VAR_8 );
 VAR_0[6] = 2 * ( VAR_7 + VAR_5 );
 VAR_0[10] = 1 - 2 * ( VAR_2 + VAR_6 );

 VAR_0[3] = VAR_0[7] = VAR_0[11] = VAR_0[12] = VAR_0[13] = VAR_0[14] = 0;
 VAR_0[15] = 1;
}
