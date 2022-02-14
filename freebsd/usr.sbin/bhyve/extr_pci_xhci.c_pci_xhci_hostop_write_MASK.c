
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int usbsts; int dnctrl; int crcr; int dcbaap; int config; void* dcbaa_p; void* cr_p; int usbcmd; } ;
struct pci_xhci_softc {TYPE_1__ opregs; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 void* FUNC_3 (struct pci_xhci_softc*,int) ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int FUNC_4 (struct pci_xhci_softc*,int,int) ;
 int FUNC_5 (struct pci_xhci_softc*,int) ;

__attribute__((used)) static void
FUNC_6(struct pci_xhci_softc *VAR_12, uint64_t VAR_13,
    uint64_t VAR_14)
{
 VAR_13 -= VAR_0;

 if (VAR_13 < 0x400)
  FUNC_0(("pci_xhci: hostop write offset 0x%lx: 0x%lx\r\n",
           VAR_13, VAR_14));

 switch (VAR_13) {
 case 129:
  VAR_12->opregs.usbcmd = FUNC_5(VAR_12, VAR_14 & 0x3F0F);
  break;

 case 128:

  VAR_12->opregs.usbsts &= ~(VAR_14 &
        (VAR_7|VAR_6|VAR_8|VAR_11|
         VAR_9|VAR_10|VAR_5));
  break;

 case 130:

  break;

 case 131:
  VAR_12->opregs.dnctrl = VAR_14 & 0xFFFF;
  break;

 case 134:
  if (VAR_12->opregs.crcr & VAR_2) {
   VAR_12->opregs.crcr &= ~(VAR_3|VAR_1);
   VAR_12->opregs.crcr |= VAR_14 &
                      (VAR_3|VAR_1);
  } else {
   VAR_12->opregs.crcr = FUNC_1(VAR_12->opregs.crcr) |
              (VAR_14 & (0xFFFFFFC0 | VAR_4));
  }
  break;

 case 135:
  if (!(VAR_12->opregs.crcr & VAR_2)) {
   VAR_12->opregs.crcr = FUNC_2(VAR_12->opregs.crcr) |
                     (VAR_14 << 32);

   VAR_12->opregs.cr_p = FUNC_3(VAR_12,
                     VAR_12->opregs.crcr & ~0xF);
  }

  if (VAR_12->opregs.crcr & VAR_3) {

  }

  if (VAR_12->opregs.crcr & VAR_1) {

  }

  break;

 case 132:
  VAR_12->opregs.dcbaap = FUNC_1(VAR_12->opregs.dcbaap) |
                      (VAR_14 & 0xFFFFFFC0);
  break;

 case 133:
  VAR_12->opregs.dcbaap = FUNC_2(VAR_12->opregs.dcbaap) |
                       (VAR_14 << 32);
  VAR_12->opregs.dcbaa_p = FUNC_3(VAR_12, VAR_12->opregs.dcbaap & ~0x3FUL);

  FUNC_0(("pci_xhci: opregs dcbaap = 0x%lx (vaddr 0x%lx)\r\n",
      VAR_12->opregs.dcbaap, (uint64_t)VAR_12->opregs.dcbaa_p));
  break;

 case 136:
  VAR_12->opregs.config = VAR_14 & 0x03FF;
  break;

 default:
  if (VAR_13 >= 0x400)
   FUNC_4(VAR_12, VAR_13, VAR_14);

  break;
 }
}
