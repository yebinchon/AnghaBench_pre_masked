
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pl330_dmac {TYPE_1__ ddma; int lock; int desc_pool; } ;
struct dma_pl330_chan {struct pl330_dmac* dmac; int work_list; scalar_t__ cyclic; int * thread; int task; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dma_pl330_chan*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 struct dma_pl330_chan* FUNC_9 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_10(struct dma_chan *VAR_0)
{
 struct dma_pl330_chan *VAR_1 = FUNC_9(VAR_0);
 struct pl330_dmac *VAR_2 = VAR_1->dmac;
 unsigned long VAR_3;

 FUNC_8(&VAR_1->task);

 FUNC_3(VAR_1->dmac->ddma.dev);
 FUNC_6(&VAR_2->lock, VAR_3);

 FUNC_1(VAR_1->thread);
 VAR_1->thread = ((void*)0);

 if (VAR_1->cyclic)
  FUNC_0(&VAR_1->work_list, &VAR_1->dmac->desc_pool);

 FUNC_7(&VAR_2->lock, VAR_3);
 FUNC_4(VAR_1->dmac->ddma.dev);
 FUNC_5(VAR_1->dmac->ddma.dev);
 FUNC_2(VAR_1);
}
