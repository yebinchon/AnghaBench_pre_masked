
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
struct xhci_dev_ctx {int dummy; } ;
struct TYPE_3__ {TYPE_2__* dcbaa_p; } ;
struct pci_xhci_softc {size_t ndevices; TYPE_1__ opregs; } ;
struct TYPE_4__ {int* dcba; } ;


 int FUNC_0 (char*) ;
 struct xhci_dev_ctx* FUNC_1 (struct pci_xhci_softc*,int) ;
 int FUNC_2 (int) ;

struct xhci_dev_ctx *
FUNC_3(struct pci_xhci_softc *VAR_0, uint32_t VAR_1)
{
 uint64_t VAR_2;
 struct xhci_dev_ctx *VAR_3;

 FUNC_2(VAR_1 > 0 && VAR_1 <= VAR_0->ndevices);
 FUNC_2(VAR_0->opregs.dcbaa_p != ((void*)0));

 VAR_2 = VAR_0->opregs.dcbaa_p->dcba[VAR_1];

 if (VAR_2 == 0) {
  FUNC_0(("get_dev_ctx devctx_addr == 0\r\n"));
  return (((void*)0));
 }

 FUNC_0(("pci_xhci: get dev ctx, slot %u devctx addr %016lx\r\n",
         VAR_1, VAR_2));
 VAR_3 = FUNC_1(VAR_0, VAR_2 & ~0x3FUL);

 return (VAR_3);
}
