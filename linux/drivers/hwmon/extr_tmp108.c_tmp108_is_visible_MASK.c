
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static umode_t FUNC_0(const void *VAR_3, enum hwmon_sensor_types VAR_4,
     u32 VAR_5, int VAR_6)
{
 if (VAR_4 == VAR_0 && VAR_5 == VAR_1)
  return 0644;

 if (VAR_4 != VAR_2)
  return 0;

 switch (VAR_5) {
 case 134:
 case 129:
 case 132:
  return 0444;
 case 130:
 case 133:
 case 128:
 case 131:
  return 0644;
 default:
  return 0;
 }
}
