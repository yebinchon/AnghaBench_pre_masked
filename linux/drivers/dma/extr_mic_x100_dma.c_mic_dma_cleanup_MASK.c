
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct mic_dma_chan {size_t last_tail; int cleanup_lock; struct dma_async_tx_descriptor* tx_array; } ;
struct dma_async_tx_descriptor {int * callback; scalar_t__ cookie; } ;


 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*,int *) ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (struct mic_dma_chan*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mic_dma_chan *VAR_0)
{
 struct dma_async_tx_descriptor *VAR_1;
 u32 VAR_2;
 u32 VAR_3;

 FUNC_6(&VAR_0->cleanup_lock);
 VAR_2 = FUNC_3(VAR_0);





 FUNC_5();
 for (VAR_3 = VAR_0->last_tail; VAR_2 != VAR_3;) {
  VAR_1 = &VAR_0->tx_array[VAR_3];
  if (VAR_1->cookie) {
   FUNC_0(VAR_1);
   FUNC_1(VAR_1, ((void*)0));
   VAR_1->callback = ((void*)0);
  }
  VAR_3 = FUNC_2(VAR_3);
 }

 FUNC_4();
 VAR_0->last_tail = VAR_3;
 FUNC_7(&VAR_0->cleanup_lock);
}
