
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {struct device* dev; int * ops; } ;
struct mtk_dsi {int irq_wait_queue; int ddp_comp; void* phy; void* regs; void* hs_clk; void* digital_clk; void* engine_clk; int bridge; int panel; TYPE_1__ host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 struct mtk_dsi* FUNC_7 (struct device*,int,int ) ;
 void* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,int,int ,int ,int ,struct mtk_dsi*) ;
 int FUNC_10 (int ,int ,int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct device*,int ,int *,int,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct mtk_dsi*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_11)
{
 struct mtk_dsi *VAR_12;
 struct device *VAR_13 = &VAR_11->dev;
 struct resource *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_12 = FUNC_7(VAR_13, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->host.ops = &VAR_10;
 VAR_12->host.dev = VAR_13;

 VAR_17 = FUNC_10(VAR_13->of_node, 0, 0,
       &VAR_12->panel, &VAR_12->bridge);
 if (VAR_17)
  return VAR_17;

 VAR_12->engine_clk = FUNC_5(VAR_13, "engine");
 if (FUNC_0(VAR_12->engine_clk)) {
  VAR_17 = FUNC_1(VAR_12->engine_clk);
  FUNC_3(VAR_13, "Failed to get engine clock: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_12->digital_clk = FUNC_5(VAR_13, "digital");
 if (FUNC_0(VAR_12->digital_clk)) {
  VAR_17 = FUNC_1(VAR_12->digital_clk);
  FUNC_3(VAR_13, "Failed to get digital clock: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_12->hs_clk = FUNC_5(VAR_13, "hs");
 if (FUNC_0(VAR_12->hs_clk)) {
  VAR_17 = FUNC_1(VAR_12->hs_clk);
  FUNC_3(VAR_13, "Failed to get hs clock: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_14 = FUNC_16(VAR_11, VAR_3, 0);
 VAR_12->regs = FUNC_6(VAR_13, VAR_14);
 if (FUNC_0(VAR_12->regs)) {
  VAR_17 = FUNC_1(VAR_12->regs);
  FUNC_3(VAR_13, "Failed to ioremap memory: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_12->phy = FUNC_8(VAR_13, "dphy");
 if (FUNC_0(VAR_12->phy)) {
  VAR_17 = FUNC_1(VAR_12->phy);
  FUNC_3(VAR_13, "Failed to get MIPI-DPHY: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_16 = FUNC_13(VAR_13->of_node, VAR_6);
 if (VAR_16 < 0) {
  FUNC_3(VAR_13, "Failed to identify by alias: %d\n", VAR_16);
  return VAR_16;
 }

 VAR_17 = FUNC_14(VAR_13, VAR_13->of_node, &VAR_12->ddp_comp, VAR_16,
    &VAR_8);
 if (VAR_17) {
  FUNC_3(VAR_13, "Failed to initialize component: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_15 = FUNC_15(VAR_11, 0);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_11->dev, "failed to request dsi irq resource\n");
  return -VAR_1;
 }

 FUNC_12(VAR_15, VAR_5);
 VAR_17 = FUNC_9(&VAR_11->dev, VAR_15, VAR_9,
          VAR_4, FUNC_4(&VAR_11->dev), VAR_12);
 if (VAR_17) {
  FUNC_3(&VAR_11->dev, "failed to request mediatek dsi irq\n");
  return -VAR_1;
 }

 FUNC_11(&VAR_12->irq_wait_queue);

 FUNC_17(VAR_11, VAR_12);

 return FUNC_2(&VAR_11->dev, &VAR_7);
}
