
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_phy_cfg {int num_regs; int num_clks; int * clk_names; int * reg_names; } ;
struct hdmi_phy {int * clks; int * regs; TYPE_1__* pdev; struct hdmi_phy_cfg* cfg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct hdmi_phy *VAR_0)
{
 struct hdmi_phy_cfg *VAR_1 = VAR_0->cfg;
 struct device *VAR_2 = &VAR_0->pdev->dev;
 int VAR_3, VAR_4 = 0;

 FUNC_2(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_regs; VAR_3++) {
  VAR_4 = FUNC_3(VAR_0->regs[VAR_3]);
  if (VAR_4)
   FUNC_0(VAR_2, "failed to enable regulator: %s (%d)\n",
    VAR_1->reg_names[VAR_3], VAR_4);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->num_clks; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0->clks[VAR_3]);
  if (VAR_4)
   FUNC_0(VAR_2, "failed to enable clock: %s (%d)\n",
    VAR_1->clk_names[VAR_3], VAR_4);
 }

 return VAR_4;
}
