
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chan; } ;
struct ppc440spe_adma_desc_slot {struct ppc440spe_adma_desc_slot* group_head; TYPE_1__ async_tx; } ;
struct ppc440spe_adma_chan {int dummy; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (struct ppc440spe_adma_desc_slot*) ;
 int FUNC_1 (struct ppc440spe_adma_desc_slot*,struct ppc440spe_adma_chan*,int,int ,int ) ;
 struct ppc440spe_adma_chan* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
  struct ppc440spe_adma_desc_slot *VAR_0,
  dma_addr_t VAR_1, int VAR_2)
{
 struct ppc440spe_adma_chan *VAR_3;

 VAR_3 = FUNC_2(VAR_0->async_tx.chan);
 VAR_0 = VAR_0->group_head;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0, VAR_3, VAR_2, 0, VAR_1);
}
