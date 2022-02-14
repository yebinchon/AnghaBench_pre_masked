
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmctx {int dummy; } ;
struct pci_nvme_softc {int dummy; } ;
struct pci_devinst {struct pci_nvme_softc* pi_arg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct pci_devinst*,int ,int) ;
 int FUNC_2 (struct pci_devinst*) ;
 int FUNC_3 (struct pci_devinst*) ;
 int FUNC_4 (struct pci_nvme_softc*,int ,int) ;

__attribute__((used)) static uint64_t
FUNC_5(struct vmctx *VAR_0, int VAR_1, struct pci_devinst *VAR_2, int VAR_3,
    uint64_t VAR_4, int VAR_5)
{
 struct pci_nvme_softc* VAR_6 = VAR_2->pi_arg;

 if (VAR_3 == FUNC_3(VAR_2) ||
     VAR_3 == FUNC_2(VAR_2)) {
  FUNC_0(("nvme-read bar: %d, msix: regoff 0x%lx, size %d\r\n",
          VAR_3, VAR_4, VAR_5));

  return FUNC_1(VAR_2, VAR_4, VAR_5);
 }

 switch (VAR_3) {
 case 0:
         return FUNC_4(VAR_6, VAR_4, VAR_5);

 default:
  FUNC_0(("unknown bar %d, 0x%lx\r\n", VAR_3, VAR_4));
 }

 return (0);
}
