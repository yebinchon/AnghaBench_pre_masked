
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_dma_desc {int node; int tx_list; } ;
struct ep93xx_dma_chan {int lock; int free_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ep93xx_dma_chan *VAR_0,
    struct ep93xx_dma_desc *VAR_1)
{
 if (VAR_1) {
  unsigned long VAR_2;

  FUNC_2(&VAR_0->lock, VAR_2);
  FUNC_1(&VAR_1->tx_list, &VAR_0->free_list);
  FUNC_0(&VAR_1->node, &VAR_0->free_list);
  FUNC_3(&VAR_0->lock, VAR_2);
 }
}
