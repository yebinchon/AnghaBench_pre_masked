
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int usbcmd; int usbsts; int pgsz; int dnctrl; int crcr; int dcbaap; int config; } ;
struct pci_xhci_softc {TYPE_1__ opregs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;



 int VAR_1 ;






 int FUNC_1 (struct pci_xhci_softc*,int) ;

__attribute__((used)) static uint64_t
FUNC_2(struct pci_xhci_softc *VAR_2, uint64_t VAR_3)
{
 uint64_t VAR_4;

 VAR_3 = (VAR_3 - VAR_0);

 switch (VAR_3) {
 case 129:
  VAR_4 = VAR_2->opregs.usbcmd;
  break;

 case 128:
  VAR_4 = VAR_2->opregs.usbsts;
  break;

 case 130:
  VAR_4 = VAR_2->opregs.pgsz;
  break;

 case 131:
  VAR_4 = VAR_2->opregs.dnctrl;
  break;

 case 134:
  VAR_4 = VAR_2->opregs.crcr & VAR_1;
  break;

 case 135:
  VAR_4 = 0;
  break;

 case 132:
  VAR_4 = VAR_2->opregs.dcbaap & 0xFFFFFFFF;
  break;

 case 133:
  VAR_4 = (VAR_2->opregs.dcbaap >> 32) & 0xFFFFFFFF;
  break;

 case 136:
  VAR_4 = VAR_2->opregs.config;
  break;

 default:
  if (VAR_3 >= 0x400)
   VAR_4 = FUNC_1(VAR_2, VAR_3);
  else
   VAR_4 = 0;

  break;
 }

 if (VAR_3 < 0x400)
  FUNC_0(("pci_xhci: hostop read offset 0x%lx -> 0x%lx\r\n",
          VAR_3, VAR_4));

 return (VAR_4);
}
