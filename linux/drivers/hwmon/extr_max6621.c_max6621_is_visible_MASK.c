
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct max6621_data {scalar_t__* input_chan2reg; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;
__attribute__((used)) static umode_t
FUNC_0(const void *VAR_0, enum hwmon_sensor_types VAR_1, u32 VAR_2,
     int VAR_3)
{

 if (((struct max6621_data *)VAR_0)->input_chan2reg[VAR_3] < 0)
  return 0;

 switch (VAR_1) {
 case 133:
  switch (VAR_2) {
  case 130:
  case 129:
  case 131:
   return 0444;
  case 128:
  case 132:
   return 0644;
  default:
   break;
  }

 default:
  break;
 }

 return 0;
}
