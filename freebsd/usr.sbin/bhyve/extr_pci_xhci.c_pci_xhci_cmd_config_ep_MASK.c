
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_trb {int dwTrb3; int qwTrb0; } ;
struct TYPE_9__ {int dwSctx0; } ;
struct TYPE_8__ {int dwInCtx0; int dwInCtx1; int dwInCtx7; } ;
struct xhci_input_dev_ctx {TYPE_4__ ctx_slot; struct xhci_endp_ctx* ctx_ep; TYPE_3__ ctx_input; } ;
struct xhci_endp_ctx {void* dwEpCtx0; int dwEpCtx4; int qwEpCtx2; int dwEpCtx1; } ;
struct TYPE_10__ {void* dwSctx3; int dwSctx2; int dwSctx1; void* dwSctx0; } ;
struct xhci_dev_ctx {TYPE_5__ ctx_slot; struct xhci_endp_ctx* ctx_ep; } ;
struct pci_xhci_softc {int dummy; } ;
struct TYPE_7__ {scalar_t__ hci_address; } ;
struct pci_xhci_dev_emu {scalar_t__ dev_slotstate; struct xhci_dev_ctx* dev_ctx; TYPE_2__ hci; int dev_sc; TYPE_1__* dev_ue; } ;
struct TYPE_6__ {int (* ue_stop ) (int ) ;} ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,int ,int,int) ;
 void* FUNC_2 (void*,int,int,int) ;
 struct xhci_input_dev_ctx* FUNC_3 (struct pci_xhci_softc*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 struct pci_xhci_dev_emu* FUNC_6 (struct pci_xhci_softc*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct xhci_endp_ctx*,struct xhci_endp_ctx*,int) ;
 int FUNC_9 (struct pci_xhci_dev_emu*,int) ;
 struct xhci_dev_ctx* FUNC_10 (struct pci_xhci_softc*,int ) ;
 int FUNC_11 (struct pci_xhci_dev_emu*,int) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static uint32_t
FUNC_13(struct pci_xhci_softc *VAR_8, uint32_t VAR_9,
    struct xhci_trb *VAR_10)
{
 struct xhci_input_dev_ctx *VAR_11;
 struct pci_xhci_dev_emu *VAR_12;
 struct xhci_dev_ctx *VAR_13;
 struct xhci_endp_ctx *VAR_14, *VAR_15;
 uint32_t VAR_16;
 int VAR_17;

 VAR_16 = VAR_7;

 FUNC_0(("pci_xhci config_ep slot %u\r\n", VAR_9));

 VAR_12 = FUNC_6(VAR_8, VAR_9);
 FUNC_7(VAR_12 != ((void*)0));

 if ((VAR_10->dwTrb3 & VAR_5) != 0) {
  FUNC_0(("pci_xhci config_ep - deconfigure ep slot %u\r\n",
          VAR_9));
  if (VAR_12->dev_ue->ue_stop != ((void*)0))
   VAR_12->dev_ue->ue_stop(VAR_12->dev_sc);

  VAR_12->dev_slotstate = VAR_0;

  VAR_12->hci.hci_address = 0;
  VAR_13 = FUNC_10(VAR_8, VAR_9);


  VAR_13->ctx_slot.dwSctx0 = FUNC_2(
      VAR_13->ctx_slot.dwSctx0, 1, 0x1F, 27);


  VAR_13->ctx_slot.dwSctx3 = FUNC_2(
      VAR_13->ctx_slot.dwSctx3, VAR_3,
      0x1F, 27);


  for (VAR_17 = 2; VAR_17 < 32; VAR_17++)
   FUNC_9(VAR_12, VAR_17);

  VAR_16 = VAR_7;

  goto done;
 }

 if (VAR_12->dev_slotstate < VAR_0) {
  FUNC_0(("pci_xhci: config_ep slotstate x%x != addressed\r\n",
          VAR_12->dev_slotstate));
  VAR_16 = VAR_6;
  goto done;
 }
 VAR_11 = FUNC_3(VAR_8, VAR_10->qwTrb0 & ~0xFUL);
 VAR_13 = VAR_12->dev_ctx;
 FUNC_0(("pci_xhci: config_ep inputctx: D:x%08x A:x%08x 7:x%08x\r\n",
  VAR_11->ctx_input.dwInCtx0, VAR_11->ctx_input.dwInCtx1,
         VAR_11->ctx_input.dwInCtx7));

 for (VAR_17 = 2; VAR_17 <= 31; VAR_17++) {
  VAR_14 = &VAR_13->ctx_ep[VAR_17];

  if (VAR_11->ctx_input.dwInCtx0 &
      FUNC_4(VAR_17)) {
   FUNC_0((" config ep - dropping ep %d\r\n", VAR_17));
   FUNC_9(VAR_12, VAR_17);
  }

  if (VAR_11->ctx_input.dwInCtx1 &
      FUNC_5(VAR_17)) {
   VAR_15 = &VAR_11->ctx_ep[VAR_17];

   FUNC_0((" enable ep[%d]  %08x %08x %016lx %08x\r\n",
      VAR_17, VAR_15->dwEpCtx0, VAR_15->dwEpCtx1,
      VAR_15->qwEpCtx2, VAR_15->dwEpCtx4));

   FUNC_8(VAR_14, VAR_15, sizeof(struct xhci_endp_ctx));

   FUNC_11(VAR_12, VAR_17);


   VAR_14->dwEpCtx0 = FUNC_2(
       VAR_14->dwEpCtx0, VAR_2, 0x7, 0);
  }
 }


 VAR_13->ctx_slot.dwSctx3 = FUNC_2(
     VAR_13->ctx_slot.dwSctx3, VAR_4, 0x1F, 27);
 VAR_13->ctx_slot.dwSctx0 = FUNC_1(
     VAR_13->ctx_slot.dwSctx0, VAR_11->ctx_slot.dwSctx0, 0x1F, 27);
 VAR_12->dev_slotstate = VAR_1;

 FUNC_0(("EP configured; slot %u [0]=0x%08x [1]=0x%08x [2]=0x%08x "
          "[3]=0x%08x\r\n",
     VAR_9, VAR_13->ctx_slot.dwSctx0, VAR_13->ctx_slot.dwSctx1,
     VAR_13->ctx_slot.dwSctx2, VAR_13->ctx_slot.dwSctx3));

done:
 return (VAR_16);
}
