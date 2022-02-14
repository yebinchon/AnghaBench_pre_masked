
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;
struct slotinfo {TYPE_1__* si_funcs; } ;
struct pci_devinst {TYPE_2__* pi_bar; struct pci_devemu* pi_d; } ;
struct pci_devemu {int (* pe_cfgread ) (struct vmctx*,int,struct pci_devinst*,int,int,int*) ;scalar_t__ (* pe_cfgwrite ) (struct vmctx*,int,struct pci_devinst*,int,int,int) ;} ;
struct businfo {struct slotinfo* slotinfo; } ;
struct TYPE_4__ {int size; int type; int addr; } ;
struct TYPE_3__ {struct pci_devinst* fi_devi; } ;


 int FUNC_0 (struct pci_devinst*,int,int) ;
 int FUNC_1 (struct pci_devinst*,int,int,int) ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 struct businfo** VAR_9 ;
 int FUNC_4 (struct pci_devinst*,int,int,int) ;
 int FUNC_5 (struct pci_devinst*,int,int,int) ;
 int FUNC_6 (int,int,int,int,int*) ;
 scalar_t__ FUNC_7 (struct pci_devinst*,int) ;
 int FUNC_8 (struct pci_devinst*,int,int) ;
 int FUNC_9 (struct vmctx*,int,struct pci_devinst*,int,int,int*) ;
 scalar_t__ FUNC_10 (struct vmctx*,int,struct pci_devinst*,int,int,int) ;
 int FUNC_11 (struct pci_devinst*,int,int,int const) ;

__attribute__((used)) static void
FUNC_12(struct vmctx *VAR_10, int VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15,
    int VAR_16, int VAR_17, uint32_t *VAR_18)
{
 struct businfo *VAR_19;
 struct slotinfo *VAR_20;
 struct pci_devinst *VAR_21;
 struct pci_devemu *VAR_22;
 int VAR_23, VAR_24;
 uint64_t VAR_25, VAR_26, VAR_27;

 if ((VAR_19 = VAR_9[VAR_13]) != ((void*)0)) {
  VAR_20 = &VAR_19->slotinfo[VAR_14];
  VAR_21 = VAR_20->si_funcs[VAR_15].fi_devi;
 } else
  VAR_21 = ((void*)0);





 if (VAR_21 == ((void*)0) || (VAR_17 != 1 && VAR_17 != 2 && VAR_17 != 4) ||
     (VAR_16 & (VAR_17 - 1)) != 0) {
  if (VAR_12)
   *VAR_18 = 0xffffffff;
  return;
 }





 if (VAR_16 >= VAR_8 + 1) {
  if (VAR_12) {
   *VAR_18 = 0xffffffff;






   if (VAR_16 <= VAR_8 + 4)
    *VAR_18 = 0x00000000;
  }
  return;
 }

 VAR_22 = VAR_21->pi_d;




 if (VAR_12) {

  if (VAR_22->pe_cfgread != ((void*)0)) {
   VAR_24 = VAR_22->pe_cfgread(VAR_10, VAR_11, VAR_21, VAR_16, VAR_17,
       VAR_18);
  } else {
   VAR_24 = 1;
  }

  if (VAR_24)
   *VAR_18 = FUNC_0(VAR_21, VAR_16, VAR_17);

  FUNC_6(VAR_13, VAR_14, VAR_16, VAR_17, VAR_18);
 } else {

  if (VAR_22->pe_cfgwrite != ((void*)0) &&
      (*VAR_22->pe_cfgwrite)(VAR_10, VAR_11, VAR_21, VAR_16, VAR_17, *VAR_18) == 0)
   return;




  if (VAR_16 >= FUNC_2(0) && VAR_16 < FUNC_2(VAR_7 + 1)) {




   if (VAR_17 != 4 || (VAR_16 & 0x3) != 0)
    return;
   VAR_23 = (VAR_16 - FUNC_2(0)) / 4;
   VAR_27 = ~(VAR_21->pi_bar[VAR_23].size - 1);
   switch (VAR_21->pi_bar[VAR_23].type) {
   case 128:
    VAR_21->pi_bar[VAR_23].addr = VAR_26 = 0;
    break;
   case 132:
    VAR_25 = *VAR_18 & VAR_27;
    VAR_25 &= 0xffff;
    VAR_26 = VAR_25 | VAR_0;



    if (VAR_25 != VAR_21->pi_bar[VAR_23].addr) {
     FUNC_11(VAR_21, VAR_25, VAR_23,
          132);
    }
    break;
   case 131:
    VAR_25 = VAR_26 = *VAR_18 & VAR_27;
    VAR_26 |= VAR_4 | VAR_1;
    if (VAR_25 != VAR_21->pi_bar[VAR_23].addr) {
     FUNC_11(VAR_21, VAR_25, VAR_23,
          131);
    }
    break;
   case 130:
    VAR_25 = VAR_26 = *VAR_18 & VAR_27;
    VAR_26 |= VAR_4 | VAR_2 |
           VAR_3;
    if (VAR_25 != (uint32_t)VAR_21->pi_bar[VAR_23].addr) {
     FUNC_11(VAR_21, VAR_25, VAR_23,
          130);
    }
    break;
   case 129:
    VAR_27 = ~(VAR_21->pi_bar[VAR_23 - 1].size - 1);
    VAR_25 = ((uint64_t)*VAR_18 << 32) & VAR_27;
    VAR_26 = VAR_25 >> 32;
    if (VAR_26 != VAR_21->pi_bar[VAR_23 - 1].addr >> 32) {
     FUNC_11(VAR_21, VAR_25, VAR_23 - 1,
          129);
    }
    break;
   default:
    FUNC_3(0);
   }
   FUNC_8(VAR_21, VAR_16, VAR_26);

  } else if (FUNC_7(VAR_21, VAR_16)) {
   FUNC_4(VAR_21, VAR_16, VAR_17, *VAR_18);
  } else if (VAR_16 >= VAR_5 && VAR_16 < VAR_6) {
   FUNC_5(VAR_21, VAR_16, *VAR_18, VAR_17);
  } else {
   FUNC_1(VAR_21, VAR_16, *VAR_18, VAR_17);
  }
 }
}
