
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int node; } ;
struct TYPE_2__ {int lock; } ;
struct axi_dma_chan {TYPE_1__ vc; } ;


 int FUNC_0 (struct axi_dma_chan*) ;
 int FUNC_1 (struct axi_dma_chan*) ;
 int FUNC_2 (struct axi_dma_chan*) ;
 int FUNC_3 (struct axi_dma_chan*) ;
 int FUNC_4 (struct axi_dma_chan*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(struct axi_dma_chan *VAR_0)
{
 struct virt_dma_desc *VAR_1;
 unsigned long VAR_2;

 FUNC_7(&VAR_0->vc.lock, VAR_2);
 if (FUNC_9(FUNC_1(VAR_0))) {
  FUNC_5(FUNC_4(VAR_0), "BUG: %s caught DWAXIDMAC_IRQ_DMA_TRF, but channel not idle!\n",
   FUNC_2(VAR_0));
  FUNC_0(VAR_0);
 }


 VAR_1 = FUNC_11(&VAR_0->vc);

 FUNC_6(&VAR_1->node);
 FUNC_10(VAR_1);


 FUNC_3(VAR_0);

 FUNC_8(&VAR_0->vc.lock, VAR_2);
}
