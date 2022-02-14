
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, enum hwmon_sensor_types VAR_3,
      u32 VAR_4, int VAR_5, long *VAR_6)
{
 int VAR_7;

 switch (VAR_4) {
 case 128:

  VAR_7 = (FUNC_0(VAR_0) >> 9) & 0x01FF;
  VAR_7 = VAR_7 * 5;

  VAR_7 -= 380;

  VAR_7 = VAR_7 * 100;
  break;
 default:
  return -VAR_1;
 }

 *VAR_6 = VAR_7;
 return 0;
}
