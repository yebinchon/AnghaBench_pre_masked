
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;
typedef int qboolean ;


 float FUNC_0 (float) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1(vec3_t VAR_2, float VAR_3, vec3_t VAR_4)
{
 int VAR_5;
 float VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_7 = FUNC_0(VAR_2[VAR_5]);
  VAR_4[VAR_5] = FUNC_0(VAR_4[VAR_5]);
  VAR_6 = VAR_4[VAR_5] - VAR_7;
  if (VAR_4[VAR_5] > VAR_7) {
   if (VAR_6 > 180.0) VAR_6 -= 360.0;
  }
  else {
   if (VAR_6 < -180.0) VAR_6 += 360.0;
  }
  if (VAR_6 > 0) {
   if (VAR_6 > VAR_3 * 0.5) return VAR_0;
  }
  else {
   if (VAR_6 < -VAR_3 * 0.5) return VAR_0;
  }
 }
 return VAR_1;
}
