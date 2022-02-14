
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_dev {int dma_lch_in; int dma_lch_out; scalar_t__ pio_only; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct omap_aes_dev *VAR_0)
{
 if (VAR_0->pio_only)
  return;

 FUNC_0(VAR_0->dma_lch_out);
 FUNC_0(VAR_0->dma_lch_in);
}
