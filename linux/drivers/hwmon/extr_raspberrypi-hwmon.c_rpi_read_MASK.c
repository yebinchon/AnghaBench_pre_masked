
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpi_hwmon_data {int last_throttled; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 struct rpi_hwmon_data* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, enum hwmon_sensor_types VAR_2,
      u32 VAR_3, int VAR_4, long *VAR_5)
{
 struct rpi_hwmon_data *VAR_6 = FUNC_0(VAR_1);

 *VAR_5 = !!(VAR_6->last_throttled & VAR_0);
 return 0;
}
