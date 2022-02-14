
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pl330_dmac {TYPE_1__ ddma; int lock; } ;
struct dma_pl330_chan {int lock; int thread; struct pl330_dmac* dmac; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 struct dma_pl330_chan* FUNC_8 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_0)
{
 struct dma_pl330_chan *VAR_1 = FUNC_8(VAR_0);
 struct pl330_dmac *VAR_2 = VAR_1->dmac;
 unsigned long VAR_3;

 FUNC_1(VAR_2->ddma.dev);
 FUNC_5(&VAR_1->lock, VAR_3);

 FUNC_4(&VAR_2->lock);
 FUNC_0(VAR_1->thread);
 FUNC_6(&VAR_2->lock);

 FUNC_7(&VAR_1->lock, VAR_3);
 FUNC_2(VAR_2->ddma.dev);
 FUNC_3(VAR_2->ddma.dev);

 return 0;
}
