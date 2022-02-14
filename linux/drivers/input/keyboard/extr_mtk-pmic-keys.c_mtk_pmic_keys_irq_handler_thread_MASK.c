
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mtk_pmic_keys_info {int keycode; TYPE_1__* keys; TYPE_2__* regs; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int deb_mask; int deb_reg; } ;
struct TYPE_3__ {int dev; int input_dev; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct mtk_pmic_keys_info *VAR_3 = VAR_2;
 u32 VAR_4, VAR_5;

 FUNC_3(VAR_3->keys->regmap, VAR_3->regs->deb_reg, &VAR_4);

 VAR_4 &= VAR_3->regs->deb_mask;

 VAR_5 = !VAR_4;

 FUNC_1(VAR_3->keys->input_dev, VAR_3->keycode, VAR_5);
 FUNC_2(VAR_3->keys->input_dev);

 FUNC_0(VAR_3->keys->dev, "(%s) key =%d using PMIC\n",
   VAR_5 ? "pressed" : "released", VAR_3->keycode);

 return VAR_0;
}
