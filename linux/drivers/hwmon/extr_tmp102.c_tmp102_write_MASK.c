
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmp102 {int regmap; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (long,int,int) ;
 struct tmp102* FUNC_1 (struct device*) ;


 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, enum hwmon_sensor_types VAR_4,
   u32 VAR_5, int VAR_6, long VAR_7)
{
 struct tmp102 *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 switch (VAR_5) {
 case 128:
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_9 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_7, -256000, 255000);
 return FUNC_2(VAR_8->regmap, VAR_9, FUNC_3(VAR_7));
}
