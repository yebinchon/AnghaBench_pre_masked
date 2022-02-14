
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pci_xhci_softc {int caplength; int hcsparams1; int hcsparams2; int hcsparams3; int hccparams1; int dboff; int rtsoff; int hccparams2; } ;


 int FUNC_0 (char*) ;
__attribute__((used)) static uint64_t
FUNC_1(struct pci_xhci_softc *VAR_0, uint64_t VAR_1)
{
 uint64_t VAR_2;

 switch (VAR_1) {
 case 135:
  VAR_2 = VAR_0->caplength;
  break;

 case 131:
  VAR_2 = VAR_0->hcsparams1;
  break;

 case 130:
  VAR_2 = VAR_0->hcsparams2;
  break;

 case 129:
  VAR_2 = VAR_0->hcsparams3;
  break;

 case 132:
  VAR_2 = VAR_0->hccparams1;
  break;

 case 134:
  VAR_2 = VAR_0->dboff;
  break;

 case 128:
  VAR_2 = VAR_0->rtsoff;
  break;

 case 133:
  VAR_2 = VAR_0->hccparams2;
  break;

 default:
  VAR_2 = 0;
  break;
 }

 FUNC_0(("pci_xhci: hostcap read offset 0x%lx -> 0x%lx\r\n",
         VAR_1, VAR_2));

 return (VAR_2);
}
