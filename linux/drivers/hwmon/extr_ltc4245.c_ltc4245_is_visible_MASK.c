
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct ltc4245_data {int use_extra_gpios; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;
__attribute__((used)) static umode_t FUNC_0(const void *VAR_0,
      enum hwmon_sensor_types VAR_1,
      u32 VAR_2, int VAR_3)
{
 const struct ltc4245_data *VAR_4 = VAR_0;

 switch (VAR_1) {
 case 132:
  if (VAR_3 == 0)
   return 0;
  switch (VAR_2) {
  case 131:
   if (VAR_3 > 9 && !VAR_4->use_extra_gpios)
    return 0;
   return 0444;
  case 130:
   if (VAR_3 > 8)
    return 0;
   return 0444;
  default:
   return 0;
  }
 case 135:
  switch (VAR_2) {
  case 134:
  case 133:
   return 0444;
  default:
   return 0;
  }
 case 129:
  switch (VAR_2) {
  case 128:
   return 0444;
  default:
   return 0;
  }
 default:
  return 0;
 }
}
