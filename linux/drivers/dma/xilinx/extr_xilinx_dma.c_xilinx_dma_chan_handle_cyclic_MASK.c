
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* callback_param; int (* callback ) (void*) ;} ;
struct xilinx_dma_tx_descriptor {TYPE_1__ async_tx; } ;
struct xilinx_dma_chan {int lock; } ;
typedef int (* dma_async_tx_callback ) (void*) ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct xilinx_dma_chan *VAR_0,
       struct xilinx_dma_tx_descriptor *VAR_1,
       unsigned long *VAR_2)
{
 dma_async_tx_callback VAR_3;
 void *VAR_4;

 VAR_3 = VAR_1->async_tx.callback;
 VAR_4 = VAR_1->async_tx.callback_param;
 if (VAR_3) {
  FUNC_1(&VAR_0->lock, *VAR_2);
  VAR_3(VAR_4);
  FUNC_0(&VAR_0->lock, *VAR_2);
 }
}
