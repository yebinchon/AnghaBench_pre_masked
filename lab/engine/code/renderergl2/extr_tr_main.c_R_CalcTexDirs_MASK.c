
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
typedef float* vec2_t ;


 int FUNC_0 (float*,float,float,float) ;

void FUNC_1(vec3_t VAR_0, vec3_t VAR_1, const vec3_t VAR_2, const vec3_t VAR_3,
       const vec3_t VAR_4, const vec2_t VAR_5, const vec2_t VAR_6, const vec2_t VAR_7)
{
 float VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 float VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;

 VAR_8 = VAR_3[0] - VAR_2[0];
 VAR_9 = VAR_4[0] - VAR_2[0];
 VAR_10 = VAR_3[1] - VAR_2[1];
 VAR_11 = VAR_4[1] - VAR_2[1];
 VAR_12 = VAR_3[2] - VAR_2[2];
 VAR_13 = VAR_4[2] - VAR_2[2];

 VAR_14 = VAR_6[0] - VAR_5[0];
 VAR_15 = VAR_7[0] - VAR_5[0];
 VAR_16 = VAR_6[1] - VAR_5[1];
 VAR_17 = VAR_7[1] - VAR_5[1];

 VAR_18 = VAR_14 * VAR_17 - VAR_15 * VAR_16;
 if (VAR_18) VAR_18 = 1.0f / VAR_18;

 FUNC_0(VAR_0, (VAR_17 * VAR_8 - VAR_16 * VAR_9) * VAR_18, (VAR_17 * VAR_10 - VAR_16 * VAR_11) * VAR_18, (VAR_17 * VAR_12 - VAR_16 * VAR_13) * VAR_18);
 FUNC_0(VAR_1, (VAR_14 * VAR_9 - VAR_15 * VAR_8) * VAR_18, (VAR_14 * VAR_11 - VAR_15 * VAR_10) * VAR_18, (VAR_14 * VAR_13 - VAR_15 * VAR_12) * VAR_18);
}
