
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int directions; int channels; int device_issue_pending; int device_tx_status; int device_synchronize; int device_terminate_all; int device_prep_slave_sg; int device_free_chan_resources; int residue_granularity; void* dst_addr_widths; void* src_addr_widths; int cap_mask; struct device* dev; } ;
struct uniphier_mdmac_device {int clk; struct dma_device ddev; int reg_base; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int *) ;
 int FUNC_9 (struct device*,struct resource*) ;
 struct uniphier_mdmac_device* FUNC_10 (struct device*,int ,int ) ;
 int FUNC_11 (struct dma_device*) ;
 int FUNC_12 (struct dma_device*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct device*,int ) ;
 int FUNC_15 (int ,int ,struct dma_device*) ;
 int VAR_9 ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*) ;
 int FUNC_18 (struct platform_device*,struct uniphier_mdmac_device*) ;
 int FUNC_19 (struct uniphier_mdmac_device*,int ,int) ;
 int FUNC_20 (struct platform_device*,struct uniphier_mdmac_device*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_16)
{
 struct device *VAR_17 = &VAR_16->dev;
 struct uniphier_mdmac_device *VAR_18;
 struct dma_device *VAR_19;
 struct resource *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_21 = FUNC_17(VAR_16);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_22 = FUNC_14(VAR_17, FUNC_1(32));
 if (VAR_22)
  return VAR_22;

 VAR_18 = FUNC_10(VAR_17, FUNC_19(VAR_18, VAR_8, VAR_21),
       VAR_5);
 if (!VAR_18)
  return -VAR_4;

 VAR_20 = FUNC_16(VAR_16, VAR_6, 0);
 VAR_18->reg_base = FUNC_9(VAR_17, VAR_20);
 if (FUNC_3(VAR_18->reg_base))
  return FUNC_4(VAR_18->reg_base);

 VAR_18->clk = FUNC_8(VAR_17, ((void*)0));
 if (FUNC_3(VAR_18->clk)) {
  FUNC_7(VAR_17, "failed to get clock\n");
  return FUNC_4(VAR_18->clk);
 }

 VAR_22 = FUNC_6(VAR_18->clk);
 if (VAR_22)
  return VAR_22;

 VAR_19 = &VAR_18->ddev;
 VAR_19->dev = VAR_17;
 FUNC_13(VAR_2, VAR_19->cap_mask);
 VAR_19->src_addr_widths = VAR_7;
 VAR_19->dst_addr_widths = VAR_7;
 VAR_19->directions = FUNC_0(VAR_1) | FUNC_0(VAR_0);
 VAR_19->residue_granularity = VAR_3;
 VAR_19->device_free_chan_resources = VAR_10;
 VAR_19->device_prep_slave_sg = VAR_12;
 VAR_19->device_terminate_all = VAR_14;
 VAR_19->device_synchronize = VAR_13;
 VAR_19->device_tx_status = VAR_15;
 VAR_19->device_issue_pending = VAR_11;
 FUNC_2(&VAR_19->channels);

 for (VAR_23 = 0; VAR_23 < VAR_21; VAR_23++) {
  VAR_22 = FUNC_20(VAR_16, VAR_18, VAR_23);
  if (VAR_22)
   goto disable_clk;
 }

 VAR_22 = FUNC_11(VAR_19);
 if (VAR_22)
  goto disable_clk;

 VAR_22 = FUNC_15(VAR_17->of_node, VAR_9,
      VAR_19);
 if (VAR_22)
  goto unregister_dmac;

 FUNC_18(VAR_16, VAR_18);

 return 0;

unregister_dmac:
 FUNC_12(VAR_19);
disable_clk:
 FUNC_5(VAR_18->clk);

 return VAR_22;
}
