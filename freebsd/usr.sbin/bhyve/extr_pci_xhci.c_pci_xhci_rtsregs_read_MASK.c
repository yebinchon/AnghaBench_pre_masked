
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int iman; } ;
struct TYPE_4__ {int mfindex; TYPE_1__ intrreg; } ;
struct pci_xhci_softc {TYPE_2__ rtsregs; scalar_t__ rtsoff; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint64_t
FUNC_2(struct pci_xhci_softc *VAR_1, uint64_t VAR_2)
{
 uint32_t VAR_3;

 VAR_2 -= VAR_1->rtsoff;
 VAR_3 = 0;

 if (VAR_2 == VAR_0) {
  VAR_3 = VAR_1->rtsregs.mfindex;
 } else if (VAR_2 >= 0x20) {
  int VAR_4;
  uint32_t *VAR_5;

  VAR_2 -= 0x20;
  VAR_4 = VAR_2 % 32;

  FUNC_1(VAR_2 < sizeof(VAR_1->rtsregs.intrreg));

  VAR_5 = &VAR_1->rtsregs.intrreg.iman;
  VAR_5 += VAR_4 / sizeof(uint32_t);
  VAR_3 = *VAR_5;
 }

 FUNC_0(("pci_xhci: rtsregs read offset 0x%lx -> 0x%x\r\n",
         VAR_2, VAR_3));

 return (VAR_3);
}
