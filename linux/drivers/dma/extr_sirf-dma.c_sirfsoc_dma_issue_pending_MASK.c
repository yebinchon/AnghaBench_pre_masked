
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_dma_chan {int lock; int queued; int active; } ;
struct dma_chan {int dummy; } ;


 struct sirfsoc_dma_chan* FUNC_0 (struct dma_chan*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct sirfsoc_dma_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{
 struct sirfsoc_dma_chan *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;

 FUNC_3(&VAR_1->lock, VAR_2);

 if (FUNC_1(&VAR_1->active) && !FUNC_1(&VAR_1->queued))
  FUNC_2(VAR_1);

 FUNC_4(&VAR_1->lock, VAR_2);
}
