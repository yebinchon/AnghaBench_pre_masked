
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_trb {int qwTrb0; int dwTrb2; int dwTrb3; } ;
struct xhci_stream_ctx {int dummy; } ;
struct xhci_endp_ctx {int dwEpCtx0; int qwEpCtx2; } ;
struct xhci_dev_ctx {struct xhci_endp_ctx* ctx_ep; } ;
struct pci_xhci_softc {int dummy; } ;
struct pci_xhci_dev_ep {int ep_ringaddr; int ep_ccs; int ep_tr; TYPE_2__* ep_sctx_trbs; TYPE_1__* ep_sctx; } ;
struct pci_xhci_dev_emu {struct pci_xhci_dev_ep* eps; struct xhci_dev_ctx* dev_ctx; } ;
struct TYPE_4__ {int ringaddr; int ccs; } ;
struct TYPE_3__ {int qwSctx0; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct pci_xhci_softc*,int) ;
 struct pci_xhci_dev_emu* FUNC_5 (struct pci_xhci_softc*,int) ;


 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct pci_xhci_softc*,struct xhci_endp_ctx*,int,struct xhci_stream_ctx**) ;

__attribute__((used)) static uint32_t
FUNC_12(struct pci_xhci_softc *VAR_3, uint32_t VAR_4,
    struct xhci_trb *VAR_5)
{
 struct pci_xhci_dev_emu *VAR_6;
 struct pci_xhci_dev_ep *VAR_7;
 struct xhci_dev_ctx *VAR_8;
 struct xhci_endp_ctx *VAR_9;
 uint32_t VAR_10, VAR_11;
 uint32_t VAR_12;

 VAR_10 = VAR_1;

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 FUNC_9(VAR_6 != ((void*)0));

 FUNC_0(("pci_xhci set_tr: new-tr x%016lx, SCT %u DCS %u\r\n"
          "                 stream-id %u, slot %u, epid %u, C %u\r\n",
          (VAR_5->qwTrb0 & ~0xF), (uint32_t)((VAR_5->qwTrb0 >> 1) & 0x7),
          (uint32_t)(VAR_5->qwTrb0 & 0x1), (VAR_5->dwTrb2 >> 16) & 0xFFFF,
          FUNC_8(VAR_5->dwTrb3),
          FUNC_7(VAR_5->dwTrb3), VAR_5->dwTrb3 & 0x1));

 VAR_11 = FUNC_7(VAR_5->dwTrb3);
 if (VAR_11 < 1 || VAR_11 > 31) {
  FUNC_0(("pci_xhci: set_tr_deq: invalid epid %u\r\n", VAR_11));
  VAR_10 = VAR_2;
  goto done;
 }

 VAR_8 = VAR_6->dev_ctx;
 FUNC_9(VAR_8 != ((void*)0));

 VAR_9 = &VAR_8->ctx_ep[VAR_11];
 VAR_7 = &VAR_6->eps[VAR_11];

 switch (FUNC_1(VAR_9->dwEpCtx0)) {
 case 128:
 case 129:
  break;
 default:
  FUNC_0(("pci_xhci cmd set_tr invalid state %x\r\n",
          FUNC_1(VAR_9->dwEpCtx0)));
  VAR_10 = VAR_0;
  goto done;
 }

 VAR_12 = FUNC_6(VAR_5->dwTrb2);
 if (FUNC_2(VAR_9->dwEpCtx0) > 0) {
  struct xhci_stream_ctx *VAR_13;

  VAR_13 = ((void*)0);
  VAR_10 = FUNC_11(VAR_3, VAR_9, VAR_12, &VAR_13);
  if (VAR_13 != ((void*)0)) {
   FUNC_9(VAR_7->ep_sctx != ((void*)0));

   VAR_7->ep_sctx[VAR_12].qwSctx0 = VAR_5->qwTrb0;
   VAR_7->ep_sctx_trbs[VAR_12].ringaddr =
       VAR_5->qwTrb0 & ~0xF;
   VAR_7->ep_sctx_trbs[VAR_12].ccs =
       FUNC_3(VAR_5->qwTrb0);
  }
 } else {
  if (VAR_12 != 0) {
   FUNC_0(("pci_xhci cmd set_tr streamid %x != 0\r\n",
           VAR_12));
  }
  VAR_9->qwEpCtx2 = VAR_5->qwTrb0 & ~0xFUL;
  VAR_7->ep_ringaddr = VAR_9->qwEpCtx2 & ~0xFUL;
  VAR_7->ep_ccs = VAR_5->qwTrb0 & 0x1;
  VAR_7->ep_tr = FUNC_4(VAR_3, VAR_7->ep_ringaddr);

  FUNC_0(("pci_xhci set_tr first TRB:\r\n"));
  FUNC_10(VAR_7->ep_tr);
 }
 VAR_9->dwEpCtx0 = (VAR_9->dwEpCtx0 & ~0x7) | 128;

done:
 return (VAR_10);
}
