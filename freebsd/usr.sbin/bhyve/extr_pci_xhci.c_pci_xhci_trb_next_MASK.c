
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xhci_trb {int qwTrb0; int dwTrb3; } ;
struct pci_xhci_softc {int dummy; } ;


 struct xhci_trb* FUNC_0 (struct pci_xhci_softc*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;

struct xhci_trb *
FUNC_3(struct pci_xhci_softc *VAR_1, struct xhci_trb *VAR_2,
    uint64_t *VAR_3)
{
 struct xhci_trb *VAR_4;

 FUNC_2(VAR_2 != ((void*)0));

 if (FUNC_1(VAR_2->dwTrb3) == VAR_0) {
  if (VAR_3)
   *VAR_3 = VAR_2->qwTrb0 & ~0xFUL;

  VAR_4 = FUNC_0(VAR_1, VAR_2->qwTrb0 & ~0xFUL);
 } else {
  if (VAR_3)
   *VAR_3 += sizeof(struct xhci_trb) & ~0xFUL;

  VAR_4 = VAR_2 + 1;
 }

 return (VAR_4);
}
