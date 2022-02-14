
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct xhci_endp_ctx {void* dwEpCtx0; } ;
struct TYPE_4__ {void* dwSctx0; void* dwSctx3; } ;
struct xhci_dev_ctx {struct xhci_endp_ctx* ctx_ep; TYPE_2__ ctx_slot; } ;
struct pci_xhci_softc {int * portregs; } ;
struct TYPE_3__ {scalar_t__ hci_address; } ;
struct pci_xhci_dev_emu {scalar_t__ dev_slotstate; TYPE_1__ hci; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (void*,int,int,int) ;
 struct pci_xhci_dev_emu* FUNC_2 (struct pci_xhci_softc*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct xhci_dev_ctx* FUNC_3 (struct pci_xhci_softc*,int ) ;
 int FUNC_4 (struct pci_xhci_softc*,int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct pci_xhci_softc *VAR_7, uint32_t VAR_8)
{
 struct pci_xhci_dev_emu *VAR_9;
 struct xhci_dev_ctx *VAR_10;
 struct xhci_endp_ctx *VAR_11;
 uint32_t VAR_12;
 int VAR_13;

 VAR_12 = VAR_4;
 if (VAR_7->portregs == ((void*)0))
  goto done;

 FUNC_0(("pci_xhci reset device slot %u\r\n", VAR_8));

 VAR_9 = FUNC_2(VAR_7, VAR_8);
 if (!VAR_9 || VAR_9->dev_slotstate == VAR_1)
  VAR_12 = VAR_5;
 else {
  VAR_9->dev_slotstate = VAR_0;

  VAR_9->hci.hci_address = 0;
  VAR_10 = FUNC_3(VAR_7, VAR_8);


  VAR_10->ctx_slot.dwSctx3 = FUNC_1(
      VAR_10->ctx_slot.dwSctx3, VAR_3,
      0x1F, 27);


  VAR_10->ctx_slot.dwSctx0 = FUNC_1(
      VAR_10->ctx_slot.dwSctx0, 1, 0x1F, 27);


  for (VAR_13 = 2; VAR_13 <= 31; VAR_13++) {
   VAR_11 = &VAR_10->ctx_ep[VAR_13];
   VAR_11->dwEpCtx0 = FUNC_1( VAR_11->dwEpCtx0,
       VAR_2, 0x7, 0);
  }

  VAR_12 = VAR_6;
 }

 FUNC_4(VAR_7, VAR_8);

done:
 return (VAR_12);
}
