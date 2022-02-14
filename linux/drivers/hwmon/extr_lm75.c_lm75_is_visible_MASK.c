
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef int u32 ;
struct lm75_data {TYPE_1__* params; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;
struct TYPE_2__ {int num_sample_times; } ;
__attribute__((used)) static umode_t FUNC_0(const void *VAR_0, enum hwmon_sensor_types VAR_1,
          u32 VAR_2, int VAR_3)
{
 const struct lm75_data *VAR_4 = VAR_0;

 switch (VAR_1) {
 case 133:
  switch (VAR_2) {
  case 132:
   if (VAR_4->params->num_sample_times > 1)
    return 0644;
   return 0444;
  }
  break;
 case 131:
  switch (VAR_2) {
  case 130:
   return 0444;
  case 129:
  case 128:
   return 0644;
  }
  break;
 default:
  break;
 }
 return 0;
}
