
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_dma_chan {int lock; int active_list; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (struct dw_dma_chan*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct dw_dma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{
 struct dw_dma_chan *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);
 if (FUNC_1(&VAR_1->active_list))
  FUNC_0(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_2);
}
