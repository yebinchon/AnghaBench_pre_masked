
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chan; } ;
struct virt_dma_desc {TYPE_2__ tx; } ;
struct owl_dma_txd {int dummy; } ;
struct owl_dma {int dummy; } ;
struct TYPE_3__ {int device; } ;


 int FUNC_0 (struct owl_dma*,struct owl_dma_txd*) ;
 struct owl_dma* FUNC_1 (int ) ;
 struct owl_dma_txd* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct virt_dma_desc *VAR_0)
{
 struct owl_dma *VAR_1 = FUNC_1(VAR_0->tx.chan->device);
 struct owl_dma_txd *VAR_2 = FUNC_2(&VAR_0->tx);

 FUNC_0(VAR_1, VAR_2);
}
