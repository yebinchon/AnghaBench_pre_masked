
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u32 ;
struct mlxreg_fan_tacho {int mask; int reg; } ;
struct TYPE_2__ {int reg; } ;
struct mlxreg_fan {TYPE_1__ pwm; int regmap; int samples; int divider; struct mlxreg_fan_tacho* tacho; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 long FUNC_0 (long,int ) ;
 long FUNC_1 (long,int ,int ) ;
 struct mlxreg_fan* FUNC_2 (struct device*) ;





 int FUNC_3 (int ,int ,long*) ;

__attribute__((used)) static int
FUNC_4(struct device *VAR_1, enum hwmon_sensor_types VAR_2, u32 VAR_3,
  int VAR_4, long *VAR_5)
{
 struct mlxreg_fan *VAR_6 = FUNC_2(VAR_1);
 struct mlxreg_fan_tacho *VAR_7;
 u32 VAR_8;
 int VAR_9;

 switch (VAR_2) {
 case 132:
  VAR_7 = &VAR_6->tacho[VAR_4];
  switch (VAR_3) {
  case 130:
   VAR_9 = FUNC_3(VAR_6->regmap, VAR_7->reg, &VAR_8);
   if (VAR_9)
    return VAR_9;

   *VAR_5 = FUNC_1(VAR_8, VAR_6->divider,
        VAR_6->samples);
   break;

  case 131:
   VAR_9 = FUNC_3(VAR_6->regmap, VAR_7->reg, &VAR_8);
   if (VAR_9)
    return VAR_9;

   *VAR_5 = FUNC_0(VAR_8, VAR_7->mask);
   break;

  default:
   return -VAR_0;
  }
  break;

 case 129:
  switch (VAR_3) {
  case 128:
   VAR_9 = FUNC_3(VAR_6->regmap, VAR_6->pwm.reg, &VAR_8);
   if (VAR_9)
    return VAR_9;

   *VAR_5 = VAR_8;
   break;

  default:
   return -VAR_0;
  }
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
