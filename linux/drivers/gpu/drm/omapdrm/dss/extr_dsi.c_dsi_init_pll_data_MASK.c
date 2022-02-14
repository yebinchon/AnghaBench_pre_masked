
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_pll {char* name; int * ops; int hw; int base; struct clk* clkin; int id; } ;
struct dss_device {int dummy; } ;
struct dsi_data {scalar_t__ module_id; TYPE_1__* data; int pll_base; int dev; struct dss_pll pll; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int pll_hw; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct dss_device*,struct dss_pll*) ;

__attribute__((used)) static int FUNC_5(struct dss_device *VAR_3, struct dsi_data *VAR_4)
{
 struct dss_pll *VAR_5 = &VAR_4->pll;
 struct clk *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4->dev, "sys_clk");
 if (FUNC_1(VAR_6)) {
  FUNC_0("can't get sys_clk\n");
  return FUNC_2(VAR_6);
 }

 VAR_5->name = VAR_4->module_id == 0 ? "dsi0" : "dsi1";
 VAR_5->id = VAR_4->module_id == 0 ? VAR_0 : VAR_1;
 VAR_5->clkin = VAR_6;
 VAR_5->base = VAR_4->pll_base;
 VAR_5->hw = VAR_4->data->pll_hw;
 VAR_5->ops = &VAR_2;

 VAR_7 = FUNC_4(VAR_3, VAR_5);
 if (VAR_7)
  return VAR_7;

 return 0;
}
