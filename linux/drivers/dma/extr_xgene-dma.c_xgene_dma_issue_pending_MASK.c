
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int lock; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct xgene_dma_chan* FUNC_2 (struct dma_chan*) ;
 int FUNC_3 (struct xgene_dma_chan*) ;

__attribute__((used)) static void FUNC_4(struct dma_chan *VAR_0)
{
 struct xgene_dma_chan *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->lock);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_1->lock);
}
