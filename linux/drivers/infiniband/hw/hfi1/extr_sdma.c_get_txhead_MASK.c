
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_txreq {int dummy; } ;
struct sdma_engine {size_t tx_head; size_t sdma_mask; struct sdma_txreq** tx_ring; } ;



__attribute__((used)) static inline struct sdma_txreq *FUNC_0(struct sdma_engine *VAR_0)
{
 return VAR_0->tx_ring[VAR_0->tx_head & VAR_0->sdma_mask];
}
