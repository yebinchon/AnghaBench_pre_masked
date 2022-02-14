
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;





__attribute__((used)) static umode_t FUNC_0(const void *VAR_0, enum hwmon_sensor_types VAR_1,
     u32 VAR_2, int VAR_3)
{
 switch (VAR_2) {
 case 129:
  if (VAR_3 == 0)
   return 0;
  return 0444;
 case 128:
  return 0444;
 default:
  return 0;
 }
}
