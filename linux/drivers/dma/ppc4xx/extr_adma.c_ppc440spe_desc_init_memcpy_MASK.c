
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc440spe_adma_desc_slot {int src_cnt; int dst_cnt; int flags; int * hw_next; struct dma_cdb* hw_desc; } ;
struct dma_cdb {int opc; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dma_cdb*,int ,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ppc440spe_adma_desc_slot *VAR_3,
     unsigned long VAR_4)
{
 struct dma_cdb *VAR_5 = VAR_3->hw_desc;

 FUNC_1(VAR_3->hw_desc, 0, sizeof(struct dma_cdb));
 VAR_3->hw_next = ((void*)0);
 VAR_3->src_cnt = 1;
 VAR_3->dst_cnt = 1;

 if (VAR_4 & VAR_1)
  FUNC_2(VAR_2, &VAR_3->flags);
 else
  FUNC_0(VAR_2, &VAR_3->flags);

 VAR_5->opc = VAR_0;
}
