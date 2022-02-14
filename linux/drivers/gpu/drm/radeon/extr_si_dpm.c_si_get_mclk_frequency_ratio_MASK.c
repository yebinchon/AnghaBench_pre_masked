
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



u8 FUNC_0(u32 VAR_0, bool VAR_1)
{
 u8 VAR_2;

 if (VAR_1) {
  if (VAR_0 < 12500)
   VAR_2 = 0x00;
  else if (VAR_0 > 47500)
   VAR_2 = 0x0f;
  else
   VAR_2 = (u8)((VAR_0 - 10000) / 2500);
 } else {
  if (VAR_0 < 65000)
   VAR_2 = 0x00;
  else if (VAR_0 > 135000)
   VAR_2 = 0x0f;
  else
   VAR_2 = (u8)((VAR_0 - 60000) / 5000);
 }
 return VAR_2;
}
