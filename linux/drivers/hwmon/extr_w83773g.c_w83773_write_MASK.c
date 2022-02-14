
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 struct regmap* FUNC_0 (struct device*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct regmap*,int,long) ;
 int FUNC_2 (struct regmap*,long) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, enum hwmon_sensor_types VAR_6,
   u32 VAR_7, int VAR_8, long VAR_9)
{
 struct regmap *VAR_10 = FUNC_0(VAR_5);

 if (VAR_6 == VAR_1 && VAR_7 == VAR_2)
  return FUNC_2(VAR_10, VAR_9);

 if (VAR_6 == VAR_3 && VAR_7 == VAR_4)
  return FUNC_1(VAR_10, VAR_8 - 1, VAR_9);

 return -VAR_0;
}
