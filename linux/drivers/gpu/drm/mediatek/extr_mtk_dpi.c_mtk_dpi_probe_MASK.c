
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct mtk_dpi_conf {int dummy; } ;
struct mtk_dpi {int irq; int ddp_comp; TYPE_1__* bridge; void* tvd_clk; void* pixel_clk; void* engine_clk; void* regs; struct mtk_dpi_conf* conf; struct device* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 struct mtk_dpi* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (int ,int ,int ,int *,TYPE_1__**) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct device*,int ,int *,int,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (struct device*) ;
 int FUNC_12 (struct platform_device*,int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct mtk_dpi*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct mtk_dpi *VAR_9;
 struct resource *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_9 = FUNC_7(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = VAR_8;
 VAR_9->conf = (struct mtk_dpi_conf *)FUNC_11(VAR_8);

 VAR_10 = FUNC_13(VAR_7, VAR_3, 0);
 VAR_9->regs = FUNC_6(VAR_8, VAR_10);
 if (FUNC_0(VAR_9->regs)) {
  VAR_12 = FUNC_1(VAR_9->regs);
  FUNC_3(VAR_8, "Failed to ioremap mem resource: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_9->engine_clk = FUNC_5(VAR_8, "engine");
 if (FUNC_0(VAR_9->engine_clk)) {
  VAR_12 = FUNC_1(VAR_9->engine_clk);
  FUNC_3(VAR_8, "Failed to get engine clock: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_9->pixel_clk = FUNC_5(VAR_8, "pixel");
 if (FUNC_0(VAR_9->pixel_clk)) {
  VAR_12 = FUNC_1(VAR_9->pixel_clk);
  FUNC_3(VAR_8, "Failed to get pixel clock: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_9->tvd_clk = FUNC_5(VAR_8, "pll");
 if (FUNC_0(VAR_9->tvd_clk)) {
  VAR_12 = FUNC_1(VAR_9->tvd_clk);
  FUNC_3(VAR_8, "Failed to get tvdpll clock: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_9->irq = FUNC_12(VAR_7, 0);
 if (VAR_9->irq <= 0) {
  FUNC_3(VAR_8, "Failed to get irq: %d\n", VAR_9->irq);
  return -VAR_0;
 }

 VAR_12 = FUNC_8(VAR_8->of_node, 0, 0,
       ((void*)0), &VAR_9->bridge);
 if (VAR_12)
  return VAR_12;

 FUNC_4(VAR_8, "Found bridge node: %pOF\n", VAR_9->bridge->of_node);

 VAR_11 = FUNC_9(VAR_8->of_node, VAR_4);
 if (VAR_11 < 0) {
  FUNC_3(VAR_8, "Failed to identify by alias: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_12 = FUNC_10(VAR_8, VAR_8->of_node, &VAR_9->ddp_comp, VAR_11,
    &VAR_6);
 if (VAR_12) {
  FUNC_3(VAR_8, "Failed to initialize component: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_14(VAR_7, VAR_9);

 VAR_12 = FUNC_2(VAR_8, &VAR_5);
 if (VAR_12) {
  FUNC_3(VAR_8, "Failed to add component: %d\n", VAR_12);
  return VAR_12;
 }

 return 0;
}
