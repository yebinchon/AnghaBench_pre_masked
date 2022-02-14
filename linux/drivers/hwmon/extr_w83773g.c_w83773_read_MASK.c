
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 struct regmap* FUNC_0 (struct device*) ;
 int FUNC_1 (struct regmap*,int,long*) ;
 int FUNC_2 (struct regmap*,long*) ;
 int FUNC_3 (struct regmap*,int,long*) ;
 int FUNC_4 (struct regmap*,int,long*) ;
 int FUNC_5 (struct regmap*,long*) ;
 int VAR_1 ;
 int VAR_2 ;




__attribute__((used)) static int FUNC_6(struct device *VAR_3, enum hwmon_sensor_types VAR_4,
         u32 VAR_5, int VAR_6, long *VAR_7)
{
 struct regmap *VAR_8 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_1) {
  if (VAR_5 == VAR_2)
   return FUNC_5(VAR_8, VAR_7);
  return -VAR_0;
 }

 switch (VAR_5) {
 case 129:
  if (VAR_6 == 0)
   return FUNC_2(VAR_8, VAR_7);
  return FUNC_4(VAR_8, VAR_6 - 1, VAR_7);
 case 130:
  return FUNC_1(VAR_8, VAR_6 - 1, VAR_7);
 case 128:
  return FUNC_3(VAR_8, VAR_6 - 1, VAR_7);
 default:
  return -VAR_0;
 }
}
