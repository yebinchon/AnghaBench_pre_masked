
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 float FUNC_0 (float*,float*) ;

void FUNC_1(vec3_t VAR_0, float VAR_1, vec3_t VAR_2, float VAR_3, float VAR_4)
{

 int VAR_5;
 float VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_2);
 VAR_6 = VAR_3 - VAR_8;
 if (VAR_6 <= 0) {
  return;
 }
 VAR_7 = VAR_4*VAR_1*VAR_3;
 if (VAR_7 > VAR_6) {
  VAR_7 = VAR_6;
 }

 for (VAR_5=0 ; VAR_5<3 ; VAR_5++) {
  VAR_0[VAR_5] += VAR_7*VAR_2[VAR_5];
 }
}
