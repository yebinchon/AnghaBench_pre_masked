
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct pci_xhci_softc {int dboff; int * portregs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct pci_xhci_softc*) ;
 int FUNC_4 (struct pci_xhci_softc*) ;
 int FUNC_5 (struct pci_xhci_softc*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct pci_xhci_softc *VAR_0, uint64_t VAR_1,
    uint64_t VAR_2)
{

 VAR_1 = (VAR_1 - VAR_0->dboff) / sizeof(uint32_t);

 FUNC_0(("pci_xhci: doorbell write offset 0x%lx: 0x%lx\r\n",
         VAR_1, VAR_2));

 if (FUNC_3(VAR_0)) {
  FUNC_0(("pci_xhci: controller halted\r\n"));
  return;
 }

 if (VAR_1 == 0)
  FUNC_4(VAR_0);
 else if (VAR_0->portregs != ((void*)0))
  FUNC_5(VAR_0, VAR_1,
     FUNC_2(VAR_2), FUNC_1(VAR_2));
}
