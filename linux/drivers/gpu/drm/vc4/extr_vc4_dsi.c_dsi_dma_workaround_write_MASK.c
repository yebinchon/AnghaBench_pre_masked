
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vc4_dsi {int reg_dma_paddr; scalar_t__ reg_paddr; scalar_t__* reg_dma_mem; scalar_t__ regs; struct dma_chan* reg_dma_chan; } ;
struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;} ;
typedef int dma_cookie_t ;
struct TYPE_2__ {struct dma_async_tx_descriptor* (* device_prep_dma_memcpy ) (struct dma_chan*,scalar_t__,int ,int,int ) ;} ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dma_chan*,int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct dma_chan*,scalar_t__,int ,int,int ) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_6(struct vc4_dsi *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct dma_chan *VAR_3 = VAR_0->reg_dma_chan;
 struct dma_async_tx_descriptor *VAR_4;
 dma_cookie_t VAR_5;
 int VAR_6;


 if (!VAR_3) {
  FUNC_5(VAR_2, VAR_0->regs + VAR_1);
  return;
 }

 *VAR_0->reg_dma_mem = VAR_2;

 VAR_4 = VAR_3->device->device_prep_dma_memcpy(VAR_3,
        VAR_0->reg_paddr + VAR_1,
        VAR_0->reg_dma_paddr,
        4, 0);
 if (!VAR_4) {
  FUNC_0("Failed to set up DMA register write\n");
  return;
 }

 VAR_5 = VAR_4->tx_submit(VAR_4);
 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to submit DMA: %d\n", VAR_6);
  return;
 }
 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6)
  FUNC_0("Failed to wait for DMA: %d\n", VAR_6);
}
