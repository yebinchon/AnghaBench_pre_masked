
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vmctx {int dummy; } ;
struct pci_xhci_softc {scalar_t__ dboff; scalar_t__ rtsoff; scalar_t__ regsend; int mtx; } ;
struct pci_devinst {struct pci_xhci_softc* pi_arg; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_xhci_softc*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct pci_xhci_softc*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct pci_xhci_softc*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct vmctx *VAR_1, int VAR_2, struct pci_devinst *VAR_3,
                int VAR_4, uint64_t VAR_5, int VAR_6, uint64_t VAR_7)
{
 struct pci_xhci_softc *VAR_8;

 VAR_8 = VAR_3->pi_arg;

 FUNC_1(VAR_4 == 0);


 FUNC_5(&VAR_8->mtx);
 if (VAR_5 < VAR_0)
  FUNC_0(("pci_xhci: write RO-CAPs offset %ld\r\n", VAR_5));
 else if (VAR_5 < VAR_8->dboff)
  FUNC_3(VAR_8, VAR_5, VAR_7);
 else if (VAR_5 < VAR_8->rtsoff)
  FUNC_2(VAR_8, VAR_5, VAR_7);
 else if (VAR_5 < VAR_8->regsend)
  FUNC_4(VAR_8, VAR_5, VAR_7);
 else
  FUNC_0(("pci_xhci: write invalid offset %ld\r\n", VAR_5));

 FUNC_6(&VAR_8->mtx);
}
