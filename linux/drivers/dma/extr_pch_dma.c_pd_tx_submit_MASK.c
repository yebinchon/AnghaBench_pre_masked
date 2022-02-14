
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_dma_desc {int desc_node; } ;
struct pch_dma_chan {int lock; int queue; int active_list; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct pch_dma_chan*,struct pch_dma_desc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct pch_dma_chan* FUNC_5 (int ) ;
 struct pch_dma_desc* FUNC_6 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_7(struct dma_async_tx_descriptor *VAR_0)
{
 struct pch_dma_desc *VAR_1 = FUNC_6(VAR_0);
 struct pch_dma_chan *VAR_2 = FUNC_5(VAR_0->chan);

 FUNC_3(&VAR_2->lock);

 if (FUNC_1(&VAR_2->active_list)) {
  FUNC_0(&VAR_1->desc_node, &VAR_2->active_list);
  FUNC_2(VAR_2, VAR_1);
 } else {
  FUNC_0(&VAR_1->desc_node, &VAR_2->queue);
 }

 FUNC_4(&VAR_2->lock);
 return 0;
}
