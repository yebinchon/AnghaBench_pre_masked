
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct xhci_trb {int dwTrb3; int qwTrb0; int dwTrb2; } ;
struct TYPE_2__ {int crcr; struct xhci_trb* cr_p; } ;
struct pci_xhci_softc {TYPE_1__ opregs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct pci_xhci_softc*,int,struct xhci_trb*) ;
 int FUNC_7 (struct pci_xhci_softc*,int,struct xhci_trb*) ;
 int FUNC_8 (struct pci_xhci_softc*,int) ;
 int FUNC_9 (struct pci_xhci_softc*,int*) ;
 int FUNC_10 (struct pci_xhci_softc*,int,struct xhci_trb*) ;
 int FUNC_11 (struct pci_xhci_softc*,int) ;
 int FUNC_12 (struct pci_xhci_softc*,int,struct xhci_trb*) ;
 int FUNC_13 (struct pci_xhci_softc*,int,struct xhci_trb*) ;
 int FUNC_14 (struct pci_xhci_softc*,struct xhci_trb*,int) ;
 struct xhci_trb* FUNC_15 (struct pci_xhci_softc*,struct xhci_trb*,int*) ;

__attribute__((used)) static int
FUNC_16(struct pci_xhci_softc *VAR_7)
{
 struct xhci_trb VAR_8;
 struct xhci_trb *VAR_9;
 uint64_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 VAR_15 = 0;
 VAR_7->opregs.crcr |= VAR_1;

 VAR_9 = VAR_7->opregs.cr_p;
 VAR_11 = VAR_7->opregs.crcr & VAR_2;
 VAR_10 = VAR_7->opregs.crcr & ~0xF;

 while (1) {
  VAR_7->opregs.cr_p = VAR_9;

  VAR_12 = FUNC_4(VAR_9->dwTrb3);

  if ((VAR_9->dwTrb3 & VAR_3) !=
      (VAR_11 & VAR_3))
   break;

  FUNC_0(("pci_xhci: cmd type 0x%x, Trb0 x%016lx dwTrb2 x%08x"
          " dwTrb3 x%08x, TRB_CYCLE %u/ccs %u\r\n",
          VAR_12, VAR_9->qwTrb0, VAR_9->dwTrb2, VAR_9->dwTrb3,
          VAR_9->dwTrb3 & VAR_3, VAR_11));

  VAR_14 = VAR_5;
  VAR_8.dwTrb2 = 0;
  VAR_8.dwTrb3 = (VAR_11 & VAR_3) |
        FUNC_5(VAR_6);
  VAR_13 = 0;

  switch (VAR_12) {
  case 135:
   if (VAR_9->dwTrb3 & VAR_4)
    VAR_11 ^= VAR_2;
   break;

  case 140:
   VAR_14 = FUNC_9(VAR_7, &VAR_13);
   break;

  case 141:
   VAR_13 = FUNC_2(VAR_9->dwTrb3);
   VAR_14 = FUNC_8(VAR_7, VAR_13);
   break;

  case 143:
   VAR_13 = FUNC_2(VAR_9->dwTrb3);
   VAR_14 = FUNC_6(VAR_7, VAR_13, VAR_9);
   break;

  case 142:
   VAR_13 = FUNC_2(VAR_9->dwTrb3);
   VAR_14 = FUNC_7(VAR_7, VAR_13, VAR_9);
   break;

  case 139:
   VAR_13 = FUNC_2(VAR_9->dwTrb3);
   VAR_14 = FUNC_10(VAR_7, VAR_13, VAR_9);
   break;

  case 131:
   FUNC_0(("Reset Endpoint on slot %d\r\n", VAR_13));
   VAR_13 = FUNC_2(VAR_9->dwTrb3);
   VAR_14 = FUNC_12(VAR_7, VAR_13, VAR_9);
   break;

  case 128:
   FUNC_0(("Stop Endpoint on slot %d\r\n", VAR_13));
   VAR_13 = FUNC_2(VAR_9->dwTrb3);
   VAR_14 = FUNC_12(VAR_7, VAR_13, VAR_9);
   break;

  case 129:
   VAR_13 = FUNC_2(VAR_9->dwTrb3);
   VAR_14 = FUNC_13(VAR_7, VAR_13, VAR_9);
   break;

  case 132:
   VAR_13 = FUNC_2(VAR_9->dwTrb3);
   VAR_14 = FUNC_11(VAR_7, VAR_13);
   break;

  case 138:

   break;

  case 134:
   break;

  case 130:
   break;

  case 136:
   break;

  case 137:
   break;

  case 133:
   break;

  default:
   FUNC_0(("pci_xhci: unsupported cmd %x\r\n", VAR_12));
   break;
  }

  if (VAR_12 != 135) {



   VAR_8.qwTrb0 = VAR_10;
   VAR_8.dwTrb2 |= FUNC_1(VAR_14);
   VAR_8.dwTrb3 |= FUNC_3(VAR_13);
   FUNC_0(("pci_xhci: command 0x%x result: 0x%x\r\n",
           VAR_12, VAR_14));
   FUNC_14(VAR_7, &VAR_8, 1);
  }

  VAR_9 = FUNC_15(VAR_7, VAR_9, &VAR_10);
 }

 VAR_7->opregs.crcr = VAR_10 | (VAR_7->opregs.crcr & VAR_0) | VAR_11;
 VAR_7->opregs.crcr &= ~VAR_1;
 return (VAR_15);
}
