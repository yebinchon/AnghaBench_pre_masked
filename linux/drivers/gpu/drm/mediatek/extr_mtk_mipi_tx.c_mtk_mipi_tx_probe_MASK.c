
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
struct TYPE_2__ {struct clk_init_data* init; } ;
struct mtk_mipi_tx {struct phy_provider* pll; struct device* dev; TYPE_1__ pll_hw; struct phy_provider* regs; int driver_data; } ;
struct clk_init_data {int num_parents; char const* const* parent_names; int name; int flags; int * ops; } ;
typedef struct phy_provider clk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 char* FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct phy_provider* FUNC_4 (struct device*,int *) ;
 struct phy_provider* FUNC_5 (struct device*,TYPE_1__*) ;
 struct phy_provider* FUNC_6 (struct device*,struct resource*) ;
 struct mtk_mipi_tx* FUNC_7 (struct device*,int,int ) ;
 struct phy_provider* FUNC_8 (struct device*,int ) ;
 struct phy_provider* FUNC_9 (struct device*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,int ,struct phy_provider*) ;
 int VAR_6 ;
 int FUNC_11 (struct device*) ;
 int VAR_7 ;
 int FUNC_12 (int ,char*,int *) ;
 int FUNC_13 (struct phy_provider*,struct mtk_mipi_tx*) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct mtk_mipi_tx *VAR_10;
 struct resource *VAR_11;
 struct clk *VAR_12;
 const char *VAR_13;
 struct clk_init_data VAR_14 = {
  .ops = &VAR_5,
  .num_parents = 1,
  .parent_names = (const char * const *)&VAR_13,
  .flags = VAR_0,
 };
 struct phy *VAR_15;
 struct phy_provider *VAR_16;
 int VAR_17;

 VAR_10 = FUNC_7(VAR_9, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->driver_data = FUNC_11(VAR_9);
 VAR_11 = FUNC_14(VAR_8, VAR_3, 0);
 VAR_10->regs = FUNC_6(VAR_9, VAR_11);
 if (FUNC_0(VAR_10->regs)) {
  VAR_17 = FUNC_1(VAR_10->regs);
  FUNC_3(VAR_9, "Failed to get memory resource: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_12 = FUNC_4(VAR_9, ((void*)0));
 if (FUNC_0(VAR_12)) {
  VAR_17 = FUNC_1(VAR_12);
  FUNC_3(VAR_9, "Failed to get reference clock: %d\n", VAR_17);
  return VAR_17;
 }
 VAR_13 = FUNC_2(VAR_12);

 VAR_17 = FUNC_12(VAR_9->of_node, "clock-output-names",
          &VAR_14.name);
 if (VAR_17 < 0) {
  FUNC_3(VAR_9, "Failed to read clock-output-names: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_10->pll_hw.init = &VAR_14;
 VAR_10->pll = FUNC_5(VAR_9, &VAR_10->pll_hw);
 if (FUNC_0(VAR_10->pll)) {
  VAR_17 = FUNC_1(VAR_10->pll);
  FUNC_3(VAR_9, "Failed to register PLL: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_15 = FUNC_9(VAR_9, ((void*)0), &VAR_4);
 if (FUNC_0(VAR_15)) {
  VAR_17 = FUNC_1(VAR_15);
  FUNC_3(VAR_9, "Failed to create MIPI D-PHY: %d\n", VAR_17);
  return VAR_17;
 }
 FUNC_13(VAR_15, VAR_10);

 VAR_16 = FUNC_8(VAR_9, VAR_7);
 if (FUNC_0(VAR_16)) {
  VAR_17 = FUNC_1(VAR_16);
  return VAR_17;
 }

 VAR_10->dev = VAR_9;

 return FUNC_10(VAR_9->of_node, VAR_6,
       VAR_10->pll);
}
