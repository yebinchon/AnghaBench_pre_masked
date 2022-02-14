
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_desc_sw {int tx_list; } ;
struct xgene_dma_chan {int lock; int ld_pending; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct xgene_dma_chan* FUNC_4 (int ) ;
 struct xgene_dma_desc_sw* FUNC_5 (struct dma_async_tx_descriptor*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static dma_cookie_t FUNC_7(struct dma_async_tx_descriptor *VAR_1)
{
 struct xgene_dma_desc_sw *VAR_2;
 struct xgene_dma_chan *VAR_3;
 dma_cookie_t VAR_4;

 if (FUNC_6(!VAR_1))
  return -VAR_0;

 VAR_3 = FUNC_4(VAR_1->chan);
 VAR_2 = FUNC_5(VAR_1);

 FUNC_2(&VAR_3->lock);

 VAR_4 = FUNC_0(VAR_1);


 FUNC_1(&VAR_2->tx_list, &VAR_3->ld_pending);

 FUNC_3(&VAR_3->lock);

 return VAR_4;
}
