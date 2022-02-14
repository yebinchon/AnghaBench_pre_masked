
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dw_dma_chip_pdata {int (* remove ) (struct dw_dma_chip*) ;struct dw_dma_chip* chip; } ;
struct dw_dma_chip {int clk; int dev; int dw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct dw_dma_chip_pdata* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dw_dma_chip*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct dw_dma_chip_pdata *VAR_1 = FUNC_4(VAR_0);
 struct dw_dma_chip *VAR_2 = VAR_1->chip;
 int VAR_3;

 FUNC_2(VAR_2->dw);

 FUNC_3(VAR_2->dw);

 VAR_3 = VAR_1->remove(VAR_2);
 if (VAR_3)
  FUNC_1(VAR_2->dev, "can't remove device properly: %d\n", VAR_3);

 FUNC_5(&VAR_0->dev);
 FUNC_0(VAR_2->clk);

 return 0;
}
