
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u8 ;
typedef int u32 ;
struct max31790_data {int* fan_config; } ;


 int VAR_0 ;
 int VAR_1 ;




__attribute__((used)) static umode_t FUNC_0(const void *VAR_2, u32 VAR_3, int VAR_4)
{
 const struct max31790_data *VAR_5 = VAR_2;
 u8 VAR_6 = VAR_5->fan_config[VAR_4 % VAR_1];

 switch (VAR_3) {
 case 129:
 case 130:
  if (VAR_4 < VAR_1 ||
      (VAR_6 & VAR_0))
   return 0444;
  return 0;
 case 128:
  if (VAR_4 < VAR_1 &&
      !(VAR_6 & VAR_0))
   return 0644;
  return 0;
 default:
  return 0;
 }
}
