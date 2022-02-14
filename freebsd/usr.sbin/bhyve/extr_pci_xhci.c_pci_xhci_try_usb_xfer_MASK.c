
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_endp_ctx {int dwEpCtx0; } ;
struct usb_data_xfer {size_t head; int * data; } ;
struct pci_xhci_softc {int dummy; } ;
struct pci_xhci_dev_ep {struct usb_data_xfer* ep_xfer; } ;
struct pci_xhci_dev_emu {int dev_sc; TYPE_1__* dev_ue; } ;
struct TYPE_2__ {int (* ue_data ) (int ,struct usb_data_xfer*,int ,int) ;} ;


 int FUNC_0 (int ,int ,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct usb_data_xfer*) ;
 int FUNC_3 (struct usb_data_xfer*) ;
 int FUNC_4 (struct usb_data_xfer*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct pci_xhci_softc*) ;
 int FUNC_6 (struct pci_xhci_softc*,struct usb_data_xfer*,int,int,int*) ;
 int FUNC_7 (int ,struct usb_data_xfer*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct pci_xhci_softc *VAR_6,
    struct pci_xhci_dev_emu *VAR_7, struct pci_xhci_dev_ep *VAR_8,
    struct xhci_endp_ctx *VAR_9, uint32_t VAR_10, uint32_t VAR_11)
{
 struct usb_data_xfer *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_9->dwEpCtx0 = FUNC_0(
      VAR_9->dwEpCtx0, VAR_4, 0x7, 0);

 VAR_13 = 0;
 VAR_14 = 0;

 VAR_12 = VAR_8->ep_xfer;
 FUNC_2(VAR_12);


 if (VAR_7->dev_ue->ue_data != ((void*)0)) {
  VAR_13 = VAR_7->dev_ue->ue_data(VAR_7->dev_sc, VAR_12,
              VAR_11 & 0x1 ? VAR_2 : VAR_3, VAR_11/2);
  if (VAR_13 == VAR_0) {
   if (FUNC_1(&VAR_12->data[VAR_12->head]) ==
       VAR_1)
    VAR_13 = VAR_5;
  } else {
   VAR_13 = FUNC_6(VAR_6, VAR_12, VAR_10, VAR_11,
                                &VAR_14);
   if (VAR_13 == VAR_5 && VAR_14) {
    FUNC_5(VAR_6);
   }



   FUNC_3(VAR_12);
  }
 }

 FUNC_4(VAR_12);


 return (VAR_13);
}
