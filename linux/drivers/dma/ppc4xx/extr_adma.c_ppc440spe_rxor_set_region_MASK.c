
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct xor_cb {TYPE_1__* ops; } ;
struct ppc440spe_adma_desc_slot {struct xor_cb* hw_desc; } ;
struct TYPE_2__ {int h; } ;



__attribute__((used)) static void FUNC_0(struct ppc440spe_adma_desc_slot *VAR_0,
 u8 VAR_1, u32 VAR_2)
{
 struct xor_cb *VAR_3 = VAR_0->hw_desc;

 VAR_3->ops[VAR_1].h |= VAR_2;
}
