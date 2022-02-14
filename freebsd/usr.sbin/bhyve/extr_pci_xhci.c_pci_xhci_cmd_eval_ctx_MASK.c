
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_trb {int qwTrb0; } ;
struct xhci_slot_ctx {void* dwSctx2; void* dwSctx1; int dwSctx3; int dwSctx0; } ;
struct TYPE_3__ {scalar_t__ dwInCtx0; int dwInCtx1; } ;
struct xhci_input_dev_ctx {TYPE_1__ ctx_input; struct xhci_slot_ctx ctx_slot; struct xhci_endp_ctx* ctx_ep; } ;
struct xhci_endp_ctx {int dwEpCtx4; int qwEpCtx2; void* dwEpCtx1; int dwEpCtx0; } ;
struct TYPE_4__ {int dwSctx3; void* dwSctx2; void* dwSctx1; int dwSctx0; } ;
struct xhci_dev_ctx {TYPE_2__ ctx_slot; struct xhci_endp_ctx* ctx_ep; } ;
struct pci_xhci_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,void*,int,int) ;
 struct xhci_input_dev_ctx* FUNC_2 (struct pci_xhci_softc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct xhci_dev_ctx* FUNC_3 (struct pci_xhci_softc*,int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct pci_xhci_softc *VAR_2, uint32_t VAR_3,
    struct xhci_trb *VAR_4)
{
 struct xhci_input_dev_ctx *VAR_5;
 struct xhci_slot_ctx *VAR_6;
 struct xhci_dev_ctx *VAR_7;
 struct xhci_endp_ctx *VAR_8;
 uint32_t VAR_9;

 VAR_5 = FUNC_2(VAR_2, VAR_4->qwTrb0 & ~0xFUL);
 VAR_6 = &VAR_5->ctx_slot;
 VAR_8 = &VAR_5->ctx_ep[1];

 VAR_9 = VAR_0;
 FUNC_0(("pci_xhci: eval ctx, input ctl: D 0x%08x A 0x%08x,\r\n"
          "          slot %08x %08x %08x %08x\r\n"
          "          ep0  %08x %08x %016lx %08x\r\n",
         VAR_5->ctx_input.dwInCtx0, VAR_5->ctx_input.dwInCtx1,
         VAR_6->dwSctx0, VAR_6->dwSctx1,
         VAR_6->dwSctx2, VAR_6->dwSctx3,
         VAR_8->dwEpCtx0, VAR_8->dwEpCtx1, VAR_8->qwEpCtx2,
         VAR_8->dwEpCtx4));


 if ((VAR_5->ctx_input.dwInCtx0 != 0) ||
     (VAR_5->ctx_input.dwInCtx1 & 0x03) == 0) {
  FUNC_0(("pci_xhci: eval ctx, input ctl invalid\r\n"));
  VAR_9 = VAR_1;
  goto done;
 }


 VAR_7 = FUNC_3(VAR_2, VAR_3);

 FUNC_0(("pci_xhci: eval ctx, dev ctx\r\n"
          "          slot %08x %08x %08x %08x\r\n",
         VAR_7->ctx_slot.dwSctx0, VAR_7->ctx_slot.dwSctx1,
         VAR_7->ctx_slot.dwSctx2, VAR_7->ctx_slot.dwSctx3));

 if (VAR_5->ctx_input.dwInCtx1 & 0x01) {

  VAR_7->ctx_slot.dwSctx1 = FUNC_1(
      VAR_7->ctx_slot.dwSctx1, VAR_5->ctx_slot.dwSctx1,
      0xFFFF, 0);


  VAR_7->ctx_slot.dwSctx2 = FUNC_1(
      VAR_7->ctx_slot.dwSctx2, VAR_5->ctx_slot.dwSctx2,
      0x3FF, 22);
 }
 if (VAR_5->ctx_input.dwInCtx1 & 0x02) {

  VAR_7->ctx_ep[1].dwEpCtx1 = FUNC_1(
      VAR_7->ctx_ep[1].dwEpCtx1, VAR_8->dwEpCtx1,
      0xFFFF, 16);

  VAR_8 = &VAR_7->ctx_ep[1];
 }

 FUNC_0(("pci_xhci: eval ctx, output ctx\r\n"
          "          slot %08x %08x %08x %08x\r\n"
          "          ep0  %08x %08x %016lx %08x\r\n",
         VAR_7->ctx_slot.dwSctx0, VAR_7->ctx_slot.dwSctx1,
         VAR_7->ctx_slot.dwSctx2, VAR_7->ctx_slot.dwSctx3,
         VAR_8->dwEpCtx0, VAR_8->dwEpCtx1, VAR_8->qwEpCtx2,
         VAR_8->dwEpCtx4));

done:
 return (VAR_9);
}
