
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xor_cb {int dummy; } ;
struct ppc440spe_adma_desc_slot {int dst_cnt; scalar_t__ src_cnt; int * hw_next; int hw_desc; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ppc440spe_adma_desc_slot *VAR_0)
{
 FUNC_0(VAR_0->hw_desc, 0, sizeof(struct xor_cb));
 VAR_0->hw_next = ((void*)0);
 VAR_0->src_cnt = 0;
 VAR_0->dst_cnt = 1;
}
