
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iman; int erdp; } ;
struct TYPE_5__ {TYPE_1__ intrreg; } ;
struct TYPE_6__ {int usbcmd; int usbsts; } ;
struct pci_xhci_softc {int xsc_pi; TYPE_2__ rtsregs; TYPE_3__ opregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct pci_xhci_softc *VAR_5)
{

 VAR_5->rtsregs.intrreg.erdp |= VAR_1;
 VAR_5->rtsregs.intrreg.iman |= VAR_3;
 VAR_5->opregs.usbsts |= VAR_4;


 if ((VAR_5->opregs.usbcmd & VAR_0) &&
     (VAR_5->rtsregs.intrreg.iman & VAR_2)) {
  if (FUNC_2(VAR_5->xsc_pi))
   FUNC_0(VAR_5->xsc_pi, 0);
  else
   FUNC_1(VAR_5->xsc_pi);
 }
}
