
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pci_xhci_softc {int * portregs; } ;
struct TYPE_2__ {int hci_address; } ;
struct pci_xhci_dev_emu {scalar_t__ dev_slotstate; TYPE_1__ hci; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct pci_xhci_dev_emu* FUNC_1 (struct pci_xhci_softc*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static uint32_t
FUNC_2(struct pci_xhci_softc *VAR_5, uint32_t *VAR_6)
{
 struct pci_xhci_dev_emu *VAR_7;
 uint32_t VAR_8;
 int VAR_9;

 VAR_8 = VAR_3;
 if (VAR_5->portregs != ((void*)0))
  for (VAR_9 = 1; VAR_9 <= VAR_0; VAR_9++) {
   VAR_7 = FUNC_1(VAR_5, VAR_9);
   if (VAR_7 && VAR_7->dev_slotstate == VAR_1) {
    *VAR_6 = VAR_9;
    VAR_7->dev_slotstate = VAR_2;
    VAR_8 = VAR_4;
    VAR_7->hci.hci_address = VAR_9;
    break;
   }
  }

 FUNC_0(("pci_xhci enable slot (error=%d) slot %u\r\n",
  VAR_8 != VAR_4, *VAR_6));

 return (VAR_8);
}
