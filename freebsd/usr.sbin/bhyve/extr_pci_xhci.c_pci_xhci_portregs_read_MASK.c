
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct pci_xhci_softc {TYPE_1__* portregs; } ;
struct TYPE_2__ {int portsc; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint64_t
FUNC_2(struct pci_xhci_softc *VAR_1, uint64_t VAR_2)
{
 int VAR_3;
 uint32_t *VAR_4;

 if (VAR_1->portregs == ((void*)0))
  return (0);

 VAR_3 = (VAR_2 - 0x3F0) / 0x10;

 if (VAR_3 > VAR_0) {
  FUNC_0(("pci_xhci: portregs_read port %d >= XHCI_MAX_DEVS\r\n",
      VAR_3));


  return (FUNC_1(3));
 }

 VAR_2 = (VAR_2 - 0x3F0) % 0x10;

 VAR_4 = &VAR_1->portregs[VAR_3].portsc;
 VAR_4 += VAR_2 / sizeof(uint32_t);

 FUNC_0(("pci_xhci: portregs read offset 0x%lx port %u -> 0x%x\r\n",
         VAR_2, VAR_3, *VAR_4));

 return (*VAR_4);
}
