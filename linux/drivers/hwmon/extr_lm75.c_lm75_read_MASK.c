
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm75_data {long sample_time; int resolution; int regmap; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lm75_data* FUNC_0 (struct device*) ;






 long FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4, enum hwmon_sensor_types VAR_5,
       u32 VAR_6, int VAR_7, long *VAR_8)
{
 struct lm75_data *VAR_9 = FUNC_0(VAR_4);
 unsigned int VAR_10;
 int VAR_11, VAR_12;

 switch (VAR_5) {
 case 133:
  switch (VAR_6) {
  case 132:
   *VAR_8 = VAR_9->sample_time;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 131:
  switch (VAR_6) {
  case 130:
   VAR_12 = VAR_3;
   break;
  case 129:
   VAR_12 = VAR_2;
   break;
  case 128:
   VAR_12 = VAR_1;
   break;
  default:
   return -VAR_0;
  }
  VAR_11 = FUNC_2(VAR_9->regmap, VAR_12, &VAR_10);
  if (VAR_11 < 0)
   return VAR_11;

  *VAR_8 = FUNC_1(VAR_10, VAR_9->resolution);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
