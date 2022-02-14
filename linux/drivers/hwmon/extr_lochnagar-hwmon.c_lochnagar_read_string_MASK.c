
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;



 char** VAR_1 ;

__attribute__((used)) static int FUNC_0(struct device *VAR_2,
     enum hwmon_sensor_types VAR_3, u32 VAR_4,
     int VAR_5, const char **VAR_6)
{
 switch (VAR_3) {
 case 129:
 case 130:
 case 128:
  *VAR_6 = VAR_1[VAR_5];
  return 0;
 default:
  return -VAR_0;
 }
}
