
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct pci_xhci_softc {scalar_t__ ndevices; int * portregs; } ;
struct pci_xhci_dev_emu {scalar_t__ dev_slotstate; } ;


 int FUNC_0 (char*) ;
 struct pci_xhci_dev_emu* FUNC_1 (struct pci_xhci_softc*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static uint32_t
FUNC_2(struct pci_xhci_softc *VAR_4, uint32_t VAR_5)
{
 struct pci_xhci_dev_emu *VAR_6;
 uint32_t VAR_7;

 FUNC_0(("pci_xhci disable slot %u\r\n", VAR_5));

 VAR_7 = VAR_1;
 if (VAR_4->portregs == ((void*)0))
  goto done;

 if (VAR_5 > VAR_4->ndevices) {
  VAR_7 = VAR_2;
  goto done;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6) {
  if (VAR_6->dev_slotstate == VAR_0) {
   VAR_7 = VAR_2;
  } else {
   VAR_6->dev_slotstate = VAR_0;
   VAR_7 = VAR_3;

  }
 }

done:
 return (VAR_7);
}
