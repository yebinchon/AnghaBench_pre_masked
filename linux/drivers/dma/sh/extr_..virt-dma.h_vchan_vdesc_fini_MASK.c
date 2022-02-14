
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct virt_dma_desc {int node; TYPE_1__ tx; } ;
struct virt_dma_chan {int (* desc_free ) (struct virt_dma_desc*) ;int desc_allocated; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct virt_dma_desc*) ;
 struct virt_dma_chan* FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct virt_dma_desc *VAR_0)
{
 struct virt_dma_chan *VAR_1 = FUNC_3(VAR_0->tx.chan);

 if (FUNC_0(&VAR_0->tx))
  FUNC_1(&VAR_0->node, &VAR_1->desc_allocated);
 else
  VAR_1->desc_free(VAR_0);
}
