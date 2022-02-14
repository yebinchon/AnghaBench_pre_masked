
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {scalar_t__ cookie; } ;
struct iop_adma_desc_slot {int * group_head; struct dma_async_tx_descriptor async_tx; } ;
struct iop_adma_chan {int dummy; } ;
typedef scalar_t__ dma_cookie_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*,int *) ;

__attribute__((used)) static dma_cookie_t
FUNC_4(struct iop_adma_desc_slot *VAR_0,
 struct iop_adma_chan *VAR_1, dma_cookie_t VAR_2)
{
 struct dma_async_tx_descriptor *VAR_3 = &VAR_0->async_tx;

 FUNC_0(VAR_3->cookie < 0);
 if (VAR_3->cookie > 0) {
  VAR_2 = VAR_3->cookie;
  VAR_3->cookie = 0;




  FUNC_3(VAR_3, ((void*)0));

  FUNC_1(VAR_3);
  if (VAR_0->group_head)
   VAR_0->group_head = ((void*)0);
 }


 FUNC_2(VAR_3);

 return VAR_2;
}
