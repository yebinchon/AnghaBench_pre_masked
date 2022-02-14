
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lm3642_chip_data {int regmap; scalar_t__ tx_pin; int dev; int strobe_pin; int torch_pin; scalar_t__ last_flag; } ;
typedef enum lm3642_mode { ____Placeholder_lm3642_mode } lm3642_mode ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct lm3642_chip_data *VAR_15,
     u8 VAR_16, enum lm3642_mode VAR_17)
{
 int VAR_18;

 VAR_18 = FUNC_2(VAR_15->regmap, VAR_5, &VAR_15->last_flag);
 if (VAR_18 < 0) {
  FUNC_0(VAR_15->dev, "Failed to read REG_FLAG Register\n");
  goto out;
 }

 if (VAR_15->last_flag)
  FUNC_1(VAR_15->dev, "Last FLAG is 0x%x\n", VAR_15->last_flag);


 if (!VAR_16)
  VAR_17 = 129;

 switch (VAR_17) {
 case 128:
  VAR_18 = FUNC_3(VAR_15->regmap, VAR_6,
      VAR_9 << VAR_10,
      (VAR_16 - 1) << VAR_10);

  if (VAR_15->torch_pin)
   VAR_17 |= (VAR_11 << VAR_12);
  break;

 case 131:
  VAR_18 = FUNC_3(VAR_15->regmap, VAR_6,
      VAR_0 << VAR_1,
      (VAR_16 - 1) << VAR_1);

  if (VAR_15->strobe_pin)
   VAR_17 |= (VAR_7 << VAR_8);
  break;

 case 130:
  VAR_18 = FUNC_3(VAR_15->regmap, VAR_6,
      VAR_9 << VAR_10,
      (VAR_16 - 1) << VAR_10);
  break;

 case 129:

  break;

 default:
  return VAR_18;
 }
 if (VAR_18 < 0) {
  FUNC_0(VAR_15->dev, "Failed to write REG_I_CTRL Register\n");
  goto out;
 }

 if (VAR_15->tx_pin)
  VAR_17 |= (VAR_13 << VAR_14);

 VAR_18 = FUNC_3(VAR_15->regmap, VAR_4,
     VAR_2 << VAR_3,
     VAR_17 << VAR_3);
out:
 return VAR_18;
}
