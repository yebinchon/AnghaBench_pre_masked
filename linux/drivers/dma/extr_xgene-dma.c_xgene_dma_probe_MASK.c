
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma {int clk; int * chan; int * dev; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,int *) ;
 struct xgene_dma* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct platform_device*,struct xgene_dma*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct xgene_dma*) ;
 int FUNC_13 (struct platform_device*,struct xgene_dma*) ;
 int FUNC_14 (struct xgene_dma*) ;
 int FUNC_15 (struct xgene_dma*) ;
 int FUNC_16 (struct xgene_dma*) ;
 int FUNC_17 (struct xgene_dma*) ;
 int FUNC_18 (struct xgene_dma*) ;
 int FUNC_19 (struct xgene_dma*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_3)
{
 struct xgene_dma *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_8(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = &VAR_3->dev;
 FUNC_10(VAR_3, VAR_4);

 VAR_5 = FUNC_13(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->clk = FUNC_7(&VAR_3->dev, ((void*)0));
 if (FUNC_2(VAR_4->clk) && !FUNC_0(&VAR_3->dev)) {
  FUNC_6(&VAR_3->dev, "Failed to get clk\n");
  return FUNC_3(VAR_4->clk);
 }


 if (!FUNC_2(VAR_4->clk)) {
  VAR_5 = FUNC_5(VAR_4->clk);
  if (VAR_5) {
   FUNC_6(&VAR_3->dev, "Failed to enable clk %d\n", VAR_5);
   return VAR_5;
  }
 }


 VAR_5 = FUNC_17(VAR_4);
 if (VAR_5)
  goto err_clk_enable;

 VAR_5 = FUNC_9(&VAR_3->dev, FUNC_1(42));
 if (VAR_5) {
  FUNC_6(&VAR_3->dev, "No usable DMA configuration\n");
  goto err_dma_mask;
 }


 FUNC_15(VAR_4);


 VAR_5 = FUNC_18(VAR_4);
 if (VAR_5)
  goto err_clk_enable;

 VAR_5 = FUNC_19(VAR_4);
 if (VAR_5)
  goto err_request_irq;


 FUNC_16(VAR_4);


 VAR_5 = FUNC_14(VAR_4);
 if (VAR_5)
  goto err_async_init;

 return 0;

err_async_init:
 FUNC_12(VAR_4);

err_request_irq:
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_11(&VAR_4->chan[VAR_6]);

err_dma_mask:
err_clk_enable:
 if (!FUNC_2(VAR_4->clk))
  FUNC_4(VAR_4->clk);

 return VAR_5;
}
