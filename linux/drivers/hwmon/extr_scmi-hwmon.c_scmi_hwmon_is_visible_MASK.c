
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct scmi_sensors {struct scmi_sensor_info*** info; } ;
struct scmi_sensor_info {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;



__attribute__((used)) static umode_t
FUNC_0(const void *VAR_0, enum hwmon_sensor_types VAR_1,
        u32 VAR_2, int VAR_3)
{
 const struct scmi_sensor_info *VAR_4;
 const struct scmi_sensors *VAR_5 = VAR_0;

 VAR_4 = *(VAR_5->info[VAR_1] + VAR_3);
 if (VAR_4)
  return 0444;

 return 0;
}
