
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ina3221_data {TYPE_1__* inputs; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;
struct TYPE_2__ {char* label; } ;


 struct ina3221_data* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, enum hwmon_sensor_types VAR_1,
          u32 VAR_2, int VAR_3, const char **VAR_4)
{
 struct ina3221_data *VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = VAR_3 - 1;

 *VAR_4 = VAR_5->inputs[VAR_6].label;

 return 0;
}
