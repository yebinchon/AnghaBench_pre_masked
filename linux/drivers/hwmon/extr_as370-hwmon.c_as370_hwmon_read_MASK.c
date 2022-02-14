
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct as370_hwmon {scalar_t__ base; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct as370_hwmon* FUNC_1 (struct device*) ;

 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, enum hwmon_sensor_types VAR_4,
       u32 VAR_5, int VAR_6, long *VAR_7)
{
 int VAR_8;
 struct as370_hwmon *VAR_9 = FUNC_1(VAR_3);

 switch (VAR_5) {
 case 128:
  VAR_8 = FUNC_2(VAR_9->base + VAR_2) & VAR_0;
  *VAR_7 = FUNC_0(VAR_8 * 251802, 4096) - 85525;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
