
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct max6621_data {int regmap; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (long,int ,int ) ;
 struct max6621_data* FUNC_1 (struct device*) ;



 int * VAR_5 ;
 long FUNC_2 (long) ;
 int FUNC_3 (int ,int ,long) ;

__attribute__((used)) static int
FUNC_4(struct device *VAR_6, enum hwmon_sensor_types VAR_7, u32 VAR_8,
       int VAR_9, long VAR_10)
{
 struct max6621_data *VAR_11 = FUNC_1(VAR_6);
 u32 VAR_12;

 switch (VAR_7) {
 case 130:
  switch (VAR_8) {
  case 128:

   VAR_10 = FUNC_0(VAR_10, VAR_4,
     VAR_3);
   VAR_10 = FUNC_2(VAR_10);

   return FUNC_3(VAR_11->regmap,
         VAR_1, VAR_10);
  case 129:
   VAR_9 -= VAR_2;
   VAR_12 = VAR_5[VAR_9];

   VAR_10 = FUNC_0(VAR_10, VAR_4,
     VAR_3);
   VAR_10 = VAR_10 / 1000L;

   return FUNC_3(VAR_11->regmap, VAR_12, VAR_10);
  default:
   return -VAR_0;
  }
  break;

 default:
  return -VAR_0;
 }

 return -VAR_0;
}
