
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_pmic_keys {int regmap; TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct mtk_pmic_keys *VAR_4,
  u32 VAR_5)
{
 int VAR_6;
 u32 VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4->dev->of_node,
  "power-off-time-sec", &VAR_8);
 if (VAR_6)
  VAR_8 = 0;

 FUNC_1(VAR_4->regmap, VAR_5,
      VAR_2 << VAR_3,
      VAR_8 << VAR_3);

 VAR_6 = FUNC_0(VAR_4->dev->of_node,
  "mediatek,long-press-mode", &VAR_7);
 if (VAR_6)
  VAR_7 = 130;

 switch (VAR_7) {
 case 129:
  FUNC_1(VAR_4->regmap, VAR_5,
       VAR_1,
       VAR_1);
  FUNC_1(VAR_4->regmap, VAR_5,
       VAR_0,
       0);
  break;
 case 128:
  FUNC_1(VAR_4->regmap, VAR_5,
       VAR_1,
       VAR_1);
  FUNC_1(VAR_4->regmap, VAR_5,
       VAR_0,
       VAR_0);
  break;
 case 130:
  FUNC_1(VAR_4->regmap, VAR_5,
       VAR_1,
       0);
  FUNC_1(VAR_4->regmap, VAR_5,
       VAR_0,
       0);
  break;
 default:
  break;
 }
}
