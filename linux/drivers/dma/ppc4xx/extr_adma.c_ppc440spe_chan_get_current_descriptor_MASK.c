
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xor_regs {int ccbalr; } ;
struct ppc440spe_adma_chan {TYPE_1__* device; int hw_chain_inited; } ;
struct dma_regs {int acpl; } ;
struct TYPE_2__ {int id; struct xor_regs* xor_reg; struct dma_regs* dma_reg; } ;


 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static u32
FUNC_3(struct ppc440spe_adma_chan *VAR_1)
{
 struct dma_regs *VAR_2;
 struct xor_regs *VAR_3;

 if (FUNC_2(!VAR_1->hw_chain_inited))

  return 0;

 switch (VAR_1->device->id) {
 case 130:
 case 129:
  VAR_2 = VAR_1->device->dma_reg;
  return FUNC_0(&VAR_2->acpl) & (~VAR_0);
 case 128:
  VAR_3 = VAR_1->device->xor_reg;
  return FUNC_1(&VAR_3->ccbalr);
 }
 return 0;
}
