
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pci_devinst {int pi_vmctx; } ;
struct hda_softc {struct pci_devinst* pci_dev; } ;


 int FUNC_0 (struct pci_devinst*) ;
 void* FUNC_1 (int ,uintptr_t,size_t) ;

__attribute__((used)) static void *
FUNC_2(struct hda_softc *VAR_0, uint64_t VAR_1, size_t VAR_2)
{
 struct pci_devinst *VAR_3 = VAR_0->pci_dev;

 FUNC_0(VAR_3);

 return (FUNC_1(VAR_3->pi_vmctx, (uintptr_t)VAR_1, VAR_2));
}
