
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;


 int FUNC_0 (int*,float,int*,int*) ;
 int FUNC_1 (int*) ;
 float FUNC_2 (float) ;

int FUNC_3( vec3_t VAR_0, float VAR_1, vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4[2] ) {
 float VAR_5, VAR_6, VAR_7, VAR_8;







 FUNC_1(VAR_3);
 VAR_5 = 2 * (VAR_3[0] * (VAR_2[0] - VAR_0[0]) + VAR_3[1] * (VAR_2[1] - VAR_0[1]) + VAR_3[2] * (VAR_2[2] - VAR_0[2]));
 VAR_6 = (VAR_2[0] - VAR_0[0]) * (VAR_2[0] - VAR_0[0]) +
  (VAR_2[1] - VAR_0[1]) * (VAR_2[1] - VAR_0[1]) +
  (VAR_2[2] - VAR_0[2]) * (VAR_2[2] - VAR_0[2]) -
  VAR_1 * VAR_1;

 VAR_7 = VAR_5 * VAR_5 - 4 * VAR_6;
 if (VAR_7 > 0) {
  VAR_8 = (- VAR_5 + FUNC_2(VAR_7)) / 2;
  FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4[0]);
  VAR_8 = (- VAR_5 - FUNC_2(VAR_7)) / 2;
  FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4[1]);
  return 2;
 }
 else if (VAR_7 == 0) {
  VAR_8 = (- VAR_5 ) / 2;
  FUNC_0(VAR_2, VAR_8, VAR_3, VAR_4[0]);
  return 1;
 }
 return 0;
}
