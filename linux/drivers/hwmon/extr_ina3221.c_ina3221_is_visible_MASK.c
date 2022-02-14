
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct ina3221_input {int label; } ;
struct ina3221_data {struct ina3221_input* inputs; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
__attribute__((used)) static umode_t FUNC_0(const void *VAR_1,
      enum hwmon_sensor_types VAR_2,
      u32 VAR_3, int VAR_4)
{
 const struct ina3221_data *VAR_5 = VAR_1;
 const struct ina3221_input *VAR_6 = ((void*)0);

 switch (VAR_2) {
 case 140:
  switch (VAR_3) {
  case 139:
  case 138:
   return 0644;
  default:
   return 0;
  }
 case 131:

  if (VAR_4 == 0)
   return 0;

  switch (VAR_3) {
  case 128:
   if (VAR_4 - 1 <= VAR_0)
    VAR_6 = &VAR_5->inputs[VAR_4 - 1];

   return (VAR_6 && VAR_6->label) ? 0444 : 0;
  case 129:
   return 0444;
  case 130:
   return 0644;
  default:
   return 0;
  }
 case 137:
  switch (VAR_3) {
  case 134:
  case 135:
  case 132:
   return 0444;
  case 136:
  case 133:
   return 0644;
  default:
   return 0;
  }
 default:
  return 0;
 }
}
