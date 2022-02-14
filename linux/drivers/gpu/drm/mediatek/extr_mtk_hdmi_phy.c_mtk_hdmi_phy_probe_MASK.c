
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;
struct mtk_hdmi_phy_conf {int dummy; } ;
struct TYPE_2__ {struct clk_init_data* init; } ;
struct mtk_hdmi_phy {int drv_imp_clk; int drv_imp_d2; int drv_imp_d1; int drv_imp_d0; struct phy_provider* pll; int ibias_up; int ibias; TYPE_1__ pll_hw; struct mtk_hdmi_phy_conf* conf; struct device* dev; struct phy_provider* regs; } ;
struct clk_init_data {int num_parents; char const* const* parent_names; int name; } ;
typedef struct phy_provider clk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 char* FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 struct phy_provider* FUNC_5 (struct device*,char*) ;
 struct phy_provider* FUNC_6 (struct device*,TYPE_1__*) ;
 struct phy_provider* FUNC_7 (struct device*,struct resource*) ;
 struct mtk_hdmi_phy* FUNC_8 (struct device*,int,int ) ;
 struct phy_provider* FUNC_9 (struct device*,int ) ;
 struct phy_provider* FUNC_10 (struct device*,int *,int ) ;
 int FUNC_11 (struct mtk_hdmi_phy*,struct clk_init_data*) ;
 int FUNC_12 (struct mtk_hdmi_phy*) ;
 int FUNC_13 (int ,int ,struct phy_provider*) ;
 int VAR_3 ;
 scalar_t__ FUNC_14 (struct device*) ;
 int VAR_4 ;
 int FUNC_15 (int ,char*,int *) ;
 int FUNC_16 (int ,char*,int *) ;
 int FUNC_17 (struct phy_provider*,struct mtk_hdmi_phy*) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct mtk_hdmi_phy *VAR_7;
 struct resource *VAR_8;
 struct clk *VAR_9;
 const char *VAR_10;
 struct clk_init_data VAR_11 = {
  .num_parents = 1,
  .parent_names = (const char * const *)&VAR_10,
 };

 struct phy *VAR_12;
 struct phy_provider *VAR_13;
 int VAR_14;

 VAR_7 = FUNC_8(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_18(VAR_5, VAR_2, 0);
 VAR_7->regs = FUNC_7(VAR_6, VAR_8);
 if (FUNC_0(VAR_7->regs)) {
  VAR_14 = FUNC_1(VAR_7->regs);
  FUNC_3(VAR_6, "Failed to get memory resource: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_9 = FUNC_5(VAR_6, "pll_ref");
 if (FUNC_0(VAR_9)) {
  VAR_14 = FUNC_1(VAR_9);
  FUNC_3(&VAR_5->dev, "Failed to get PLL reference clock: %d\n",
   VAR_14);
  return VAR_14;
 }
 VAR_10 = FUNC_2(VAR_9);

 VAR_14 = FUNC_15(VAR_6->of_node, "clock-output-names",
          &VAR_11.name);
 if (VAR_14 < 0) {
  FUNC_3(VAR_6, "Failed to read clock-output-names: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_7->dev = VAR_6;
 VAR_7->conf =
  (struct mtk_hdmi_phy_conf *)FUNC_14(VAR_6);
 FUNC_11(VAR_7, &VAR_11);
 VAR_7->pll_hw.init = &VAR_11;
 VAR_7->pll = FUNC_6(VAR_6, &VAR_7->pll_hw);
 if (FUNC_0(VAR_7->pll)) {
  VAR_14 = FUNC_1(VAR_7->pll);
  FUNC_3(VAR_6, "Failed to register PLL: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_16(VAR_6->of_node, "mediatek,ibias",
       &VAR_7->ibias);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_5->dev, "Failed to get ibias: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_16(VAR_6->of_node, "mediatek,ibias_up",
       &VAR_7->ibias_up);
 if (VAR_14 < 0) {
  FUNC_3(&VAR_5->dev, "Failed to get ibias up: %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_4(VAR_6, "Using default TX DRV impedance: 4.2k/36\n");
 VAR_7->drv_imp_clk = 0x30;
 VAR_7->drv_imp_d2 = 0x30;
 VAR_7->drv_imp_d1 = 0x30;
 VAR_7->drv_imp_d0 = 0x30;

 VAR_12 = FUNC_10(VAR_6, ((void*)0), FUNC_12(VAR_7));
 if (FUNC_0(VAR_12)) {
  FUNC_3(VAR_6, "Failed to create HDMI PHY\n");
  return FUNC_1(VAR_12);
 }
 FUNC_17(VAR_12, VAR_7);

 VAR_13 = FUNC_9(VAR_6, VAR_4);
 if (FUNC_0(VAR_13)) {
  FUNC_3(VAR_6, "Failed to register HDMI PHY\n");
  return FUNC_1(VAR_13);
 }

 return FUNC_13(VAR_6->of_node, VAR_3,
       VAR_7->pll);
}
