
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xor_regs {int crsr; } ;
struct ppc440spe_adma_chan {TYPE_1__* device; } ;
struct TYPE_2__ {int id; struct xor_regs* xor_reg; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct ppc440spe_adma_chan *VAR_2)
{
 struct xor_regs *VAR_3;

 switch (VAR_2->device->id) {
 case 130:
 case 129:

  break;
 case 128:

  VAR_3 = VAR_2->device->xor_reg;


  FUNC_0(VAR_0 | VAR_1,
       &VAR_3->crsr);
  break;
 }
}
