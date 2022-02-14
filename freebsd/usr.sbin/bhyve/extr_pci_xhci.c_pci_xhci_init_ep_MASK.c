
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_endp_ctx {int qwEpCtx2; int dwEpCtx0; } ;
struct xhci_dev_ctx {struct xhci_endp_ctx* ctx_ep; } ;
struct usb_data_xfer {int dummy; } ;
struct pci_xhci_trb_ring {int dummy; } ;
struct pci_xhci_dev_ep {int ep_ringaddr; int * ep_xfer; int ep_ccs; void* ep_tr; TYPE_1__* ep_sctx; TYPE_2__* ep_sctx_trbs; } ;
struct pci_xhci_dev_emu {int xsc; struct pci_xhci_dev_ep* eps; struct xhci_dev_ctx* dev_ctx; } ;
struct TYPE_4__ {int ringaddr; int ccs; } ;
struct TYPE_3__ {int qwSctx0; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int,int) ;
 int * FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(struct pci_xhci_dev_emu *VAR_2, int VAR_3)
{
 struct xhci_dev_ctx *VAR_4;
 struct pci_xhci_dev_ep *VAR_5;
 struct xhci_endp_ctx *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_4 = VAR_2->dev_ctx;
 VAR_6 = &VAR_4->ctx_ep[VAR_3];
 VAR_5 = &VAR_2->eps[VAR_3];
 VAR_7 = FUNC_2(VAR_6->dwEpCtx0);
 if (VAR_7 > 0) {
  FUNC_0(("init_ep %d with pstreams %d\r\n", VAR_3, VAR_7));
  FUNC_6(VAR_5->ep_sctx_trbs == ((void*)0));

  VAR_5->ep_sctx = FUNC_4(VAR_2->xsc, VAR_6->qwEpCtx2 &
                              VAR_0);
  VAR_5->ep_sctx_trbs = FUNC_7(VAR_7,
                        sizeof(struct pci_xhci_trb_ring));
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_5->ep_sctx_trbs[VAR_8].ringaddr =
                            VAR_5->ep_sctx[VAR_8].qwSctx0 &
                            VAR_1;
   VAR_5->ep_sctx_trbs[VAR_8].ccs =
        FUNC_5(VAR_5->ep_sctx[VAR_8].qwSctx0);
  }
 } else {
  FUNC_0(("init_ep %d with no pstreams\r\n", VAR_3));
  VAR_5->ep_ringaddr = VAR_6->qwEpCtx2 &
                       VAR_0;
  VAR_5->ep_ccs = FUNC_3(VAR_6->qwEpCtx2);
  VAR_5->ep_tr = FUNC_4(VAR_2->xsc, VAR_5->ep_ringaddr);
  FUNC_0(("init_ep tr DCS %x\r\n", VAR_5->ep_ccs));
 }

 if (VAR_5->ep_xfer == ((void*)0)) {
  VAR_5->ep_xfer = FUNC_8(sizeof(struct usb_data_xfer));
  FUNC_1(VAR_5->ep_xfer);
 }
}
