
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_async_tx_descriptor {unsigned long flags; int desc_free; int tx_submit; } ;
struct TYPE_2__ {scalar_t__ residue; int result; } ;
struct virt_dma_desc {struct dma_async_tx_descriptor tx; int node; TYPE_1__ tx_result; } ;
struct virt_dma_chan {int lock; int desc_allocated; int chan; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_async_tx_descriptor*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline struct dma_async_tx_descriptor *FUNC_4(struct virt_dma_chan *VAR_3,
 struct virt_dma_desc *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;

 FUNC_0(&VAR_4->tx, &VAR_3->chan);
 VAR_4->tx.flags = VAR_5;
 VAR_4->tx.tx_submit = VAR_2;
 VAR_4->tx.desc_free = VAR_1;

 VAR_4->tx_result.result = VAR_0;
 VAR_4->tx_result.residue = 0;

 FUNC_2(&VAR_3->lock, VAR_6);
 FUNC_1(&VAR_4->node, &VAR_3->desc_allocated);
 FUNC_3(&VAR_3->lock, VAR_6);

 return &VAR_4->tx;
}
