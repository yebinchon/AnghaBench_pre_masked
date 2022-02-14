
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct virt_dma_chan {int task; struct virt_dma_desc* cyclic; } ;


 int FUNC_0 (int *) ;
 struct virt_dma_chan* FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct virt_dma_desc *VAR_0)
{
 struct virt_dma_chan *VAR_1 = FUNC_1(VAR_0->tx.chan);

 VAR_1->cyclic = VAR_0;
 FUNC_0(&VAR_1->task);
}
