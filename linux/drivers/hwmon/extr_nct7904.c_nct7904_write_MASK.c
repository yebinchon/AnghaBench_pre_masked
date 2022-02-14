
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;




 int FUNC_0 (struct device*,int ,int,long) ;
 int FUNC_1 (struct device*,int ,int,long) ;
 int FUNC_2 (struct device*,int ,int,long) ;
 int FUNC_3 (struct device*,int ,int,long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, enum hwmon_sensor_types VAR_2,
    u32 VAR_3, int VAR_4, long VAR_5)
{
 switch (VAR_2) {
 case 130:
  return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
 case 131:
  return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
 case 129:
  return FUNC_2(VAR_1, VAR_3, VAR_4, VAR_5);
 case 128:
  return FUNC_3(VAR_1, VAR_3, VAR_4, VAR_5);
 default:
  return -VAR_0;
 }
}
