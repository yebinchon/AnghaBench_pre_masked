
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u8 ;
typedef int u32 ;
struct max31790_data {int* fan_config; } ;


 int VAR_0 ;



__attribute__((used)) static umode_t FUNC_0(const void *VAR_1, u32 VAR_2, int VAR_3)
{
 const struct max31790_data *VAR_4 = VAR_1;
 u8 VAR_5 = VAR_4->fan_config[VAR_3];

 switch (VAR_2) {
 case 128:
 case 129:
  if (!(VAR_5 & VAR_0))
   return 0644;
  return 0;
 default:
  return 0;
 }
}
