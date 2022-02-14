
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_dev {int * dma_lch_in; int * dma_lch_out; int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct omap_aes_dev *VAR_0)
{
 int VAR_1;

 VAR_0->dma_lch_out = ((void*)0);
 VAR_0->dma_lch_in = ((void*)0);

 VAR_0->dma_lch_in = FUNC_4(VAR_0->dev, "rx");
 if (FUNC_0(VAR_0->dma_lch_in)) {
  FUNC_2(VAR_0->dev, "Unable to request in DMA channel\n");
  return FUNC_1(VAR_0->dma_lch_in);
 }

 VAR_0->dma_lch_out = FUNC_4(VAR_0->dev, "tx");
 if (FUNC_0(VAR_0->dma_lch_out)) {
  FUNC_2(VAR_0->dev, "Unable to request out DMA channel\n");
  VAR_1 = FUNC_1(VAR_0->dma_lch_out);
  goto err_dma_out;
 }

 return 0;

err_dma_out:
 FUNC_3(VAR_0->dma_lch_in);

 return VAR_1;
}
