
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmp421_data {int config; int* temp; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;


 long FUNC_0 (int) ;
 long FUNC_1 (int) ;
 struct tmp421_data* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, enum hwmon_sensor_types VAR_3,
         u32 VAR_4, int VAR_5, long *VAR_6)
{
 struct tmp421_data *VAR_7 = FUNC_2(VAR_2);

 switch (VAR_4) {
 case 128:
  if (VAR_7->config & VAR_1)
   *VAR_6 = FUNC_1(VAR_7->temp[VAR_5]);
  else
   *VAR_6 = FUNC_0(VAR_7->temp[VAR_5]);
  return 0;
 case 129:




  *VAR_6 = VAR_7->temp[VAR_5] & 0x01;
  return 0;
 default:
  return -VAR_0;
 }

}
