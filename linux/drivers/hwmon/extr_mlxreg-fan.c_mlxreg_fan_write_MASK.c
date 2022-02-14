
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int reg; } ;
struct mlxreg_fan {TYPE_1__ pwm; int regmap; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 struct mlxreg_fan* FUNC_0 (struct device*) ;


 int FUNC_1 (int ,int ,long) ;

__attribute__((used)) static int
FUNC_2(struct device *VAR_4, enum hwmon_sensor_types VAR_5, u32 VAR_6,
   int VAR_7, long VAR_8)
{
 struct mlxreg_fan *VAR_9 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 129:
  switch (VAR_6) {
  case 128:
   if (VAR_8 < VAR_3 ||
       VAR_8 > VAR_2)
    return -VAR_0;
   return FUNC_1(VAR_9->regmap, VAR_9->pwm.reg, VAR_8);
  default:
   return -VAR_1;
  }
  break;

 default:
  return -VAR_1;
 }

 return -VAR_1;
}
