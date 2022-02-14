
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct hdmi_phy_cfg {int num_regs; int num_clks; int * clk_names; int * reg_names; } ;
struct hdmi_phy {struct regulator** clks; TYPE_1__* pdev; struct regulator** regs; struct hdmi_phy_cfg* cfg; } ;
struct device {int dummy; } ;
typedef struct regulator clk ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 void* FUNC_3 (struct device*,int,int,int ) ;
 struct regulator* FUNC_4 (struct device*,int ) ;
 struct regulator* FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(struct hdmi_phy *VAR_2)
{
 struct hdmi_phy_cfg *VAR_3 = VAR_2->cfg;
 struct device *VAR_4 = &VAR_2->pdev->dev;
 int VAR_5, VAR_6;

 VAR_2->regs = FUNC_3(VAR_4, VAR_3->num_regs, sizeof(VAR_2->regs[0]),
     VAR_1);
 if (!VAR_2->regs)
  return -VAR_0;

 VAR_2->clks = FUNC_3(VAR_4, VAR_3->num_clks, sizeof(VAR_2->clks[0]),
     VAR_1);
 if (!VAR_2->clks)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_regs; VAR_5++) {
  struct regulator *VAR_7;

  VAR_7 = FUNC_4(VAR_4, VAR_3->reg_names[VAR_5]);
  if (FUNC_1(VAR_7)) {
   VAR_6 = FUNC_2(VAR_7);
   FUNC_0(VAR_4, "failed to get phy regulator: %s (%d)\n",
    VAR_3->reg_names[VAR_5], VAR_6);
   return VAR_6;
  }

  VAR_2->regs[VAR_5] = VAR_7;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->num_clks; VAR_5++) {
  struct clk *VAR_8;

  VAR_8 = FUNC_5(VAR_2->pdev, VAR_3->clk_names[VAR_5]);
  if (FUNC_1(VAR_8)) {
   VAR_6 = FUNC_2(VAR_8);
   FUNC_0(VAR_4, "failed to get phy clock: %s (%d)\n",
    VAR_3->clk_names[VAR_5], VAR_6);
   return VAR_6;
  }

  VAR_2->clks[VAR_5] = VAR_8;
 }

 return 0;
}
