
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3532_led {int enabled; TYPE_1__* priv; int control_bank; } ;
struct TYPE_2__ {int regulator; int dev; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct lm3532_led *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->control_bank);
 int VAR_3;

 if (VAR_1->enabled)
  return 0;

 VAR_3 = FUNC_2(VAR_1->priv->regmap, VAR_0,
      VAR_2, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1->priv->dev, "Failed to set ctrl:%d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_1->priv->regulator);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->enabled = 1;

 return 0;
}
