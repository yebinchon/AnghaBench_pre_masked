
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phys; int tx_submit; } ;
struct mv_xor_desc_slot {int node; int idx; TYPE_1__ async_tx; int sg_tx_list; void* hw_desc; } ;
struct mv_xor_chan {int slots_allocated; int lock; int free_slots; scalar_t__ dma_desc_pool; void* dma_desc_pool_virt; } ;
struct dma_chan {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*,struct dma_chan*) ;
 struct mv_xor_desc_slot* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct mv_xor_chan*) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mv_xor_chan* FUNC_9 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_10(struct dma_chan *VAR_5)
{
 void *VAR_6;
 dma_addr_t VAR_7;
 int VAR_8;
 struct mv_xor_chan *VAR_9 = FUNC_9(VAR_5);
 struct mv_xor_desc_slot *VAR_10 = ((void*)0);
 int VAR_11 = VAR_2/VAR_3;


 VAR_8 = VAR_9->slots_allocated;
 while (VAR_8 < VAR_11) {
  VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1);
  if (!VAR_10) {
   FUNC_2(FUNC_6(VAR_9),
     "channel only initialized %d descriptor slots",
     VAR_8);
   break;
  }
  VAR_6 = VAR_9->dma_desc_pool_virt;
  VAR_10->hw_desc = VAR_6 + VAR_8 * VAR_3;

  FUNC_3(&VAR_10->async_tx, VAR_5);
  VAR_10->async_tx.tx_submit = VAR_4;
  FUNC_0(&VAR_10->node);
  FUNC_0(&VAR_10->sg_tx_list);
  VAR_7 = VAR_9->dma_desc_pool;
  VAR_10->async_tx.phys = VAR_7 + VAR_8 * VAR_3;
  VAR_10->idx = VAR_8++;

  FUNC_7(&VAR_9->lock);
  VAR_9->slots_allocated = VAR_8;
  FUNC_5(&VAR_10->node, &VAR_9->free_slots);
  FUNC_8(&VAR_9->lock);
 }

 FUNC_1(FUNC_6(VAR_9),
  "allocated %d descriptor slots\n",
  VAR_9->slots_allocated);

 return VAR_9->slots_allocated ? : -VAR_0;
}
