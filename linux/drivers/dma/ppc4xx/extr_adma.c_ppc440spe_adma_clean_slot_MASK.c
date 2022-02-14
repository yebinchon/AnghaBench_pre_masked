
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ppc440spe_adma_desc_slot {scalar_t__ phys; int chain_node; int slots_per_op; int idx; struct dma_cdb* hw_desc; int async_tx; } ;
struct ppc440spe_adma_chan {TYPE_2__* device; int chain; } ;
struct dma_cdb {scalar_t__ opc; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {scalar_t__ id; TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ppc440spe_adma_desc_slot*,struct ppc440spe_adma_chan*) ;
 scalar_t__ FUNC_5 (struct ppc440spe_adma_chan*) ;

__attribute__((used)) static int FUNC_6(struct ppc440spe_adma_desc_slot *VAR_2,
  struct ppc440spe_adma_chan *VAR_3)
{



 if (!FUNC_0(&VAR_2->async_tx))
  return 0;




 if (FUNC_3(&VAR_2->chain_node, &VAR_3->chain) ||
     VAR_2->phys == FUNC_5(VAR_3))
  return 1;

 if (VAR_3->device->id != VAR_1) {
  struct dma_cdb *VAR_4 = VAR_2->hw_desc;
  if (VAR_4->opc == VAR_0)
   return 1;
 }

 FUNC_1(VAR_3->device->common.dev, "\tfree slot %llx: %d stride: %d\n",
  VAR_2->phys, VAR_2->idx, VAR_2->slots_per_op);

 FUNC_2(&VAR_2->chain_node);
 FUNC_4(VAR_2, VAR_3);
 return 0;
}
