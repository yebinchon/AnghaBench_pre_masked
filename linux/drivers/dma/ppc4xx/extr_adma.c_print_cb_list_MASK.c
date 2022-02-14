
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc440spe_adma_desc_slot {int hw_desc; struct ppc440spe_adma_desc_slot* hw_next; } ;
struct ppc440spe_adma_chan {int dummy; } ;


 int FUNC_0 (struct ppc440spe_adma_chan*,int ) ;

__attribute__((used)) static void FUNC_1(struct ppc440spe_adma_chan *VAR_0,
     struct ppc440spe_adma_desc_slot *VAR_1)
{
 for (; VAR_1; VAR_1 = VAR_1->hw_next)
  FUNC_0(VAR_0, VAR_1->hw_desc);
}
