
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pmic_keys_info {int keycode; int irq; TYPE_1__* regs; struct mtk_pmic_keys* keys; } ;
struct mtk_pmic_keys {int input_dev; int dev; int regmap; } ;
struct TYPE_2__ {int intsel_mask; int intsel_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int *,int ,int,char*,struct mtk_pmic_keys_info*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mtk_pmic_keys *VAR_4,
  struct mtk_pmic_keys_info *VAR_5)
{
 int VAR_6;

 VAR_5->keys = VAR_4;

 VAR_6 = FUNC_3(VAR_4->regmap, VAR_5->regs->intsel_reg,
     VAR_5->regs->intsel_mask,
     VAR_5->regs->intsel_mask);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4->dev, VAR_5->irq, ((void*)0),
     VAR_3,
     VAR_1 | VAR_2,
     "mtk-pmic-keys", VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_4->dev, "Failed to request IRQ: %d: %d\n",
   VAR_5->irq, VAR_6);
  return VAR_6;
 }

 FUNC_2(VAR_4->input_dev, VAR_0, VAR_5->keycode);

 return 0;
}
