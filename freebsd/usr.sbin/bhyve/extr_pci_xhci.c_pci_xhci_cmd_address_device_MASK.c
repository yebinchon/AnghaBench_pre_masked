
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_trb {int qwTrb0; } ;
struct xhci_slot_ctx {int dwSctx3; int dwEpCtx0; int dwEpCtx4; int qwEpCtx2; int dwEpCtx1; int dwSctx2; int dwSctx1; int dwSctx0; } ;
struct TYPE_4__ {scalar_t__ dwInCtx0; int dwInCtx1; } ;
struct xhci_input_dev_ctx {TYPE_1__ ctx_input; struct xhci_slot_ctx* ctx_ep; struct xhci_slot_ctx ctx_slot; } ;
struct xhci_endp_ctx {int dwSctx3; int dwEpCtx0; int dwEpCtx4; int qwEpCtx2; int dwEpCtx1; int dwSctx2; int dwSctx1; int dwSctx0; } ;
struct xhci_dev_ctx {struct xhci_slot_ctx ctx_slot; struct xhci_slot_ctx* ctx_ep; } ;
struct pci_xhci_softc {int dummy; } ;
struct TYPE_5__ {int hci_address; } ;
struct pci_xhci_dev_emu {int dev_slotstate; int dev_sc; TYPE_3__* dev_ue; struct xhci_dev_ctx* dev_ctx; TYPE_2__ hci; } ;
struct TYPE_6__ {scalar_t__ (* ue_reset ) (int ) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct xhci_input_dev_ctx* FUNC_2 (struct pci_xhci_softc*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct pci_xhci_dev_emu* FUNC_5 (struct pci_xhci_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xhci_slot_ctx*,struct xhci_slot_ctx*,int) ;
 struct xhci_dev_ctx* FUNC_8 (struct pci_xhci_softc*,int ) ;
 int FUNC_9 (struct pci_xhci_dev_emu*,int) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static uint32_t
FUNC_11(struct pci_xhci_softc *VAR_6, uint32_t VAR_7,
    struct xhci_trb *VAR_8)
{
 struct pci_xhci_dev_emu *VAR_9;
 struct xhci_input_dev_ctx *VAR_10;
 struct xhci_slot_ctx *VAR_11;
 struct xhci_dev_ctx *VAR_12;
 struct xhci_endp_ctx *VAR_13;
 uint32_t VAR_14;

 VAR_10 = FUNC_2(VAR_6, VAR_8->qwTrb0 & ~0xFUL);
 VAR_11 = &VAR_10->ctx_slot;
 VAR_13 = &VAR_10->ctx_ep[1];

 VAR_14 = VAR_4;

 FUNC_0(("pci_xhci: address device, input ctl: D 0x%08x A 0x%08x,\r\n"
          "          slot %08x %08x %08x %08x\r\n"
          "          ep0  %08x %08x %016lx %08x\r\n",
         VAR_10->ctx_input.dwInCtx0, VAR_10->ctx_input.dwInCtx1,
         VAR_11->dwSctx0, VAR_11->dwSctx1,
         VAR_11->dwSctx2, VAR_11->dwSctx3,
         VAR_13->dwEpCtx0, VAR_13->dwEpCtx1, VAR_13->qwEpCtx2,
         VAR_13->dwEpCtx4));


 if ((VAR_10->ctx_input.dwInCtx0 != 0) ||
     (VAR_10->ctx_input.dwInCtx1 & 0x03) != 0x03) {
  FUNC_0(("pci_xhci: address device, input ctl invalid\r\n"));
  VAR_14 = VAR_5;
  goto done;
 }


 VAR_12 = FUNC_8(VAR_6, VAR_7);

 FUNC_0(("pci_xhci: address device, dev ctx\r\n"
          "          slot %08x %08x %08x %08x\r\n",
         VAR_12->ctx_slot.dwSctx0, VAR_12->ctx_slot.dwSctx1,
         VAR_12->ctx_slot.dwSctx2, VAR_12->ctx_slot.dwSctx3));

 VAR_9 = FUNC_5(VAR_6, VAR_7);
 FUNC_6(VAR_9 != ((void*)0));

 VAR_9->hci.hci_address = VAR_7;
 VAR_9->dev_ctx = VAR_12;

 if (VAR_9->dev_ue->ue_reset == ((void*)0) ||
     VAR_9->dev_ue->ue_reset(VAR_9->dev_sc) < 0) {
  VAR_14 = VAR_3;
  goto done;
 }

 FUNC_7(&VAR_12->ctx_slot, VAR_11, sizeof(struct xhci_slot_ctx));

 VAR_12->ctx_slot.dwSctx3 =
     FUNC_4(VAR_2) |
     FUNC_3(VAR_7);

 FUNC_7(&VAR_12->ctx_ep[1], VAR_13, sizeof(struct xhci_endp_ctx));
 VAR_13 = &VAR_12->ctx_ep[1];
 VAR_13->dwEpCtx0 = (VAR_13->dwEpCtx0 & ~0x7) |
     FUNC_1(VAR_1);

 FUNC_9(VAR_9, 1);

 VAR_9->dev_slotstate = VAR_0;

 FUNC_0(("pci_xhci: address device, output ctx\r\n"
          "          slot %08x %08x %08x %08x\r\n"
          "          ep0  %08x %08x %016lx %08x\r\n",
         VAR_12->ctx_slot.dwSctx0, VAR_12->ctx_slot.dwSctx1,
         VAR_12->ctx_slot.dwSctx2, VAR_12->ctx_slot.dwSctx3,
         VAR_13->dwEpCtx0, VAR_13->dwEpCtx1, VAR_13->qwEpCtx2,
         VAR_13->dwEpCtx4));

done:
 return (VAR_14);
}
