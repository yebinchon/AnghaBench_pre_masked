
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec4_t ;
typedef float* vec3_t ;



__attribute__((used)) static void FUNC_0( vec4_t VAR_0, vec3_t VAR_1, vec3_t VAR_2,
      float *VAR_3 ) {
 float VAR_4 = 2.0f * VAR_0[0] * VAR_0[0];
 float VAR_5 = 2.0f * VAR_0[1] * VAR_0[1];
 float VAR_6 = 2.0f * VAR_0[2] * VAR_0[2];
 float VAR_7 = 2.0f * VAR_0[0] * VAR_0[1];
 float VAR_8 = 2.0f * VAR_0[0] * VAR_0[2];
 float VAR_9 = 2.0f * VAR_0[1] * VAR_0[2];
 float VAR_10 = 2.0f * VAR_0[3] * VAR_0[0];
 float VAR_11 = 2.0f * VAR_0[3] * VAR_0[1];
 float VAR_12 = 2.0f * VAR_0[3] * VAR_0[2];

 VAR_3[ 0] = VAR_1[0] * (1.0f - (VAR_5 + VAR_6));
 VAR_3[ 1] = VAR_1[0] * (VAR_7 - VAR_12);
 VAR_3[ 2] = VAR_1[0] * (VAR_8 + VAR_11);
 VAR_3[ 3] = VAR_2[0];
 VAR_3[ 4] = VAR_1[1] * (VAR_7 + VAR_12);
 VAR_3[ 5] = VAR_1[1] * (1.0f - (VAR_4 + VAR_6));
 VAR_3[ 6] = VAR_1[1] * (VAR_9 - VAR_10);
 VAR_3[ 7] = VAR_2[1];
 VAR_3[ 8] = VAR_1[2] * (VAR_8 - VAR_11);
 VAR_3[ 9] = VAR_1[2] * (VAR_9 + VAR_10);
 VAR_3[10] = VAR_1[2] * (1.0f - (VAR_4 + VAR_5));
 VAR_3[11] = VAR_2[2];
}
