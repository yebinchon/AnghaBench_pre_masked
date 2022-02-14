
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct mtk_cec {int irq; int clk; int regs; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct mtk_cec* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int *,int ,int,char*,struct device*) ;
 int FUNC_8 (struct mtk_cec*) ;
 int FUNC_9 (struct mtk_cec*) ;
 int VAR_6 ;
 int FUNC_10 (struct platform_device*,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct mtk_cec*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct mtk_cec *VAR_9;
 struct resource *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_6(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_12(VAR_7, VAR_9);
 FUNC_13(&VAR_9->lock);

 VAR_10 = FUNC_11(VAR_7, VAR_2, 0);
 VAR_9->regs = FUNC_5(VAR_8, VAR_10);
 if (FUNC_0(VAR_9->regs)) {
  VAR_11 = FUNC_1(VAR_9->regs);
  FUNC_3(VAR_8, "Failed to ioremap cec: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_9->clk = FUNC_4(VAR_8, ((void*)0));
 if (FUNC_0(VAR_9->clk)) {
  VAR_11 = FUNC_1(VAR_9->clk);
  FUNC_3(VAR_8, "Failed to get cec clock: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_9->irq = FUNC_10(VAR_7, 0);
 if (VAR_9->irq < 0) {
  FUNC_3(VAR_8, "Failed to get cec irq: %d\n", VAR_9->irq);
  return VAR_9->irq;
 }

 VAR_11 = FUNC_7(VAR_8, VAR_9->irq, ((void*)0),
     VAR_6,
     VAR_4 | VAR_5 |
     VAR_3, "hdmi hpd", VAR_8);
 if (VAR_11) {
  FUNC_3(VAR_8, "Failed to register cec irq: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_9->clk);
 if (VAR_11) {
  FUNC_3(VAR_8, "Failed to enable cec clock: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_9(VAR_9);
 FUNC_8(VAR_9);

 return 0;
}
