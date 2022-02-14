
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_8)
{
 u32 VAR_9 = VAR_8 >> VAR_2;
 u32 VAR_10 =
  (VAR_8 & VAR_6) >> VAR_7;
 u32 VAR_11 = (VAR_8 & VAR_0) >> VAR_1;

 if (VAR_9 == VAR_4)
  return 0x3F;
 else if (VAR_9 == VAR_5) {
  if (VAR_10 == VAR_3) {
   if (VAR_11 == 6)
    return 0xFFFF;
   else
    return 0xFFF;
  } else
   return 0xFF;
 }

 FUNC_0("CMD: Abnormal bsd cmd length! 0x%08X\n", VAR_8);
 return 0;
}
