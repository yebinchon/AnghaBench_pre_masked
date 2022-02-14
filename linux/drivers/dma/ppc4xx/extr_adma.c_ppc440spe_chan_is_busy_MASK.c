
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xor_regs {int sr; } ;
struct ppc440spe_adma_chan {TYPE_1__* device; } ;
struct dma_regs {int csftp; int cpftp; int cpfhp; } ;
struct TYPE_2__ {int id; struct xor_regs* xor_reg; struct dma_regs* dma_reg; } ;





 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ppc440spe_adma_chan *VAR_1)
{
 struct dma_regs *VAR_2;
 struct xor_regs *VAR_3;
 int VAR_4 = 0;

 switch (VAR_1->device->id) {
 case 130:
 case 129:
  VAR_2 = VAR_1->device->dma_reg;



  if (FUNC_0(&VAR_2->cpfhp) != FUNC_0(&VAR_2->cpftp) ||
      FUNC_0(&VAR_2->cpftp) != FUNC_0(&VAR_2->csftp))
   VAR_4 = 1;
  break;
 case 128:


  VAR_3 = VAR_1->device->xor_reg;
  VAR_4 = (FUNC_1(&VAR_3->sr) & VAR_0) ? 1 : 0;
  break;
 }

 return VAR_4;
}
