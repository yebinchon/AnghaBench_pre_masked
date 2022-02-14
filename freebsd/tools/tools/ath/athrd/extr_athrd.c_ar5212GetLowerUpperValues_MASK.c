
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef int u_int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(u_int16_t VAR_2, u_int16_t *VAR_3, u_int16_t VAR_4,
                          u_int16_t *VAR_5, u_int16_t *VAR_6)
{
 u_int32_t VAR_7 = VAR_2 * VAR_1;
 u_int16_t *VAR_8 = VAR_3+VAR_4;




 if (VAR_7 < (u_int32_t)(VAR_3[0] * VAR_1 - VAR_0)) {
  *VAR_5 = *VAR_6 = VAR_3[0];
  return;
 }
 if (VAR_7 > (u_int32_t)(VAR_8[-1] * VAR_1 + VAR_0)) {
  *VAR_5 = *VAR_6 = VAR_8[-1];
  return;
 }


 for (; VAR_3 < VAR_8; VAR_3++) {




  if (FUNC_0(VAR_3[0] * VAR_1 - VAR_7) < VAR_0) {
   *VAR_5 = *VAR_6 = VAR_3[0];
   return;
  }




  if (VAR_7 < (u_int32_t)(VAR_3[1] * VAR_1 - VAR_0)) {
   *VAR_5 = VAR_3[0];
   *VAR_6 = VAR_3[1];
   return;
  }
 }
}
