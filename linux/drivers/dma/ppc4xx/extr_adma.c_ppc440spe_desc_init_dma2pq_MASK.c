
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xor_cb {int cbc; } ;
struct ppc440spe_adma_desc_slot {int src_cnt; int dst_cnt; scalar_t__ descs_per_op; struct xor_cb* reverse_flags; int * hw_next; struct xor_cb* hw_desc; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xor_cb*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ppc440spe_adma_desc_slot *VAR_3,
  int VAR_4, int VAR_5, unsigned long VAR_6)
{
 struct xor_cb *VAR_7 = VAR_3->hw_desc;

 FUNC_0(VAR_3->hw_desc, 0, sizeof(struct xor_cb));
 VAR_3->hw_next = ((void*)0);
 VAR_3->src_cnt = VAR_5;
 VAR_3->dst_cnt = VAR_4;
 FUNC_0(VAR_3->reverse_flags, 0, sizeof(VAR_3->reverse_flags));
 VAR_3->descs_per_op = 0;

 VAR_7->cbc = VAR_2;
 if (VAR_6 & VAR_0)

  VAR_7->cbc |= VAR_1;
}
