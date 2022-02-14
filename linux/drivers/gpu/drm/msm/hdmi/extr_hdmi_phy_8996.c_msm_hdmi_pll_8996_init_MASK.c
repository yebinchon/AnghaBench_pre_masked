
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int * init; } ;
struct hdmi_pll_8996 {TYPE_1__ clk_hw; struct clk** mmio_qserdes_tx; struct clk* mmio_qserdes_com; struct platform_device* pdev; } ;
struct clk {int dummy; } ;
typedef int name ;
typedef int label ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,TYPE_1__*) ;
 struct hdmi_pll_8996* FUNC_3 (struct device*,int,int ) ;
 void* FUNC_4 (struct platform_device*,char*,char*) ;
 int VAR_4 ;
 int FUNC_5 (char*,int,char*,int) ;

int FUNC_6(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct hdmi_pll_8996 *VAR_7;
 struct clk *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->pdev = VAR_5;

 VAR_7->mmio_qserdes_com = FUNC_4(VAR_5, "hdmi_pll", "HDMI_PLL");
 if (FUNC_1(VAR_7->mmio_qserdes_com)) {
  FUNC_0(VAR_6, "failed to map pll base\n");
  return -VAR_1;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  char VAR_10[32], VAR_11[32];

  FUNC_5(VAR_10, sizeof(VAR_10), "hdmi_tx_l%d", VAR_9);
  FUNC_5(VAR_11, sizeof(VAR_11), "HDMI_TX_L%d", VAR_9);

  VAR_7->mmio_qserdes_tx[VAR_9] = FUNC_4(VAR_5, VAR_10, VAR_11);
  if (FUNC_1(VAR_7->mmio_qserdes_tx[VAR_9])) {
   FUNC_0(VAR_6, "failed to map pll base\n");
   return -VAR_1;
  }
 }
 VAR_7->clk_hw.init = &VAR_4;

 VAR_8 = FUNC_2(VAR_6, &VAR_7->clk_hw);
 if (FUNC_1(VAR_8)) {
  FUNC_0(VAR_6, "failed to register pll clock\n");
  return -VAR_0;
 }

 return 0;
}
