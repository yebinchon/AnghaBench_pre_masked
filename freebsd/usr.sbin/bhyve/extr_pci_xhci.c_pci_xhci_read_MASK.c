
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct pci_xhci_softc {scalar_t__ dboff; scalar_t__ rtsoff; scalar_t__ regsend; int mtx; } ;
struct pci_devinst {struct pci_xhci_softc* pi_arg; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_xhci_softc*,scalar_t__) ;
 int FUNC_3 (struct pci_xhci_softc*,scalar_t__) ;
 int FUNC_4 (struct pci_xhci_softc*,scalar_t__) ;
 int FUNC_5 (struct pci_xhci_softc*,scalar_t__) ;
 int FUNC_6 (struct pci_xhci_softc*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static uint64_t
FUNC_9(struct vmctx *VAR_1, int VAR_2, struct pci_devinst *VAR_3, int VAR_4,
    uint64_t VAR_5, int VAR_6)
{
 struct pci_xhci_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = VAR_3->pi_arg;

 FUNC_1(VAR_4 == 0);

 FUNC_7(&VAR_7->mtx);
 if (VAR_5 < VAR_0)
  VAR_8 = FUNC_3(VAR_7, VAR_5);
 else if (VAR_5 < VAR_7->dboff)
  VAR_8 = FUNC_4(VAR_7, VAR_5);
 else if (VAR_5 < VAR_7->rtsoff)
  VAR_8 = FUNC_2(VAR_7, VAR_5);
 else if (VAR_5 < VAR_7->regsend)
  VAR_8 = FUNC_5(VAR_7, VAR_5);
 else if (VAR_5 < (VAR_7->regsend + 4*32))
  VAR_8 = FUNC_6(VAR_7, VAR_5);
 else {
  VAR_8 = 0;
  FUNC_0(("pci_xhci: read invalid offset %ld\r\n", VAR_5));
 }

 FUNC_8(&VAR_7->mtx);

 switch (VAR_6) {
 case 1:
  VAR_8 &= 0xFF;
  break;
 case 2:
  VAR_8 &= 0xFFFF;
  break;
 case 4:
  VAR_8 &= 0xFFFFFFFF;
  break;
 }

 return (VAR_8);
}
