
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_submit; int phys; } ;
struct xgene_dma_desc_sw {TYPE_1__ tx; int tx_list; } ;
struct xgene_dma_chan {int dma_chan; int desc_pool; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xgene_dma_chan*,char*,struct xgene_dma_desc_sw*) ;
 int FUNC_2 (struct xgene_dma_chan*,char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 struct xgene_dma_desc_sw* FUNC_4 (int ,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct xgene_dma_desc_sw *FUNC_5(
     struct xgene_dma_chan *VAR_2)
{
 struct xgene_dma_desc_sw *VAR_3;
 dma_addr_t VAR_4;

 VAR_3 = FUNC_4(VAR_2->desc_pool, VAR_0, &VAR_4);
 if (!VAR_3) {
  FUNC_2(VAR_2, "Failed to allocate LDs\n");
  return ((void*)0);
 }

 FUNC_0(&VAR_3->tx_list);
 VAR_3->tx.phys = VAR_4;
 VAR_3->tx.tx_submit = VAR_1;
 FUNC_3(&VAR_3->tx, &VAR_2->dma_chan);

 FUNC_1(VAR_2, "LD %p allocated\n", VAR_3);

 return VAR_3;
}
