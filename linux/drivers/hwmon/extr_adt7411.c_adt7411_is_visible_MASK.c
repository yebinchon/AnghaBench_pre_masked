
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct adt7411_data {int use_ext_temp; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static umode_t FUNC_0(const void *VAR_2,
      enum hwmon_sensor_types VAR_3,
      u32 VAR_4, int VAR_5)
{
 const struct adt7411_data *VAR_6 = VAR_2;
 bool VAR_7;

 switch (VAR_3) {
 case 139:
  VAR_7 = VAR_5 == 0 || VAR_5 >= 3 || !VAR_6->use_ext_temp;
  switch (VAR_4) {
  case 137:
  case 138:
   return VAR_7 ? VAR_0 : 0;
  case 135:
  case 136:
   return VAR_7 ? VAR_0 | VAR_1 : 0;
  }
  break;
 case 134:
  VAR_7 = VAR_5 == 0 || VAR_6->use_ext_temp;
  switch (VAR_4) {
  case 132:
  case 128:
  case 130:
  case 133:
   return VAR_7 ? VAR_0 : 0;
  case 129:
  case 131:
   return VAR_7 ? VAR_0 | VAR_1 : 0;
  }
  break;
 default:
  break;
 }
 return 0;
}
