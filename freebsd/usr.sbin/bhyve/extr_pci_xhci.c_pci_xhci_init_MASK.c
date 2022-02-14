
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_2__ {int pgsz; int usbsts; } ;
struct pci_xhci_softc {int usb2_port_start; int usb3_port_start; int caplength; int hcsparams1; int hcsparams2; int hccparams1; int hccparams2; int dboff; int rtsoff; int regsend; int mtx; TYPE_1__ opregs; scalar_t__ hcsparams3; struct pci_devinst* xsc_pi; } ;
struct pci_xhci_portregs {int dummy; } ;
struct pci_devinst {struct pci_xhci_softc* pi_arg; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 struct pci_xhci_softc* FUNC_17 (int,int) ;
 int FUNC_18 (struct pci_xhci_softc*) ;
 int FUNC_19 (struct pci_devinst*,int) ;
 int FUNC_20 (struct pci_devinst*,int ,int ,int) ;
 int FUNC_21 (struct pci_devinst*) ;
 int FUNC_22 (struct pci_devinst*,int ,int) ;
 int FUNC_23 (struct pci_devinst*,int ,int ) ;
 int FUNC_24 (struct pci_xhci_softc*,char*) ;
 int FUNC_25 (struct pci_xhci_softc*) ;
 int FUNC_26 (int *,int *) ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_27(struct vmctx *VAR_20, struct pci_devinst *VAR_21, char *VAR_22)
{
 struct pci_xhci_softc *VAR_23;
 int VAR_24;

 if (VAR_19) {
  FUNC_1(("pci_xhci controller already defined\r\n"));
  return (-1);
 }
 VAR_19 = 1;

 VAR_23 = FUNC_17(1, sizeof(struct pci_xhci_softc));
 VAR_21->pi_arg = VAR_23;
 VAR_23->xsc_pi = VAR_21;

 VAR_23->usb2_port_start = (VAR_13/2) + 1;
 VAR_23->usb3_port_start = 1;


 VAR_24 = FUNC_24(VAR_23, VAR_22);
 if (VAR_24 < 0)
  goto done;
 else
  VAR_24 = 0;

 VAR_23->caplength = FUNC_2(VAR_11) |
                 FUNC_10(0x0100);
 VAR_23->hcsparams1 = FUNC_12(VAR_13) |
                  FUNC_11(1) |
                  FUNC_13(VAR_14);
 VAR_23->hcsparams2 = FUNC_14(VAR_12) |
                  FUNC_15(0x04);
 VAR_23->hcsparams3 = 0;
 VAR_23->hccparams1 = FUNC_5(1) |
                  FUNC_6(1) |
                  FUNC_4(VAR_17);
 VAR_23->hccparams2 = FUNC_8(1) |
                  FUNC_9(1);
 VAR_23->dboff = FUNC_3(VAR_11 + VAR_16 +
             VAR_13 * sizeof(struct pci_xhci_portregs));


 if (VAR_23->dboff & 0x3)
  VAR_23->dboff = (VAR_23->dboff + 0x3) & ~0x3;


 VAR_23->rtsoff = FUNC_16(VAR_23->dboff + (VAR_14+1) * 32);
 if (VAR_23->rtsoff & 0x1F)
  VAR_23->rtsoff = (VAR_23->rtsoff + 0x1F) & ~0x1F;

 FUNC_0(("pci_xhci dboff: 0x%x, rtsoff: 0x%x\r\n", VAR_23->dboff,
         VAR_23->rtsoff));

 VAR_23->opregs.usbsts = VAR_18;
 VAR_23->opregs.pgsz = VAR_15;

 FUNC_25(VAR_23);

 VAR_23->regsend = VAR_23->rtsoff + 0x20 + 32;





 VAR_23->hccparams1 |= FUNC_7(VAR_23->regsend/4);

 FUNC_22(VAR_21, VAR_4, 0x1E31);
 FUNC_22(VAR_21, VAR_7, 0x8086);
 FUNC_23(VAR_21, VAR_3, VAR_1);
 FUNC_23(VAR_21, VAR_6, VAR_8);
 FUNC_23(VAR_21, VAR_5,VAR_2);
 FUNC_23(VAR_21, VAR_9, VAR_10);

 FUNC_19(VAR_21, 1);


 FUNC_20(VAR_21, 0, VAR_0, VAR_23->regsend + 4*32);
 FUNC_0(("pci_xhci pci_emu_alloc: %d\r\n", VAR_23->regsend + 4*32));


 FUNC_21(VAR_21);

 FUNC_26(&VAR_23->mtx, ((void*)0));

done:
 if (VAR_24) {
  FUNC_18(VAR_23);
 }

 return (VAR_24);
}
