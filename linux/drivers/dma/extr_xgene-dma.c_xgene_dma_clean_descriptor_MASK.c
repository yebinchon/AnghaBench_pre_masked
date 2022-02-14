
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phys; } ;
struct xgene_dma_desc_sw {TYPE_1__ tx; int node; } ;
struct xgene_dma_chan {int desc_pool; } ;


 int FUNC_0 (struct xgene_dma_chan*,char*,struct xgene_dma_desc_sw*) ;
 int FUNC_1 (int ,struct xgene_dma_desc_sw*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct xgene_dma_chan *VAR_0,
           struct xgene_dma_desc_sw *VAR_1)
{
 FUNC_2(&VAR_1->node);
 FUNC_0(VAR_0, "LD %p free\n", VAR_1);
 FUNC_1(VAR_0->desc_pool, VAR_1, VAR_1->tx.phys);
}
