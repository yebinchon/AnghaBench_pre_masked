
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_xhci_softc {int dummy; } ;
struct pci_xhci_dev_emu {int dev_slotstate; } ;


 int FUNC_0 (char*) ;
 struct pci_xhci_dev_emu* FUNC_1 (struct pci_xhci_softc*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct pci_xhci_softc *VAR_1, int VAR_2)
{
 struct pci_xhci_dev_emu *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);

 if (!VAR_3) {
  FUNC_0(("xhci reset unassigned slot (%d)?\r\n", VAR_2));
 } else {
  VAR_3->dev_slotstate = VAR_0;
 }


}
