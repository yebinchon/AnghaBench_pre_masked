
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int tx_ring; int rx_ring; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct xgene_dma_chan *VAR_0)
{
 FUNC_0(&VAR_0->rx_ring);
 FUNC_0(&VAR_0->tx_ring);
}
