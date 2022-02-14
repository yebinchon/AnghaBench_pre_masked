
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct k8temp_data {int sensorsp; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static umode_t
FUNC_0(const void *VAR_2, enum hwmon_sensor_types VAR_3,
    u32 VAR_4, int VAR_5)
{
 const struct k8temp_data *VAR_6 = VAR_2;

 if ((VAR_5 & 1) && !(VAR_6->sensorsp & VAR_1))
  return 0;

 if ((VAR_5 & 2) && !(VAR_6->sensorsp & VAR_0))
  return 0;

 return 0444;
}
