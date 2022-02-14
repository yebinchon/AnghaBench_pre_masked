
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_t ;
typedef scalar_t__* vec3_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;

vec_t FUNC_3(vec3_t VAR_1, vec3_t VAR_2, vec3_t VAR_3, int VAR_4)
{
 vec3_t VAR_5, VAR_6;
 int VAR_7;

 if (VAR_4)
 {
  for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
  {
   if (VAR_1[VAR_7] > VAR_0) VAR_5[VAR_7] = VAR_3[VAR_7];
   else if (VAR_1[VAR_7] < -VAR_0) VAR_5[VAR_7] = VAR_2[VAR_7];
   else VAR_5[VAR_7] = 0;
  }
 }
 else
 {
  for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
  {
   if (VAR_1[VAR_7] > VAR_0) VAR_5[VAR_7] = VAR_2[VAR_7];
   else if (VAR_1[VAR_7] < -VAR_0) VAR_5[VAR_7] = VAR_3[VAR_7];
   else VAR_5[VAR_7] = 0;
  }
 }
 FUNC_1(VAR_1, VAR_6);
 FUNC_2(VAR_6);
 return FUNC_0(VAR_5, VAR_6);
}
