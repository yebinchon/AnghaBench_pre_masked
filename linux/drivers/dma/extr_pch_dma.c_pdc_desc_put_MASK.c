
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_dma_desc {int desc_node; int tx_list; } ;
struct pch_dma_chan {int lock; int free_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pch_dma_chan *VAR_0,
    struct pch_dma_desc *VAR_1)
{
 if (VAR_1) {
  FUNC_2(&VAR_0->lock);
  FUNC_1(&VAR_1->tx_list, &VAR_0->free_list);
  FUNC_0(&VAR_1->desc_node, &VAR_0->free_list);
  FUNC_3(&VAR_0->lock);
 }
}
