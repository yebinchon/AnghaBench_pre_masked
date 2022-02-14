
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lochnagar_hwmon {int* power_nsamples; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 long FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct lochnagar_hwmon* FUNC_1 (struct device*) ;






 int FUNC_2 (struct device*,int,long*) ;
 int FUNC_3 (struct device*,int,int ,int,int ,long*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_8, enum hwmon_sensor_types VAR_9,
     u32 VAR_10, int VAR_11, long *VAR_12)
{
 struct lochnagar_hwmon *VAR_13 = FUNC_1(VAR_8);
 int VAR_14;

 switch (VAR_9) {
 case 132:
  return FUNC_3(VAR_8, VAR_11, VAR_6, 1, VAR_7, VAR_12);
 case 133:
  return FUNC_3(VAR_8, VAR_11, VAR_1, 1, VAR_2, VAR_12);
 case 128:
  return FUNC_3(VAR_8, VAR_11, VAR_4, 1, VAR_5, VAR_12);
 case 131:
  switch (VAR_10) {
  case 130:
   return FUNC_2(VAR_8, VAR_11, VAR_12);
  case 129:
   VAR_14 = VAR_13->power_nsamples[VAR_11] * VAR_3;
   *VAR_12 = FUNC_0(VAR_14, 1000);
   return 0;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
