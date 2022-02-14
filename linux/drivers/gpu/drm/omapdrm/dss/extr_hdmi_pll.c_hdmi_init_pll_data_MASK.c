
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct dss_pll {char* name; int * ops; int * hw; struct clk* clkin; int base; int id; } ;
struct hdmi_pll_data {TYPE_1__* wp; int base; struct dss_pll pll; } ;
struct dss_device {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int version; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct dss_device*,struct dss_pll*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct dss_device *VAR_4,
         struct platform_device *VAR_5,
         struct hdmi_pll_data *VAR_6)
{
 struct dss_pll *VAR_7 = &VAR_6->pll;
 struct clk *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_5->dev, "sys_clk");
 if (FUNC_1(VAR_8)) {
  FUNC_0("can't get sys_clk\n");
  return FUNC_2(VAR_8);
 }

 VAR_7->name = "hdmi";
 VAR_7->id = VAR_0;
 VAR_7->base = VAR_6->base;
 VAR_7->clkin = VAR_8;

 if (VAR_6->wp->version == 4)
  VAR_7->hw = &VAR_1;
 else
  VAR_7->hw = &VAR_2;

 VAR_7->ops = &VAR_3;

 VAR_9 = FUNC_4(VAR_4, VAR_7);
 if (VAR_9)
  return VAR_9;

 return 0;
}
