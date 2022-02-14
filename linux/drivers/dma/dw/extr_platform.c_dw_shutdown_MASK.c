
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dw_dma_chip_pdata {struct dw_dma_chip* chip; } ;
struct dw_dma_chip {int clk; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct dw_dma_chip*) ;
 struct dw_dma_chip_pdata* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct platform_device *VAR_0)
{
 struct dw_dma_chip_pdata *VAR_1 = FUNC_2(VAR_0);
 struct dw_dma_chip *VAR_2 = VAR_1->chip;
 FUNC_3(VAR_2->dev);
 FUNC_1(VAR_2);
 FUNC_4(VAR_2->dev);

 FUNC_0(VAR_2->clk);
}
