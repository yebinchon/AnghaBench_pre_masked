
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmp108 {int regmap; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 long FUNC_0 (long,int ,int ) ;
 struct tmp108* FUNC_1 (struct device*) ;
 int VAR_16 ;
 int VAR_17 ;




 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (long) ;
 long FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_18, enum hwmon_sensor_types VAR_19,
   u32 VAR_20, int VAR_21, long VAR_22)
{
 struct tmp108 *VAR_23 = FUNC_1(VAR_18);
 u32 VAR_24, VAR_25;
 int VAR_26;

 if (VAR_19 == VAR_16) {
  if (VAR_20 == VAR_17) {
   if (VAR_22 < 156)
    VAR_25 = VAR_4;
   else if (VAR_22 < 625)
    VAR_25 = VAR_6;
   else if (VAR_22 < 2500)
    VAR_25 = VAR_5;
   else
    VAR_25 = VAR_3;
   return FUNC_3(VAR_23->regmap,
        VAR_11,
        VAR_1,
        VAR_25);
  }
  return -VAR_0;
 }

 switch (VAR_20) {
 case 129:
 case 131:
  VAR_22 = FUNC_0(VAR_22, VAR_15, VAR_14);
  return FUNC_4(VAR_23->regmap,
        VAR_20 == 129 ?
     VAR_13 : VAR_12,
        FUNC_5(VAR_22));
 case 128:
 case 130:
  VAR_22 = FUNC_0(VAR_22, VAR_15, VAR_14);
  VAR_26 = FUNC_2(VAR_23->regmap,
      VAR_20 == 128 ?
     VAR_13 : VAR_12,
      &VAR_24);
  if (VAR_26 < 0)
   return VAR_26;
  if (VAR_20 == 128)
   VAR_22 -= FUNC_6(VAR_24);
  else
   VAR_22 = FUNC_6(VAR_24) - VAR_22;
  if (VAR_22 < 500)
   VAR_25 = VAR_7;
  else if (VAR_22 < 1500)
   VAR_25 = VAR_8;
  else if (VAR_22 < 3000)
   VAR_25 = VAR_9;
  else
   VAR_25 = VAR_10;
  return FUNC_3(VAR_23->regmap, VAR_11,
       VAR_2, VAR_25);
 default:
  return -VAR_0;
 }
}
