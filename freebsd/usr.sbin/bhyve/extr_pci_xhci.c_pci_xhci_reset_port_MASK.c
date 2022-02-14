
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_trb {int dummy; } ;
struct pci_xhci_softc {int dummy; } ;
struct pci_xhci_portregs {int portsc; } ;
struct pci_xhci_dev_emu {TYPE_1__* dev_ue; } ;
struct TYPE_2__ {int ue_usbver; int ue_usbspeed; } ;


 int FUNC_0 (char*) ;
 struct pci_xhci_dev_emu* FUNC_1 (struct pci_xhci_softc*,int) ;
 int VAR_0 ;
 struct pci_xhci_portregs* FUNC_2 (struct pci_xhci_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pci_xhci_softc*,struct xhci_trb*,int) ;
 int FUNC_6 (struct xhci_trb*,int,int,int ) ;

__attribute__((used)) static void
FUNC_7(struct pci_xhci_softc *VAR_8, int VAR_9, int VAR_10)
{
 struct pci_xhci_portregs *VAR_11;
 struct pci_xhci_dev_emu *VAR_12;
 struct xhci_trb VAR_13;
 int VAR_14;

 FUNC_4(VAR_9 <= VAR_0);

 FUNC_0(("xhci reset port %d\r\n", VAR_9));

 VAR_11 = FUNC_2(VAR_8, VAR_9);
 VAR_12 = FUNC_1(VAR_8, VAR_9);
 if (VAR_12) {
  VAR_11->portsc &= ~(VAR_2 | VAR_3 | VAR_4);
  VAR_11->portsc |= VAR_1 |
      FUNC_3(VAR_12->dev_ue->ue_usbspeed);

  if (VAR_10 && VAR_12->dev_ue->ue_usbver == 3) {
   VAR_11->portsc |= VAR_5;
  }

  if ((VAR_11->portsc & VAR_4) == 0) {
   VAR_11->portsc |= VAR_4;

   FUNC_6(&VAR_13, VAR_9,
        VAR_6,
        VAR_7);
   VAR_14 = FUNC_5(VAR_8, &VAR_13, 1);
   if (VAR_14 != VAR_6)
    FUNC_0(("xhci reset port insert event "
             "failed\r\n"));
  }
 }
}
