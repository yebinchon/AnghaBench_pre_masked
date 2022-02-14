
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxdma_engine {int lock; } ;
struct imxdma_channel {int ld_free; int ld_queue; int ld_active; struct imxdma_engine* imxdma; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct imxdma_channel*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct imxdma_channel* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_5(struct dma_chan *VAR_0)
{
 struct imxdma_channel *VAR_1 = FUNC_4(VAR_0);
 struct imxdma_engine *VAR_2 = VAR_1->imxdma;
 unsigned long VAR_3;

 FUNC_0(VAR_1);

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_1->ld_active, &VAR_1->ld_free);
 FUNC_1(&VAR_1->ld_queue, &VAR_1->ld_free);
 FUNC_3(&VAR_2->lock, VAR_3);
 return 0;
}
