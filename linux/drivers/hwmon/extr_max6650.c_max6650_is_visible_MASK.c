
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct max6650_data {int nr_fans; int alarm_en; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static umode_t FUNC_0(const void *VAR_3,
      enum hwmon_sensor_types VAR_4, u32 VAR_5,
      int VAR_6)
{
 const struct max6650_data *VAR_7 = VAR_3;

 if (VAR_6 && (VAR_6 >= VAR_7->nr_fans || VAR_4 != 137))
  return 0;

 switch (VAR_4) {
 case 137:
  switch (VAR_5) {
  case 134:
   return 0444;
  case 131:
  case 136:
   return 0644;
  case 132:
   if (VAR_7->alarm_en & VAR_1)
    return 0444;
   break;
  case 133:
   if (VAR_7->alarm_en & VAR_0)
    return 0444;
   break;
  case 135:
   if (VAR_7->alarm_en & VAR_2)
    return 0444;
   break;
  default:
   break;
  }
  break;
 case 130:
  switch (VAR_5) {
  case 128:
  case 129:
   return 0644;
  default:
   break;
  }
  break;
 default:
  break;
 }
 return 0;
}
