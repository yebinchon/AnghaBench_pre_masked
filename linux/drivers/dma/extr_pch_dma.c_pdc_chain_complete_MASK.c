
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {int dummy; } ;
struct pch_dma_desc {int desc_node; int tx_list; struct dma_async_tx_descriptor txd; } ;
struct pch_dma_chan {int free_list; } ;
struct dmaengine_desc_callback {int dummy; } ;


 int FUNC_0 (struct dmaengine_desc_callback*,int *) ;
 int FUNC_1 (struct dma_async_tx_descriptor*,struct dmaengine_desc_callback*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct pch_dma_chan *VAR_0,
          struct pch_dma_desc *VAR_1)
{
 struct dma_async_tx_descriptor *VAR_2 = &VAR_1->txd;
 struct dmaengine_desc_callback VAR_3;

 FUNC_1(VAR_2, &VAR_3);
 FUNC_3(&VAR_1->tx_list, &VAR_0->free_list);
 FUNC_2(&VAR_1->desc_node, &VAR_0->free_list);

 FUNC_0(&VAR_3, ((void*)0));
}
