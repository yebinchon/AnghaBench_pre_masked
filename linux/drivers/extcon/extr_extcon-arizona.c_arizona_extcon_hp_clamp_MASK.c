
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_extcon_info {struct arizona* arizona; } ;
struct arizona {int type; int hpdet_clamp; unsigned int hp_ena; int dapm; int dev; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct arizona_extcon_info *VAR_13,
        bool VAR_14)
{
 struct arizona *VAR_15 = VAR_13->arizona;
 unsigned int VAR_16 = 0, VAR_17 = 0;
 unsigned int VAR_18 = 0;
 int VAR_19;

 switch (VAR_15->type) {
 case 128:
 case 131:
  VAR_16 = 0;
  break;
 case 130:
 case 129:
  VAR_16 = VAR_2 | VAR_0 |
         VAR_1;
  if (VAR_14) {
   VAR_17 = VAR_2;
   VAR_18 = VAR_11;
  } else {
   VAR_17 = VAR_0 | VAR_1;
   VAR_18 = VAR_12;
  }

  VAR_19 = FUNC_1(VAR_15->regmap,
      VAR_6,
      VAR_3,
      VAR_18);
  if (VAR_19 != 0)
   FUNC_0(VAR_15->dev,
     "Failed to set TST_CAP_SEL: %d\n", VAR_19);
  break;
 default:
  VAR_16 = VAR_10;
  if (VAR_14)
   VAR_17 = VAR_10;
  break;
 }

 FUNC_2(VAR_15->dapm);

 VAR_15->hpdet_clamp = VAR_14;


 if (VAR_14) {
  VAR_19 = FUNC_1(VAR_15->regmap,
      VAR_9,
      VAR_7 |
      VAR_8, 0);
  if (VAR_19 != 0)
   FUNC_0(VAR_15->dev,
    "Failed to disable headphone outputs: %d\n",
     VAR_19);
 }

 if (VAR_16) {
  VAR_19 = FUNC_1(VAR_15->regmap, VAR_4,
      VAR_16, VAR_17);
  if (VAR_19 != 0)
   FUNC_0(VAR_15->dev, "Failed to do clamp: %d\n",
     VAR_19);

  VAR_19 = FUNC_1(VAR_15->regmap, VAR_5,
      VAR_16, VAR_17);
  if (VAR_19 != 0)
   FUNC_0(VAR_15->dev, "Failed to do clamp: %d\n",
     VAR_19);
 }


 if (!VAR_14) {
  VAR_19 = FUNC_1(VAR_15->regmap,
      VAR_9,
      VAR_7 |
      VAR_8, VAR_15->hp_ena);
  if (VAR_19 != 0)
   FUNC_0(VAR_15->dev,
     "Failed to restore headphone outputs: %d\n",
     VAR_19);
 }

 FUNC_3(VAR_15->dapm);
}
