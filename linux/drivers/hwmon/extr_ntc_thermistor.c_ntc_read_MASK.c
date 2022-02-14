
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ntc_data {int dummy; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 struct ntc_data* FUNC_0 (struct device*) ;
 long FUNC_1 (struct ntc_data*,int) ;



 int FUNC_2 (struct ntc_data*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, enum hwmon_sensor_types VAR_2,
      u32 VAR_3, int VAR_4, long *VAR_5)
{
 struct ntc_data *VAR_6 = FUNC_0(VAR_1);
 int VAR_7;

 switch (VAR_2) {
 case 130:
  switch (VAR_3) {
  case 129:
   VAR_7 = FUNC_2(VAR_6);
   if (VAR_7 < 0)
    return VAR_7;
   *VAR_5 = FUNC_1(VAR_6, VAR_7);
   return 0;
  case 128:
   *VAR_5 = 4;
   return 0;
  default:
   break;
  }
  break;
 default:
  break;
 }
 return -VAR_0;
}
