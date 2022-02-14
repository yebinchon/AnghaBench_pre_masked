
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct jc42_data {unsigned int config; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
__attribute__((used)) static umode_t FUNC_0(const void *VAR_2, enum hwmon_sensor_types VAR_3,
          u32 VAR_4, int VAR_5)
{
 const struct jc42_data *VAR_6 = VAR_2;
 unsigned int VAR_7 = VAR_6->config;
 umode_t VAR_8 = 0444;

 switch (VAR_4) {
 case 129:
 case 132:
  if (!(VAR_7 & VAR_0))
   VAR_8 |= 0200;
  break;
 case 136:
  if (!(VAR_7 & VAR_1))
   VAR_8 |= 0200;
  break;
 case 134:
  if (!(VAR_7 & (VAR_0 | VAR_1)))
   VAR_8 |= 0200;
  break;
 case 133:
 case 130:
 case 128:
 case 131:
 case 135:
  break;
 default:
  VAR_8 = 0;
  break;
 }
 return VAR_8;
}
