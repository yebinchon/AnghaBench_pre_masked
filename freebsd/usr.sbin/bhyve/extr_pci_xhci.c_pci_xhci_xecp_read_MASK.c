
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct pci_xhci_softc {int usb2_port_start; int usb3_port_start; scalar_t__ regsend; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_1(struct pci_xhci_softc *VAR_2, uint64_t VAR_3)
{
 uint32_t VAR_4;

 VAR_3 -= VAR_2->regsend;
 VAR_4 = 0;

 switch (VAR_3) {
 case 0:

  VAR_4 = (0x02 << 24) | (4 << 8) | VAR_0;
  break;
 case 4:

  VAR_4 = 0x20425355;
  break;
 case 8:

  VAR_4 = ((VAR_1/2) << 8) | VAR_2->usb2_port_start;
  break;
 case 12:
  break;
 case 16:

  VAR_4 = (0x03 << 24) | VAR_0;
  break;
 case 20:

  VAR_4 = 0x20425355;
  break;
 case 24:

  VAR_4 = ((VAR_1/2) << 8) | VAR_2->usb3_port_start;
  break;
 case 28:
  break;
 default:
  FUNC_0(("pci_xhci: xecp invalid offset 0x%lx\r\n", VAR_3));
  break;
 }

 FUNC_0(("pci_xhci: xecp read offset 0x%lx -> 0x%x\r\n",
         VAR_3, VAR_4));

 return (VAR_4);
}
