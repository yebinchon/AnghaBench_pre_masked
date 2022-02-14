
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl330_dmac {int lock; } ;
struct dma_pl330_chan {int cyclic; int task; int thread; struct pl330_dmac* dmac; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (struct pl330_dmac*) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,int ,unsigned long) ;
 struct dma_pl330_chan* FUNC_5 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_6(struct dma_chan *VAR_2)
{
 struct dma_pl330_chan *VAR_3 = FUNC_5(VAR_2);
 struct pl330_dmac *VAR_4 = VAR_3->dmac;
 unsigned long VAR_5;

 FUNC_2(&VAR_4->lock, VAR_5);

 FUNC_0(VAR_2);
 VAR_3->cyclic = 0;

 VAR_3->thread = FUNC_1(VAR_4);
 if (!VAR_3->thread) {
  FUNC_3(&VAR_4->lock, VAR_5);
  return -VAR_0;
 }

 FUNC_4(&VAR_3->task, VAR_1, (unsigned long) VAR_3);

 FUNC_3(&VAR_4->lock, VAR_5);

 return 1;
}
