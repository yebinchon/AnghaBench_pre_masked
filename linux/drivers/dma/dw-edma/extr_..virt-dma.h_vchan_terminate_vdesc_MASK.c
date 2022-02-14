
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct virt_dma_chan {struct virt_dma_desc* cyclic; struct virt_dma_desc* vd_terminated; } ;


 struct virt_dma_chan* FUNC_0 (int ) ;
 int FUNC_1 (struct virt_dma_desc*) ;

__attribute__((used)) static inline void FUNC_2(struct virt_dma_desc *VAR_0)
{
 struct virt_dma_chan *VAR_1 = FUNC_0(VAR_0->tx.chan);


 if (VAR_1->vd_terminated)
  FUNC_1(VAR_1->vd_terminated);

 VAR_1->vd_terminated = VAR_0;
 if (VAR_1->cyclic == VAR_0)
  VAR_1->cyclic = ((void*)0);
}
