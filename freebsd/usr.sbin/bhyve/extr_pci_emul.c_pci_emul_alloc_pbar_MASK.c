
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct pci_devinst {TYPE_1__* pi_bar; } ;
typedef enum pcibar_type { ____Placeholder_pcibar_type } pcibar_type ;
struct TYPE_2__ {int type; int addr; int size; } ;





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
 int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int*,int,int,int*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct pci_devinst*,int ) ;
 int FUNC_5 (struct pci_devinst*,int ,int) ;
 int FUNC_6 (struct pci_devinst*,int ,int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct pci_devinst*,int) ;

int
FUNC_9(struct pci_devinst *VAR_18, int VAR_19, uint64_t VAR_20,
      enum pcibar_type VAR_21, uint64_t VAR_22)
{
 int VAR_23;
 uint64_t *VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
 uint16_t VAR_30, VAR_31;

 FUNC_1(VAR_19 >= 0 && VAR_19 <= VAR_11);

 if ((VAR_22 & (VAR_22 - 1)) != 0)
  VAR_22 = 1UL << FUNC_2(VAR_22);


 if (VAR_21 == 131) {
  if (VAR_22 < 4)
   VAR_22 = 4;
 } else {
  if (VAR_22 < 16)
   VAR_22 = 16;
 }

 switch (VAR_21) {
 case 128:
  VAR_24 = ((void*)0);
  VAR_26 = VAR_27 = VAR_28 = VAR_31 = 0;
  break;
 case 131:
  VAR_24 = &VAR_15;
  VAR_25 = VAR_12;
  VAR_27 = VAR_1;
  VAR_28 = VAR_2;
  VAR_31 = VAR_9;
  break;
 case 129:







  if (VAR_22 > 32 * 1024 * 1024) {



   if (VAR_22 == 0x100000000UL)
    VAR_24 = &VAR_20;
   else
    VAR_24 = &VAR_17;
   VAR_25 = VAR_14;
   VAR_27 = VAR_5;
   VAR_28 = VAR_7 | VAR_4 |
     VAR_6;
  } else {
   VAR_24 = &VAR_16;
   VAR_25 = VAR_13;
   VAR_27 = VAR_5;
   VAR_28 = VAR_7 | VAR_4;
  }
  VAR_31 = VAR_8;
  break;
 case 130:
  VAR_24 = &VAR_16;
  VAR_25 = VAR_13;
  VAR_27 = VAR_5;
  VAR_28 = VAR_7 | VAR_3;
  VAR_31 = VAR_8;
  break;
 default:
  FUNC_7("pci_emul_alloc_base: invalid bar type %d\n", VAR_21);
  FUNC_1(0);
 }

 if (VAR_24 != ((void*)0)) {
  VAR_23 = FUNC_3(VAR_24, VAR_25, VAR_22, &VAR_26);
  if (VAR_23 != 0)
   return (VAR_23);
 }

 VAR_18->pi_bar[VAR_19].type = VAR_21;
 VAR_18->pi_bar[VAR_19].addr = VAR_26;
 VAR_18->pi_bar[VAR_19].size = VAR_22;


 VAR_29 = (VAR_26 & VAR_27) | VAR_28;
 FUNC_6(VAR_18, FUNC_0(VAR_19), VAR_29);

 if (VAR_21 == 129) {
  FUNC_1(VAR_19 + 1 <= VAR_11);
  VAR_18->pi_bar[VAR_19 + 1].type = VAR_0;
  FUNC_6(VAR_18, FUNC_0(VAR_19 + 1), VAR_29 >> 32);
 }

 VAR_30 = FUNC_4(VAR_18, VAR_10);
 if ((VAR_30 & VAR_31) != VAR_31)
  FUNC_5(VAR_18, VAR_10, VAR_30 | VAR_31);
 FUNC_8(VAR_18, VAR_19);

 return (0);
}
