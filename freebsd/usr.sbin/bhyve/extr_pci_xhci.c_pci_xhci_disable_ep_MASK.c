
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_endp_ctx {int dwEpCtx0; } ;
struct xhci_dev_ctx {struct xhci_endp_ctx* ctx_ep; } ;
struct pci_xhci_dev_ep {int * ep_xfer; int * ep_sctx_trbs; } ;
struct pci_xhci_dev_emu {struct pci_xhci_dev_ep* eps; struct xhci_dev_ctx* dev_ctx; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_xhci_dev_ep*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct pci_xhci_dev_emu *VAR_1, int VAR_2)
{
 struct xhci_dev_ctx *VAR_3;
 struct pci_xhci_dev_ep *VAR_4;
 struct xhci_endp_ctx *VAR_5;

 FUNC_0(("pci_xhci disable_ep %d\r\n", VAR_2));

 VAR_3 = VAR_1->dev_ctx;
 VAR_5 = &VAR_3->ctx_ep[VAR_2];
 VAR_5->dwEpCtx0 = (VAR_5->dwEpCtx0 & ~0x7) | VAR_0;

 VAR_4 = &VAR_1->eps[VAR_2];
 if (FUNC_1(VAR_5->dwEpCtx0) > 0 &&
     VAR_4->ep_sctx_trbs != ((void*)0))
   FUNC_2(VAR_4->ep_sctx_trbs);

 if (VAR_4->ep_xfer != ((void*)0)) {
  FUNC_2(VAR_4->ep_xfer);
  VAR_4->ep_xfer = ((void*)0);
 }

 FUNC_3(VAR_4, 0, sizeof(struct pci_xhci_dev_ep));
}
