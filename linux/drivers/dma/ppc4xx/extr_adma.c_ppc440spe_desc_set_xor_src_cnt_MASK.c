
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xor_cb {int cbc; } ;
struct ppc440spe_adma_desc_slot {struct xor_cb* hw_desc; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(
   struct ppc440spe_adma_desc_slot *VAR_1,
   int VAR_2)
{
 struct xor_cb *VAR_3 = VAR_1->hw_desc;

 VAR_3->cbc &= ~VAR_0;
 VAR_3->cbc |= VAR_2;
}
