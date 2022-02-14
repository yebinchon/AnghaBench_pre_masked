
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_phy_cfg {int num_clks; int num_regs; } ;
struct hdmi_phy {int * regs; int * clks; TYPE_1__* pdev; struct hdmi_phy_cfg* cfg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct hdmi_phy *VAR_0)
{
 struct hdmi_phy_cfg *VAR_1 = VAR_0->cfg;
 struct device *VAR_2 = &VAR_0->pdev->dev;
 int VAR_3;

 for (VAR_3 = VAR_1->num_clks - 1; VAR_3 >= 0; VAR_3--)
  FUNC_0(VAR_0->clks[VAR_3]);

 for (VAR_3 = VAR_1->num_regs - 1; VAR_3 >= 0; VAR_3--)
  FUNC_2(VAR_0->regs[VAR_3]);

 FUNC_1(VAR_2);
}
