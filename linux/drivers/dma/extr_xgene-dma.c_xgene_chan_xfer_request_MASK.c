
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_ring {size_t head; size_t slots; int cmd; struct xgene_dma_desc_hw* desc_hw; } ;
struct xgene_dma_desc_sw {int flags; int desc2; int desc1; } ;
struct xgene_dma_desc_hw {int dummy; } ;
struct xgene_dma_chan {int pending; struct xgene_dma_ring tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct xgene_dma_desc_hw*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct xgene_dma_chan *VAR_1,
        struct xgene_dma_desc_sw *VAR_2)
{
 struct xgene_dma_ring *VAR_3 = &VAR_1->tx_ring;
 struct xgene_dma_desc_hw *VAR_4;


 VAR_4 = &VAR_3->desc_hw[VAR_3->head];





 if (++VAR_3->head == VAR_3->slots)
  VAR_3->head = 0;


 FUNC_1(VAR_4, &VAR_2->desc1, sizeof(*VAR_4));





 if (VAR_2->flags & VAR_0) {
  VAR_4 = &VAR_3->desc_hw[VAR_3->head];

  if (++VAR_3->head == VAR_3->slots)
   VAR_3->head = 0;

  FUNC_1(VAR_4, &VAR_2->desc2, sizeof(*VAR_4));
 }


 VAR_1->pending += ((VAR_2->flags &
     VAR_0) ? 2 : 1);


 FUNC_0((VAR_2->flags & VAR_0) ?
    2 : 1, VAR_3->cmd);
}
