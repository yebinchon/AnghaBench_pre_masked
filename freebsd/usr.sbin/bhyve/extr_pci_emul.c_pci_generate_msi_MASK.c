
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ msg_data; int addr; } ;
struct pci_devinst {TYPE_1__ pi_msi; int pi_vmctx; } ;


 scalar_t__ FUNC_0 (struct pci_devinst*) ;
 int FUNC_1 (struct pci_devinst*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

void
FUNC_3(struct pci_devinst *VAR_0, int VAR_1)
{

 if (FUNC_0(VAR_0) && VAR_1 < FUNC_1(VAR_0)) {
  FUNC_2(VAR_0->pi_vmctx, VAR_0->pi_msi.addr,
        VAR_0->pi_msi.msg_data + VAR_1);
 }
}
