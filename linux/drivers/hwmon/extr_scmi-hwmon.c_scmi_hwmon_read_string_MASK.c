
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scmi_sensors {struct scmi_sensor_info*** info; } ;
struct scmi_sensor_info {char* name; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 struct scmi_sensors* FUNC_0 (struct device*) ;

__attribute__((used)) static int
FUNC_1(struct device *VAR_0, enum hwmon_sensor_types VAR_1,
         u32 VAR_2, int VAR_3, const char **VAR_4)
{
 const struct scmi_sensor_info *VAR_5;
 struct scmi_sensors *VAR_6 = FUNC_0(VAR_0);

 VAR_5 = *(VAR_6->info[VAR_1] + VAR_3);
 *VAR_4 = VAR_5->name;

 return 0;
}
