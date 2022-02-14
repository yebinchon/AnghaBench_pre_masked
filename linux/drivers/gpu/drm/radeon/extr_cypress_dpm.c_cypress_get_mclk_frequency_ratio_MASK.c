
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;

u8 FUNC_0(struct radeon_device *VAR_1,
        u32 VAR_2, bool VAR_3)
{
 u8 VAR_4;

 if (VAR_1->family >= VAR_0) {
  if (VAR_3) {
   if (VAR_2 < 10000)
    VAR_4 = 0x00;
   else if (VAR_2 > 47500)
    VAR_4 = 0x0f;
   else
    VAR_4 = (u8)((VAR_2 - 10000) / 2500);
  } else {
   if (VAR_2 < 65000)
    VAR_4 = 0x00;
   else if (VAR_2 > 135000)
    VAR_4 = 0x0f;
   else
    VAR_4 = (u8)((VAR_2 - 60000) / 5000);
  }
 } else {
  if (VAR_3) {
   if (VAR_2 < 10000)
    VAR_4 = 0x00;
   else if (VAR_2 > 47500)
    VAR_4 = 0x0f;
   else
    VAR_4 = (u8)((VAR_2 - 10000) / 2500);
  } else {
   if (VAR_2 < 40000)
    VAR_4 = 0x00;
   else if (VAR_2 > 115000)
    VAR_4 = 0x0f;
   else
    VAR_4 = (u8)((VAR_2 - 40000) / 5000);
  }
 }
 return VAR_4;
}
