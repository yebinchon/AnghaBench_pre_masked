
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xor_cb {int cbc; } ;
struct ppc440spe_adma_desc_slot {int src_cnt; int dst_cnt; int * hw_next; struct xor_cb* hw_desc; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xor_cb*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ppc440spe_adma_desc_slot *VAR_3,
      int VAR_4, unsigned long VAR_5)
{
 struct xor_cb *VAR_6 = VAR_3->hw_desc;

 FUNC_0(VAR_3->hw_desc, 0, sizeof(struct xor_cb));
 VAR_3->hw_next = ((void*)0);
 VAR_3->src_cnt = VAR_4;
 VAR_3->dst_cnt = 1;

 VAR_6->cbc = VAR_2 | VAR_4;
 if (VAR_5 & VAR_0)

  VAR_6->cbc |= VAR_1;
}
