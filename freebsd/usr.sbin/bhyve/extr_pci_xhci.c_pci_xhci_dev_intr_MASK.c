
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_trb {int dummy; } ;
struct xhci_endp_ctx {int dwEpCtx0; } ;
struct xhci_dev_ctx {struct xhci_endp_ctx* ctx_ep; } ;
struct usb_hci {int hci_port; struct pci_xhci_dev_emu* hci_sc; } ;
struct TYPE_4__ {int usbcmd; } ;
struct TYPE_3__ {int * erstba_p; } ;
struct pci_xhci_softc {TYPE_2__ opregs; TYPE_1__ rtsregs; } ;
struct pci_xhci_portregs {int portsc; } ;
struct pci_xhci_dev_emu {struct xhci_dev_ctx* dev_ctx; struct pci_xhci_softc* xsc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pci_xhci_portregs* FUNC_1 (struct pci_xhci_softc*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct pci_xhci_softc*,int ,int,int ) ;
 int FUNC_6 (struct pci_xhci_softc*,struct xhci_trb*,int ) ;
 int FUNC_7 (struct xhci_trb*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_8(struct usb_hci *VAR_7, int VAR_8)
{
 struct pci_xhci_dev_emu *VAR_9;
 struct xhci_dev_ctx *VAR_10;
 struct xhci_trb VAR_11;
 struct pci_xhci_softc *VAR_12;
 struct pci_xhci_portregs *VAR_13;
 struct xhci_endp_ctx *VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 int VAR_17;

 VAR_16 = VAR_8 & 0x80;
 VAR_17 = VAR_8 & ~0x80;


 VAR_17 = (VAR_17 * 2) + (VAR_16 ? 1 : 0);

 FUNC_4(VAR_17 >= 1 && VAR_17 <= 31);

 VAR_9 = VAR_7->hci_sc;
 VAR_12 = VAR_9->xsc;


 if (VAR_12->rtsregs.erstba_p == ((void*)0) ||
     (VAR_12->opregs.usbcmd & VAR_1) == 0 ||
     VAR_9->dev_ctx == ((void*)0))
  return (0);

 VAR_13 = FUNC_1(VAR_12, VAR_7->hci_port);


 if (FUNC_2(VAR_13->portsc) == 3) {
  VAR_13->portsc &= ~VAR_3;
  VAR_13->portsc |= FUNC_3(VAR_0);
  if ((VAR_13->portsc & VAR_2) != 0)
   return (0);

  VAR_13->portsc |= VAR_2;

  FUNC_7(&VAR_11, VAR_7->hci_port,
        VAR_5, VAR_6);
  VAR_15 = FUNC_6(VAR_12, &VAR_11, 0);
  if (VAR_15 != VAR_5)
   goto done;
 }

 VAR_10 = VAR_9->dev_ctx;
 VAR_14 = &VAR_10->ctx_ep[VAR_17];
 if ((VAR_14->dwEpCtx0 & 0x7) == VAR_4) {
  FUNC_0(("xhci device interrupt on disabled endpoint %d\r\n",
           VAR_17));
  return (0);
 }

 FUNC_0(("xhci device interrupt on endpoint %d\r\n", VAR_17));

 FUNC_5(VAR_12, VAR_7->hci_port, VAR_17, 0);

done:
 return (VAR_15);
}
