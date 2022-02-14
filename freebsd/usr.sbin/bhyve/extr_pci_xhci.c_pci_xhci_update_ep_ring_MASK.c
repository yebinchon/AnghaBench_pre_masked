
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct xhci_endp_ctx {int qwEpCtx2; int dwEpCtx0; } ;
struct pci_xhci_softc {int dummy; } ;
struct pci_xhci_dev_ep {int ep_ringaddr; int ep_ccs; int ep_tr; TYPE_2__* ep_sctx; TYPE_1__* ep_sctx_trbs; } ;
struct pci_xhci_dev_emu {int dummy; } ;
struct TYPE_4__ {int qwSctx0; } ;
struct TYPE_3__ {int ringaddr; int ccs; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pci_xhci_softc*,int) ;

__attribute__((used)) static void
FUNC_3(struct pci_xhci_softc *VAR_0, struct pci_xhci_dev_emu *VAR_1,
    struct pci_xhci_dev_ep *VAR_2, struct xhci_endp_ctx *VAR_3,
    uint32_t VAR_4, uint64_t VAR_5, int VAR_6)
{

 if (FUNC_1(VAR_3->dwEpCtx0) != 0) {
  VAR_2->ep_sctx[VAR_4].qwSctx0 = (VAR_5 & ~0xFUL) |
                                     (VAR_6 & 0x1);

  VAR_2->ep_sctx_trbs[VAR_4].ringaddr = VAR_5 & ~0xFUL;
  VAR_2->ep_sctx_trbs[VAR_4].ccs = VAR_6 & 0x1;
  VAR_3->qwEpCtx2 = (VAR_3->qwEpCtx2 & ~0x1) | (VAR_6 & 0x1);

  FUNC_0(("xhci update ep-ring stream %d, addr %lx\r\n",
      VAR_4, VAR_2->ep_sctx[VAR_4].qwSctx0));
 } else {
  VAR_2->ep_ringaddr = VAR_5 & ~0xFUL;
  VAR_2->ep_ccs = VAR_6 & 0x1;
  VAR_2->ep_tr = FUNC_2(VAR_0, VAR_5 & ~0xFUL);
  VAR_3->qwEpCtx2 = (VAR_5 & ~0xFUL) | (VAR_6 & 0x1);

  FUNC_0(("xhci update ep-ring, addr %lx\r\n",
      (VAR_2->ep_ringaddr | VAR_2->ep_ccs)));
 }
}
