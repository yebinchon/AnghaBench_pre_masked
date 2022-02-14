
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct regmap {int dummy; } ;
struct max77693_led_device {scalar_t__ iout_joint; struct regmap* regmap; } ;
struct max77693_led_config_data {scalar_t__ low_vsys; int boost_mode; int boost_vout; scalar_t__* iout_flash_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
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
 scalar_t__ FUNC_0 (struct max77693_led_device*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct max77693_led_device*,int,scalar_t__) ;
 int FUNC_4 (struct max77693_led_device*,int ) ;
 int FUNC_5 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct max77693_led_device *VAR_14,
    struct max77693_led_config_data *VAR_15)
{
 struct regmap *VAR_16 = VAR_14->regmap;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21[2];
 u8 VAR_22;






 if (VAR_14->iout_joint) {
  VAR_18 = VAR_2;
  VAR_19 = VAR_2;
  VAR_21[VAR_2] = VAR_15->iout_flash_max[VAR_2] +
     VAR_15->iout_flash_max[VAR_3];
 } else {
  VAR_18 = FUNC_0(VAR_14, VAR_2) ? VAR_2 : VAR_3;
  VAR_19 = FUNC_0(VAR_14, VAR_3) ? VAR_3 : VAR_2;
  VAR_21[VAR_2] = VAR_15->iout_flash_max[VAR_2];
  VAR_21[VAR_3] = VAR_15->iout_flash_max[VAR_3];
 }

 for (VAR_17 = VAR_18; VAR_17 <= VAR_19; ++VAR_17) {
  VAR_20 = FUNC_3(VAR_14, VAR_17,
     VAR_21[VAR_17]);
  if (VAR_20 < 0)
   return VAR_20;
 }

 VAR_22 = VAR_13 | VAR_10;
 VAR_20 = FUNC_5(VAR_16, VAR_5, VAR_22);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_15->low_vsys > 0)
  VAR_22 = FUNC_2(VAR_15->low_vsys) |
      VAR_11;
 else
  VAR_22 = 0;

 VAR_20 = FUNC_5(VAR_16, VAR_6, VAR_22);
 if (VAR_20 < 0)
  return VAR_20;
 VAR_20 = FUNC_5(VAR_16, VAR_7, 0);
 if (VAR_20 < 0)
  return VAR_20;

 if (VAR_15->boost_mode == VAR_4)
  VAR_22 = VAR_0;
 else
  VAR_22 = VAR_15->boost_mode | VAR_15->boost_mode << 1;

 if (FUNC_0(VAR_14, VAR_2) && FUNC_0(VAR_14, VAR_3))
  VAR_22 |= VAR_1;

 VAR_20 = FUNC_5(VAR_16, VAR_8, VAR_22);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_22 = FUNC_1(VAR_15->boost_vout);
 VAR_20 = FUNC_5(VAR_16, VAR_9, VAR_22);
 if (VAR_20 < 0)
  return VAR_20;

 return FUNC_4(VAR_14, VAR_12);
}
