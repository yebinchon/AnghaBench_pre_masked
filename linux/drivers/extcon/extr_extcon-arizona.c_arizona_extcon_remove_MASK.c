
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct arizona_extcon_info {int hpdet_work; scalar_t__ micd_clamp; int micd_pol_gpio; int dev; int micvdd; struct arizona* arizona; } ;
struct arizona {int regmap; } ;


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
 int FUNC_0 (struct arizona*) ;
 int FUNC_1 (struct arizona*,int,struct arizona_extcon_info*) ;
 int FUNC_2 (struct arizona*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int ) ;
 struct arizona_extcon_info* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_12)
{
 struct arizona_extcon_info *VAR_13 = FUNC_6(VAR_12);
 struct arizona *VAR_14 = VAR_13->arizona;
 int VAR_15, VAR_16;
 bool VAR_17;
 int VAR_18;

 VAR_18 = FUNC_10(VAR_14->regmap, VAR_11,
           VAR_10, 0,
           &VAR_17);
 if (VAR_18 < 0) {
  FUNC_4(&VAR_12->dev, "Failed to disable micd on remove: %d\n",
   VAR_18);
 } else if (VAR_17) {
  FUNC_11(VAR_13->micvdd);
  FUNC_8(VAR_13->dev);
 }

 FUNC_5(VAR_13->micd_pol_gpio);

 FUNC_7(&VAR_12->dev);

 FUNC_9(VAR_14->regmap,
      VAR_8,
      VAR_9, 0);

 if (VAR_13->micd_clamp) {
  VAR_15 = VAR_5;
  VAR_16 = VAR_4;
 } else {
  VAR_15 = VAR_2;
  VAR_16 = VAR_1;
 }

 FUNC_2(VAR_14, VAR_15, 0);
 FUNC_2(VAR_14, VAR_16, 0);
 FUNC_1(VAR_14, VAR_0, VAR_13);
 FUNC_1(VAR_14, VAR_3, VAR_13);
 FUNC_1(VAR_14, VAR_15, VAR_13);
 FUNC_1(VAR_14, VAR_16, VAR_13);
 FUNC_3(&VAR_13->hpdet_work);
 FUNC_9(VAR_14->regmap, VAR_6,
      VAR_7, 0);
 FUNC_0(VAR_14);

 return 0;
}
