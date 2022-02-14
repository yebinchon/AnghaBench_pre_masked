
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc27xx_adc_data {int hwlock; scalar_t__ base; int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (int ,scalar_t__,int,int,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_6(struct sc27xx_adc_data *VAR_19, int VAR_20,
      int VAR_21, int *VAR_22)
{
 int VAR_23;
 u32 VAR_24, VAR_25, VAR_26;

 VAR_23 = FUNC_1(VAR_19->hwlock, VAR_8);
 if (VAR_23) {
  FUNC_0(VAR_19->dev, "timeout to get the hwspinlock\n");
  return VAR_23;
 }

 VAR_23 = FUNC_5(VAR_19->regmap, VAR_19->base + VAR_4,
     VAR_7, VAR_7);
 if (VAR_23)
  goto unlock_adc;

 VAR_23 = FUNC_5(VAR_19->regmap, VAR_19->base + VAR_9,
     VAR_11, VAR_11);
 if (VAR_23)
  goto disable_adc;


 VAR_24 = (VAR_21 << VAR_18) & VAR_17;
 VAR_24 |= VAR_20 & VAR_1;
 VAR_23 = FUNC_5(VAR_19->regmap, VAR_19->base + VAR_3,
     VAR_1 | VAR_17,
     VAR_24);
 if (VAR_23)
  goto disable_adc;


 VAR_24 = VAR_0;
 VAR_24 |= (0 << VAR_16) & VAR_15;
 VAR_23 = FUNC_5(VAR_19->regmap, VAR_19->base + VAR_4,
     VAR_15 | VAR_0,
     VAR_24);
 if (VAR_23)
  goto disable_adc;

 VAR_23 = FUNC_5(VAR_19->regmap, VAR_19->base + VAR_4,
     VAR_2, VAR_2);
 if (VAR_23)
  goto disable_adc;

 VAR_23 = FUNC_4(VAR_19->regmap,
           VAR_19->base + VAR_10,
           VAR_26, (VAR_26 & VAR_12),
           VAR_13,
           VAR_14);
 if (VAR_23) {
  FUNC_0(VAR_19->dev, "read adc timeout, status = 0x%x\n", VAR_26);
  goto disable_adc;
 }

 VAR_23 = FUNC_3(VAR_19->regmap, VAR_19->base + VAR_5, &VAR_25);
 if (VAR_23)
  goto disable_adc;

 VAR_25 &= VAR_6;

disable_adc:
 FUNC_5(VAR_19->regmap, VAR_19->base + VAR_4,
      VAR_7, 0);
unlock_adc:
 FUNC_2(VAR_19->hwlock);

 if (!VAR_23)
  *VAR_22 = VAR_25;

 return VAR_23;
}
