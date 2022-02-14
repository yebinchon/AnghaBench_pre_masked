
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct xhci_trb {int dwTrb3; } ;
struct xhci_endp_ctx {int dwEpCtx0; int qwEpCtx2; int dwEpCtx4; int dwEpCtx1; } ;
struct xhci_dev_ctx {struct xhci_endp_ctx* ctx_ep; } ;
struct pci_xhci_softc {int dummy; } ;
struct pci_xhci_dev_ep {int ep_ringaddr; int ep_ccs; int * ep_xfer; } ;
struct pci_xhci_dev_emu {int dev_sc; TYPE_1__* dev_ue; struct xhci_dev_ctx* dev_ctx; struct pci_xhci_dev_ep* eps; } ;
struct TYPE_2__ {scalar_t__ (* ue_reset ) (int ) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 struct pci_xhci_dev_emu* FUNC_3 (struct pci_xhci_softc*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static uint32_t
FUNC_8(struct pci_xhci_softc *VAR_7, uint32_t VAR_8,
    struct xhci_trb *VAR_9)
{
 struct pci_xhci_dev_emu *VAR_10;
 struct pci_xhci_dev_ep *VAR_11;
 struct xhci_dev_ctx *VAR_12;
 struct xhci_endp_ctx *VAR_13;
 uint32_t VAR_14, VAR_15;
 uint32_t VAR_16;

 VAR_15 = FUNC_4(VAR_9->dwTrb3);

 FUNC_0(("pci_xhci: reset ep %u: slot %u\r\n", VAR_15, VAR_8));

 VAR_14 = VAR_3;

 VAR_16 = FUNC_5(VAR_9->dwTrb3);

 VAR_10 = FUNC_3(VAR_7, VAR_8);
 FUNC_6(VAR_10 != ((void*)0));

 if (VAR_16 == VAR_6 &&
     (VAR_9->dwTrb3 & VAR_1) != 0) {

 }

 if (VAR_15 < 1 || VAR_15 > 31) {
  FUNC_0(("pci_xhci: reset ep: invalid epid %u\r\n", VAR_15));
  VAR_14 = VAR_4;
  goto done;
 }

 VAR_11 = &VAR_10->eps[VAR_15];
 if (VAR_11->ep_xfer != ((void*)0))
  FUNC_1(VAR_11->ep_xfer);

 VAR_12 = VAR_10->dev_ctx;
 FUNC_6(VAR_12 != ((void*)0));

 VAR_13 = &VAR_12->ctx_ep[VAR_15];

 VAR_13->dwEpCtx0 = (VAR_13->dwEpCtx0 & ~0x7) | VAR_0;

 if (FUNC_2(VAR_13->dwEpCtx0) == 0)
  VAR_13->qwEpCtx2 = VAR_11->ep_ringaddr | VAR_11->ep_ccs;

 FUNC_0(("pci_xhci: reset ep[%u] %08x %08x %016lx %08x\r\n",
         VAR_15, VAR_13->dwEpCtx0, VAR_13->dwEpCtx1, VAR_13->qwEpCtx2,
         VAR_13->dwEpCtx4));

 if (VAR_16 == VAR_5 &&
     (VAR_10->dev_ue->ue_reset == ((void*)0) ||
     VAR_10->dev_ue->ue_reset(VAR_10->dev_sc) < 0)) {
  VAR_14 = VAR_2;
  goto done;
 }

done:
 return (VAR_14);
}
