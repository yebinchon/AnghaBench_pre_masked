
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;


__attribute__((used)) static umode_t
FUNC_0(const void *VAR_1, enum hwmon_sensor_types VAR_2,
         u32 VAR_3, int VAR_4)
{
 if (VAR_2 != VAR_0)
  return 0;

 switch (VAR_3) {
 case 128:
  return 0444;
 default:
  return 0;
 }
}
