
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {scalar_t__ cookie; } ;
struct xgene_dma_desc_sw {struct dma_async_tx_descriptor tx; } ;
struct xgene_dma_chan {int dummy; } ;


 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*,int *) ;

__attribute__((used)) static void FUNC_4(struct xgene_dma_chan *VAR_0,
           struct xgene_dma_desc_sw *VAR_1)
{
 struct dma_async_tx_descriptor *VAR_2 = &VAR_1->tx;
 if (VAR_2->cookie == 0)
  return;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);


 FUNC_3(VAR_2, ((void*)0));


 FUNC_2(VAR_2);
}
