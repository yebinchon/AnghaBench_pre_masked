
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u32 ;
struct max6621_data {int* input_chan2reg; int client; int regmap; } ;
struct device {int dummy; } ;
typedef long s8 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct max6621_data* FUNC_0 (struct device*) ;





 int FUNC_1 (int ,int ) ;
 int* VAR_7 ;
 int FUNC_2 (struct device*,long) ;
 int FUNC_3 (int ,int,long*) ;

__attribute__((used)) static int
FUNC_4(struct device *VAR_8, enum hwmon_sensor_types VAR_9, u32 VAR_10,
      int VAR_11, long *VAR_12)
{
 struct max6621_data *VAR_13 = FUNC_0(VAR_8);
 u32 VAR_14;
 int VAR_15;
 s8 VAR_16;
 int VAR_17;

 switch (VAR_9) {
 case 132:
  switch (VAR_10) {
  case 129:
   VAR_15 = VAR_13->input_chan2reg[VAR_11];
   VAR_17 = FUNC_3(VAR_13->regmap, VAR_15, &VAR_14);
   if (VAR_17)
    return VAR_17;

   VAR_17 = FUNC_2(VAR_8, VAR_14);
   if (VAR_17)
    return VAR_17;






   VAR_16 = (VAR_14 >> VAR_4);
   *VAR_12 = VAR_16 * 1000L;

   break;
  case 128:
   VAR_17 = FUNC_3(VAR_13->regmap, VAR_3,
       &VAR_14);
   if (VAR_17)
    return VAR_17;

   VAR_17 = FUNC_2(VAR_8, VAR_14);
   if (VAR_17)
    return VAR_17;

   *VAR_12 = (VAR_14 >> VAR_4) *
          1000L;

   break;
  case 131:
   VAR_11 -= VAR_6;
   VAR_15 = VAR_7[VAR_11];
   VAR_17 = FUNC_3(VAR_13->regmap, VAR_15, &VAR_14);
   if (VAR_17)
    return VAR_17;

   VAR_17 = FUNC_2(VAR_8, VAR_14);
   if (VAR_17)
    return VAR_17;

   *VAR_12 = VAR_14 * 1000L;

   break;
  case 130:






   *VAR_12 = 0;
   VAR_17 = FUNC_3(VAR_13->regmap,
       VAR_5,
       &VAR_14);
   if (VAR_17)
    return VAR_17;

   VAR_17 = FUNC_2(VAR_8, VAR_14);
   if (VAR_17) {

    if (VAR_14 == VAR_1)
     return 0;
    else
     return VAR_17;
   }





   if (VAR_14) {
    VAR_17 = FUNC_1(VAR_13->client,
      VAR_2);
    if (VAR_17)
     return VAR_17;
   }

   *VAR_12 = !!VAR_14;

   break;
  default:
   return -VAR_0;
  }
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
