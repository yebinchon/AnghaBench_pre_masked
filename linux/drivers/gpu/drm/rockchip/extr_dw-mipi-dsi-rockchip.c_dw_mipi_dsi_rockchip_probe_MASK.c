
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_dw_dsi_chip_data {scalar_t__ reg; int flags; int max_data_lanes; } ;
struct resource {scalar_t__ start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct dw_mipi_dsi_rockchip* priv_data; int * host_ops; int * phy_ops; int max_data_lanes; void* base; } ;
struct dw_mipi_dsi_rockchip {void* pllref_clk; void* dmd; TYPE_1__ pdata; struct rockchip_dw_dsi_chip_data const* cdata; void* base; struct device* dev; void* grf_regmap; void* grf_clk; void* phy_cfg_clk; } ;
struct device_node {int name; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 struct dw_mipi_dsi_rockchip* FUNC_7 (struct device*,int,int ) ;
 void* FUNC_8 (struct platform_device*,TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct rockchip_dw_dsi_chip_data* FUNC_9 (struct device*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct dw_mipi_dsi_rockchip*) ;
 void* FUNC_12 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct device_node *VAR_11 = VAR_10->of_node;
 struct dw_mipi_dsi_rockchip *VAR_12;
 struct resource *VAR_13;
 const struct rockchip_dw_dsi_chip_data *VAR_14 =
    FUNC_9(VAR_10);
 int VAR_15, VAR_16;

 VAR_12 = FUNC_7(VAR_10, sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return -VAR_3;

 VAR_13 = FUNC_10(VAR_9, VAR_6, 0);
 VAR_12->base = FUNC_6(VAR_10, VAR_13);
 if (FUNC_1(VAR_12->base)) {
  FUNC_0(VAR_10, "Unable to get dsi registers\n");
  return FUNC_2(VAR_12->base);
 }

 VAR_16 = 0;
 while (VAR_14[VAR_16].reg) {
  if (VAR_14[VAR_16].reg == VAR_13->start) {
   VAR_12->cdata = &VAR_14[VAR_16];
   break;
  }

  VAR_16++;
 }

 if (!VAR_12->cdata) {
  FUNC_4(VAR_10, "no dsi-config for %s node\n", VAR_11->name);
  return -VAR_2;
 }

 VAR_12->pllref_clk = FUNC_5(VAR_10, "ref");
 if (FUNC_1(VAR_12->pllref_clk)) {
  VAR_15 = FUNC_2(VAR_12->pllref_clk);
  FUNC_0(VAR_10,
         "Unable to get pll reference clock: %d\n", VAR_15);
  return VAR_15;
 }

 if (VAR_12->cdata->flags & VAR_1) {
  VAR_12->phy_cfg_clk = FUNC_5(VAR_10, "phy_cfg");
  if (FUNC_1(VAR_12->phy_cfg_clk)) {
   VAR_15 = FUNC_2(VAR_12->phy_cfg_clk);
   FUNC_0(VAR_10,
          "Unable to get phy_cfg_clk: %d\n", VAR_15);
   return VAR_15;
  }
 }

 if (VAR_12->cdata->flags & VAR_0) {
  VAR_12->grf_clk = FUNC_5(VAR_10, "grf");
  if (FUNC_1(VAR_12->grf_clk)) {
   VAR_15 = FUNC_2(VAR_12->grf_clk);
   FUNC_0(VAR_10, "Unable to get grf_clk: %d\n", VAR_15);
   return VAR_15;
  }
 }

 VAR_12->grf_regmap = FUNC_12(VAR_11, "rockchip,grf");
 if (FUNC_1(VAR_12->grf_regmap)) {
  FUNC_0(VAR_12->dev, "Unable to get rockchip,grf\n");
  return FUNC_2(VAR_12->grf_regmap);
 }

 VAR_12->dev = VAR_10;
 VAR_12->pdata.base = VAR_12->base;
 VAR_12->pdata.max_data_lanes = VAR_12->cdata->max_data_lanes;
 VAR_12->pdata.phy_ops = &VAR_8;
 VAR_12->pdata.host_ops = &VAR_7;
 VAR_12->pdata.priv_data = VAR_12;
 FUNC_11(VAR_9, VAR_12);

 VAR_12->dmd = FUNC_8(VAR_9, &VAR_12->pdata);
 if (FUNC_1(VAR_12->dmd)) {
  VAR_15 = FUNC_2(VAR_12->dmd);
  if (VAR_15 != -VAR_4)
   FUNC_0(VAR_10,
          "Failed to probe dw_mipi_dsi: %d\n", VAR_15);
  goto err_clkdisable;
 }

 return 0;

err_clkdisable:
 FUNC_3(VAR_12->pllref_clk);
 return VAR_15;
}
