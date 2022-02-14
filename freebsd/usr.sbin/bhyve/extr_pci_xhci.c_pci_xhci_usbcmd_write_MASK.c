
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_trb {int dummy; } ;
struct TYPE_4__ {int usbcmd; int usbsts; } ;
struct pci_xhci_softc {TYPE_2__ opregs; } ;
struct pci_xhci_portregs {int portsc; } ;
struct pci_xhci_dev_emu {TYPE_1__* dev_ue; } ;
struct TYPE_3__ {int ue_usbver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pci_xhci_dev_emu* FUNC_0 (struct pci_xhci_softc*,int) ;
 int VAR_6 ;
 struct pci_xhci_portregs* FUNC_1 (struct pci_xhci_softc*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct pci_xhci_softc*) ;
 scalar_t__ FUNC_4 (struct pci_xhci_softc*,struct xhci_trb*,int ) ;
 int FUNC_5 (struct pci_xhci_softc*) ;
 int FUNC_6 (struct xhci_trb*,int,scalar_t__,int ) ;

__attribute__((used)) static uint32_t
FUNC_7(struct pci_xhci_softc *VAR_14, uint32_t VAR_15)
{
 int VAR_16 = 0;
 int VAR_17;

 if (VAR_15 & VAR_5) {
  VAR_16 = (VAR_14->opregs.usbcmd & VAR_5) == 0;

  VAR_14->opregs.usbcmd |= VAR_5;
  VAR_14->opregs.usbsts &= ~VAR_10;
  VAR_14->opregs.usbsts |= VAR_11;


  if (VAR_16)
   for (VAR_17 = 1; VAR_17 <= VAR_6; VAR_17++) {
    struct pci_xhci_dev_emu *VAR_18;
    struct pci_xhci_portregs *VAR_19;
    struct xhci_trb VAR_20;

    if ((VAR_18 = FUNC_0(VAR_14, VAR_17)) == ((void*)0))
     continue;

    VAR_19 = FUNC_1(VAR_14, VAR_17);
    VAR_19->portsc |= VAR_8 | VAR_7;
    VAR_19->portsc &= ~VAR_9;





    if (VAR_18->dev_ue->ue_usbver == 2)
     VAR_19->portsc |=
         FUNC_2(VAR_0);
    else
     VAR_19->portsc |=
         FUNC_2(VAR_1);

    FUNC_6(&VAR_20, VAR_17,
        VAR_12,
        VAR_13);

    if (FUNC_4(VAR_14, &VAR_20, 0) !=
        VAR_12)
     break;
   }
 } else {
  VAR_14->opregs.usbcmd &= ~VAR_5;
  VAR_14->opregs.usbsts |= VAR_10;
  VAR_14->opregs.usbsts &= ~VAR_11;
 }


 VAR_15 |= VAR_14->opregs.usbcmd & VAR_5;

 if (VAR_15 & VAR_4) {

  FUNC_5(VAR_14);
  VAR_15 &= ~VAR_4;
 }

 VAR_15 &= ~(VAR_3 | VAR_2);

 if (VAR_16)
  FUNC_3(VAR_14);

 return (VAR_15);
}
