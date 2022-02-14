
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct max31790_data {int* fan_config; int* pwm; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct max31790_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct max31790_data*) ;


 struct max31790_data* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, u32 VAR_4, int VAR_5,
        long *VAR_6)
{
 struct max31790_data *VAR_7 = FUNC_2(VAR_3);
 u8 VAR_8;

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_8 = VAR_7->fan_config[VAR_5];

 switch (VAR_4) {
 case 128:
  *VAR_6 = VAR_7->pwm[VAR_5] >> 8;
  return 0;
 case 129:
  if (VAR_8 & VAR_1)
   *VAR_6 = 2;
  else if (VAR_8 & VAR_2)
   *VAR_6 = 1;
  else
   *VAR_6 = 0;
  return 0;
 default:
  return -VAR_0;
 }
}
