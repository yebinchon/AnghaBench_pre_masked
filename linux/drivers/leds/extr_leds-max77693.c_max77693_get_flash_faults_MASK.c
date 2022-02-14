
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct regmap {int dummy; } ;
struct max77693_sub_led {scalar_t__ fled_id; int flash_faults; } ;
struct max77693_led_device {scalar_t__ iout_joint; struct regmap* regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct regmap*,int ,unsigned int*) ;
 struct max77693_led_device* FUNC_1 (struct max77693_sub_led*) ;

__attribute__((used)) static int FUNC_2(struct max77693_sub_led *VAR_10)
{
 struct max77693_led_device *VAR_11 = FUNC_1(VAR_10);
 struct regmap *VAR_12 = VAR_11->regmap;
 unsigned int VAR_13;
 u8 VAR_14, VAR_15;
 int VAR_16;

 VAR_10->flash_faults = 0;

 if (VAR_11->iout_joint) {
  VAR_14 = VAR_0 | VAR_2;
  VAR_15 = VAR_1 |
       VAR_3;
 } else {
  VAR_14 = (VAR_10->fled_id == VAR_5) ?
      VAR_0 :
      VAR_2;
  VAR_15 = (VAR_10->fled_id == VAR_5) ?
      VAR_1 :
      VAR_3;
 }

 VAR_16 = FUNC_0(VAR_12, VAR_9, &VAR_13);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_13 & VAR_14)
  VAR_10->flash_faults |= VAR_7;
 if (VAR_13 & VAR_15)
  VAR_10->flash_faults |= VAR_8;
 if (VAR_13 & VAR_4)
  VAR_10->flash_faults |= VAR_6;

 return 0;
}
