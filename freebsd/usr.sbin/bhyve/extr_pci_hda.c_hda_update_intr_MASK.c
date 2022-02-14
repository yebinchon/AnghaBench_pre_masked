
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_devinst {int dummy; } ;
struct hda_softc {int lintr; struct pci_devinst* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct hda_softc*,int) ;
 int FUNC_2 (struct hda_softc*,int ,int) ;
 int FUNC_3 (struct pci_devinst*) ;
 int FUNC_4 (struct pci_devinst*) ;

__attribute__((used)) static void
FUNC_5(struct hda_softc *VAR_13)
{
 struct pci_devinst *VAR_14 = VAR_13->pci_dev;
 uint32_t VAR_15 = FUNC_1(VAR_13, VAR_0);
 uint32_t VAR_16 = 0;
 uint32_t VAR_17 = 0;
 uint32_t VAR_18 = 0;
 uint32_t VAR_19 = 0;
 uint32_t VAR_20 = 0;
 uint32_t VAR_21 = 0;
 int VAR_22;


 VAR_18 = FUNC_1(VAR_13, VAR_5);
 if (VAR_18 & (VAR_6 | VAR_7))
  VAR_16 |= VAR_3;

 VAR_19 = FUNC_1(VAR_13, VAR_11);
 VAR_20 = FUNC_1(VAR_13, VAR_10);
 if (VAR_20 & VAR_19)
  VAR_16 |= VAR_3;


 for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {
  VAR_21 = FUNC_0(VAR_22);
  VAR_17 = FUNC_1(VAR_13, VAR_21 + VAR_8);
  if (VAR_17 & VAR_9)
   VAR_16 |= (1 << VAR_22);
 }


 if (VAR_16)
  VAR_16 |= VAR_4;

 FUNC_2(VAR_13, VAR_2, VAR_16);

 if ((VAR_15 & VAR_1) && ((VAR_16 & ~VAR_4) & VAR_15)) {

  if (!VAR_13->lintr) {
   FUNC_3(VAR_14);
   VAR_13->lintr = 1;
  }
 } else {
  if (VAR_13->lintr) {
   FUNC_4(VAR_14);
   VAR_13->lintr = 0;
  }
 }
}
