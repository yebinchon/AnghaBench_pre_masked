
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; int id; } ;
struct dw_dma_chip_pdata {int (* probe ) (struct dw_dma_chip*) ;struct dw_dma_chip* chip; scalar_t__ pdata; } ;
struct dw_dma_chip {scalar_t__ irq; int clk; int dw; struct device* dev; scalar_t__ pdata; int id; int regs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct device*) ;
 struct dw_dma_chip_pdata* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*) ;
 struct dw_dma_chip_pdata* FUNC_8 (struct device*,struct dw_dma_chip_pdata const*,int,int ) ;
 struct dw_dma_chip* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct device*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct platform_device*) ;
 scalar_t__ FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (struct platform_device*,struct dw_dma_chip_pdata*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int FUNC_19 (struct dw_dma_chip*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_3)
{
 const struct dw_dma_chip_pdata *VAR_4;
 struct dw_dma_chip_pdata *VAR_5;
 struct dw_dma_chip *VAR_6;
 struct device *VAR_7 = &VAR_3->dev;
 int VAR_8;

 VAR_4 = FUNC_6(VAR_7);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_8(&VAR_3->dev, VAR_4, sizeof(*VAR_4), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_9(VAR_7, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->irq = FUNC_15(VAR_3, 0);
 if (VAR_6->irq < 0)
  return VAR_6->irq;

 VAR_6->regs = FUNC_10(VAR_3, 0);
 if (FUNC_1(VAR_6->regs))
  return FUNC_2(VAR_6->regs);

 VAR_8 = FUNC_11(&VAR_3->dev, FUNC_0(32));
 if (VAR_8)
  return VAR_8;

 if (!VAR_5->pdata)
  VAR_5->pdata = FUNC_5(VAR_7);
 if (!VAR_5->pdata)
  VAR_5->pdata = FUNC_14(VAR_3);

 VAR_6->dev = VAR_7;
 VAR_6->id = VAR_3->id;
 VAR_6->pdata = VAR_5->pdata;

 VAR_5->chip = VAR_6;

 VAR_6->clk = FUNC_7(VAR_6->dev, "hclk");
 if (FUNC_1(VAR_6->clk))
  return FUNC_2(VAR_6->clk);
 VAR_8 = FUNC_4(VAR_6->clk);
 if (VAR_8)
  return VAR_8;

 FUNC_18(&VAR_3->dev);

 VAR_8 = VAR_5->probe(VAR_6);
 if (VAR_8)
  goto err_dw_dma_probe;

 FUNC_16(VAR_3, VAR_5);

 FUNC_13(VAR_6->dw);

 FUNC_12(VAR_6->dw);

 return 0;

err_dw_dma_probe:
 FUNC_17(&VAR_3->dev);
 FUNC_3(VAR_6->clk);
 return VAR_8;
}
