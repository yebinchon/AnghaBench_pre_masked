
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

int
FUNC_2(struct ath_hal *VAR_3, u_int VAR_4, u_int VAR_5)
{
 if (VAR_5 & VAR_0) {
  if (VAR_4 == 2484)
   return 14;
  if (VAR_4 < 2484)
   return ((int)VAR_4 - 2407) / 5;
  else
   return 15 + ((VAR_4 - 2512) / 20);
 } else if (VAR_5 & VAR_1) {
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4, VAR_5);
  else if ((VAR_5 & VAR_2) && (VAR_4 <= 5000))
   return (VAR_4 - 4000) / 5;
  else
   return (VAR_4 - 5000) / 5;
 } else {
  if (VAR_4 == 2484)
   return 14;
  if (VAR_4 < 2484)
   return ((int)VAR_4 - 2407) / 5;
  if (VAR_4 < 5000) {
   if (FUNC_0(VAR_4))
    return FUNC_1(VAR_4, VAR_5);
   else if (VAR_4 > 4900)
    return (VAR_4 - 4000) / 5;
   else
    return 15 + ((VAR_4 - 2512) / 20);
  }
  return (VAR_4 - 5000) / 5;
 }
}
