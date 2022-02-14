
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct xhci_trb {int dummy; } ;
struct pci_xhci_softc {int * portregs; } ;
struct pci_xhci_portregs {int portsc; int portpmsc; int porthlpmc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (struct pci_xhci_softc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_xhci_portregs* FUNC_3 (struct pci_xhci_softc*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int) ;
 int VAR_15 ;
 int FUNC_5 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct pci_xhci_softc*,struct xhci_trb*,int) ;
 int FUNC_8 (struct pci_xhci_softc*,int,int) ;
 int FUNC_9 (struct xhci_trb*,int,int ,int ) ;

__attribute__((used)) static void
FUNC_10(struct pci_xhci_softc *VAR_24, uint64_t VAR_25,
    uint64_t VAR_26)
{
 struct xhci_trb VAR_27;
 struct pci_xhci_portregs *VAR_28;
 int VAR_29;
 uint32_t VAR_30, VAR_31;

 if (VAR_24->portregs == ((void*)0))
  return;

 VAR_29 = (VAR_25 - VAR_1) / VAR_2;
 VAR_25 = (VAR_25 - VAR_1) % VAR_2;

 FUNC_0(("pci_xhci: portregs wr offset 0x%lx, port %u: 0x%lx\r\n",
         VAR_25, VAR_29, VAR_26));

 FUNC_6(VAR_29 >= 0);

 if (VAR_29 > VAR_0) {
  FUNC_0(("pci_xhci: portregs_write port %d > ndevices\r\n",
      VAR_29));
  return;
 }

 if (FUNC_2(VAR_24, VAR_29) == ((void*)0)) {
  FUNC_0(("pci_xhci: portregs_write to unattached port %d\r\n",
       VAR_29));
 }

 VAR_28 = FUNC_3(VAR_24, VAR_29);
 switch (VAR_25) {
 case 0:

  if (VAR_26 & (VAR_17 | VAR_20)) {
   FUNC_8(VAR_24, VAR_29, VAR_26 & VAR_20);
   break;
  }

  if ((VAR_28->portsc & VAR_16) == 0) {
   FUNC_1(("pci_xhci: portregs_write to unpowered "
            "port %d\r\n", VAR_29));
   break;
  }


  VAR_30 = FUNC_4(VAR_28->portsc);
  VAR_31 = FUNC_4(VAR_26);

  VAR_28->portsc &= VAR_12 | VAR_15 |
               VAR_19 | VAR_13;

  if (FUNC_2(VAR_24, VAR_29))
   VAR_28->portsc |= VAR_4;

  VAR_28->portsc |= (VAR_26 &
                ~(VAR_9 |
                  VAR_17 |
           VAR_12 |
           VAR_15 |
           VAR_19 |
           VAR_13 |
           VAR_8 | VAR_7 | VAR_20));


  VAR_28->portsc &= ~(VAR_26 &
                 (VAR_6 |
                  VAR_11 |
                  VAR_21 |
                  VAR_10 |
                  VAR_18 |
                  VAR_14 |
                  VAR_5 |
                  VAR_3));


  if (VAR_26 & VAR_12)
   FUNC_0(("Disable port %d request\r\n", VAR_29));

  if (!(VAR_26 & VAR_8))
   break;

  FUNC_0(("Port new PLS: %d\r\n", VAR_31));
  switch (VAR_31) {
  case 0:
  case 3:
   if (VAR_30 != VAR_31) {
    VAR_28->portsc &= ~VAR_15;
    VAR_28->portsc |= FUNC_5(VAR_31) |
                 VAR_14;

    if (VAR_30 != 0 && VAR_31 == 0) {
     FUNC_9(&VAR_27, VAR_29,
         VAR_22,
         VAR_23);

     FUNC_7(VAR_24, &VAR_27, 1);
    }
   }
   break;

  default:
   FUNC_0(("Unhandled change port %d PLS %u\r\n",
            VAR_29, VAR_31));
   break;
  }
  break;
 case 4:

  VAR_28->portpmsc = VAR_26;
  break;
 case 8:

  FUNC_0(("pci_xhci attempted write to PORTLI, port %d\r\n",
          VAR_29));
  break;
 case 12:




  VAR_28->porthlpmc = VAR_26;
  break;
 }
}
