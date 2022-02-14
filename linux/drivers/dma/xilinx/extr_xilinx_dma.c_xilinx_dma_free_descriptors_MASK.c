
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_dma_chan {int lock; int active_list; int done_list; int pending_list; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct xilinx_dma_chan*,int *) ;

__attribute__((used)) static void FUNC_3(struct xilinx_dma_chan *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->lock, VAR_1);

 FUNC_2(VAR_0, &VAR_0->pending_list);
 FUNC_2(VAR_0, &VAR_0->done_list);
 FUNC_2(VAR_0, &VAR_0->active_list);

 FUNC_1(&VAR_0->lock, VAR_1);
}
