
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_dma_chan {int prep_lock; int head; int submitted; } ;
struct dma_async_tx_descriptor {int cookie; int chan; } ;
typedef int dma_cookie_t ;


 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (struct mic_dma_chan*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct mic_dma_chan* FUNC_4 (int ) ;

__attribute__((used)) static dma_cookie_t FUNC_5(struct dma_async_tx_descriptor *VAR_0)
{
 struct mic_dma_chan *VAR_1 = FUNC_4(VAR_0->chan);
 dma_cookie_t VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = VAR_0->cookie;





 FUNC_2();
 VAR_1->submitted = VAR_1->head;
 FUNC_3(&VAR_1->prep_lock);
 FUNC_1(VAR_1);
 return VAR_2;
}
