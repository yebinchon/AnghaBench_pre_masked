
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {int * init; } ;
struct hdmi_pll_8960 {TYPE_2__ clk_hw; struct platform_device* pdev; struct clk* mmio; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {scalar_t__ rate; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct clk*) ;
 scalar_t__ FUNC_3 (int) ;
 struct clk* FUNC_4 (struct device*,TYPE_2__*) ;
 struct hdmi_pll_8960* FUNC_5 (struct device*,int,int ) ;
 TYPE_1__* VAR_3 ;
 struct clk* FUNC_6 (struct platform_device*,char*,char*) ;
 int VAR_4 ;

int FUNC_7(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct hdmi_pll_8960 *VAR_7;
 struct clk *VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < (FUNC_0(VAR_3) - 1); VAR_9++)
  if (FUNC_3(VAR_3[VAR_9].rate < VAR_3[VAR_9 + 1].rate))
   return -VAR_0;

 VAR_7 = FUNC_5(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->mmio = FUNC_6(VAR_5, "hdmi_pll", "HDMI_PLL");
 if (FUNC_2(VAR_7->mmio)) {
  FUNC_1(VAR_6, "failed to map pll base\n");
  return -VAR_1;
 }

 VAR_7->pdev = VAR_5;
 VAR_7->clk_hw.init = &VAR_4;

 VAR_8 = FUNC_4(VAR_6, &VAR_7->clk_hw);
 if (FUNC_2(VAR_8)) {
  FUNC_1(VAR_6, "failed to register pll clock\n");
  return -VAR_0;
 }

 return 0;
}
