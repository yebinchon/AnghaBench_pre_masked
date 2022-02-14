
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpc_dma_chan {int lock; int free; int active; int queued; int prepared; } ;
struct mpc_dma {TYPE_1__* regs; } ;
struct dma_chan {int chan_id; } ;
struct TYPE_2__ {int dmacerq; } ;


 struct mpc_dma* FUNC_0 (struct dma_chan*) ;
 struct mpc_dma_chan* FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_0)
{
 struct mpc_dma_chan *VAR_1 = FUNC_1(VAR_0);
 struct mpc_dma *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;


 FUNC_4(&VAR_1->lock, VAR_3);

 FUNC_3(&VAR_2->regs->dmacerq, VAR_0->chan_id);
 FUNC_2(&VAR_1->prepared, &VAR_1->free);
 FUNC_2(&VAR_1->queued, &VAR_1->free);
 FUNC_2(&VAR_1->active, &VAR_1->free);

 FUNC_5(&VAR_1->lock, VAR_3);

 return 0;
}
