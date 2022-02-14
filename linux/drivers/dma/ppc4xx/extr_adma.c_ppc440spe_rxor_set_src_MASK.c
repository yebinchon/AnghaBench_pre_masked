
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct xor_cb {TYPE_1__* ops; } ;
struct ppc440spe_adma_desc_slot {struct xor_cb* hw_desc; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int l; int h; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ppc440spe_adma_desc_slot *VAR_1,
 u8 VAR_2, dma_addr_t VAR_3)
{
 struct xor_cb *VAR_4 = VAR_1->hw_desc;

 VAR_4->ops[VAR_2].h |= VAR_0;
 VAR_4->ops[VAR_2].l = VAR_3;
}
