
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct xhci_trb {int dwTrb3; } ;
struct xhci_stream_ctx {int dummy; } ;
struct xhci_endp_ctx {int qwEpCtx2; int dwEpCtx0; int dwEpCtx4; int dwEpCtx1; } ;
struct xhci_dev_ctx {struct xhci_endp_ctx* ctx_ep; } ;
struct pci_xhci_trb_ring {int ringaddr; size_t ccs; } ;
struct pci_xhci_softc {size_t ndevices; } ;
struct pci_xhci_dev_ep {int ep_ringaddr; size_t ep_ccs; struct xhci_trb* ep_tr; struct pci_xhci_trb_ring* ep_sctx_trbs; TYPE_1__* ep_xfer; } ;
struct pci_xhci_dev_emu {struct pci_xhci_dev_ep* eps; } ;
struct TYPE_2__ {scalar_t__ ndata; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct xhci_trb* FUNC_2 (struct pci_xhci_softc*,int) ;
 size_t VAR_0 ;
 struct pci_xhci_dev_emu* FUNC_3 (struct pci_xhci_softc*,size_t) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct pci_xhci_softc*,struct xhci_endp_ctx*,size_t,struct xhci_stream_ctx**) ;
 struct xhci_dev_ctx* FUNC_6 (struct pci_xhci_softc*,size_t) ;
 int FUNC_7 (struct pci_xhci_softc*,struct pci_xhci_dev_emu*,struct pci_xhci_dev_ep*,struct xhci_endp_ctx*,struct xhci_trb*,size_t,size_t,int,size_t,size_t) ;
 int FUNC_8 (struct pci_xhci_softc*,struct pci_xhci_dev_emu*,struct pci_xhci_dev_ep*,struct xhci_endp_ctx*,size_t,size_t) ;

__attribute__((used)) static void
FUNC_9(struct pci_xhci_softc *VAR_2, uint32_t VAR_3,
    uint32_t VAR_4, uint32_t VAR_5)
{
 struct pci_xhci_dev_emu *VAR_6;
 struct pci_xhci_dev_ep *VAR_7;
 struct xhci_dev_ctx *VAR_8;
 struct xhci_endp_ctx *VAR_9;
 struct pci_xhci_trb_ring *VAR_10;
 struct xhci_trb *VAR_11;
 uint64_t VAR_12;
 uint32_t VAR_13;

 FUNC_0(("pci_xhci doorbell slot %u epid %u stream %u\r\n",
     VAR_3, VAR_4, VAR_5));

 if (VAR_3 == 0 || VAR_3 > VAR_2->ndevices) {
  FUNC_0(("pci_xhci: invalid doorbell slot %u\r\n", VAR_3));
  return;
 }

 if (VAR_4 == 0 || VAR_4 >= VAR_0) {
  FUNC_0(("pci_xhci: invalid endpoint %u\r\n", VAR_4));
  return;
 }

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 VAR_7 = &VAR_6->eps[VAR_4];
 VAR_8 = FUNC_6(VAR_2, VAR_3);
 if (!VAR_8) {
  return;
 }
 VAR_9 = &VAR_8->ctx_ep[VAR_4];

 VAR_10 = ((void*)0);

 FUNC_0(("pci_xhci: device doorbell ep[%u] %08x %08x %016lx %08x\r\n",
         VAR_4, VAR_9->dwEpCtx0, VAR_9->dwEpCtx1, VAR_9->qwEpCtx2,
         VAR_9->dwEpCtx4));

 if (VAR_9->qwEpCtx2 == 0)
  return;


 if (VAR_7->ep_xfer->ndata > 0) {
  FUNC_8(VAR_2, VAR_6, VAR_7, VAR_9, VAR_3, VAR_4);
  return;
 }


 if (FUNC_1(VAR_9->dwEpCtx0) != 0) {
  struct xhci_stream_ctx *VAR_14;





  if (VAR_5 == 0 || VAR_5 == 65534 || VAR_5 == 65535) {
   FUNC_0(("pci_xhci: invalid stream %u\r\n", VAR_5));
   return;
  }

  VAR_14 = ((void*)0);
  FUNC_5(VAR_2, VAR_9, VAR_5, &VAR_14);
  if (VAR_14 == ((void*)0)) {
   FUNC_0(("pci_xhci: invalid stream %u\r\n", VAR_5));
   return;
  }
  VAR_10 = &VAR_7->ep_sctx_trbs[VAR_5];
  VAR_12 = VAR_10->ringaddr;
  VAR_13 = VAR_10->ccs;
  VAR_11 = FUNC_2(VAR_2, VAR_10->ringaddr & ~0xFUL);
  FUNC_0(("doorbell, stream %u, ccs %lx, trb ccs %x\r\n",
          VAR_5, VAR_9->qwEpCtx2 & VAR_1,
          VAR_11->dwTrb3 & VAR_1));
 } else {
  if (VAR_5 != 0) {
   FUNC_0(("pci_xhci: invalid stream %u\r\n", VAR_5));
   return;
  }
  VAR_12 = VAR_7->ep_ringaddr;
  VAR_13 = VAR_7->ep_ccs;
  VAR_11 = VAR_7->ep_tr;
  FUNC_0(("doorbell, ccs %lx, trb ccs %x\r\n",
          VAR_9->qwEpCtx2 & VAR_1,
          VAR_11->dwTrb3 & VAR_1));
 }

 if (FUNC_4(VAR_11->dwTrb3) == 0) {
  FUNC_0(("pci_xhci: ring %lx trb[%lx] EP %u is RESERVED?\r\n",
          VAR_9->qwEpCtx2, VAR_7->ep_ringaddr, VAR_4));
  return;
 }

 FUNC_7(VAR_2, VAR_6, VAR_7, VAR_9, VAR_11, VAR_3, VAR_4,
                          VAR_12, VAR_13, VAR_5);
}
