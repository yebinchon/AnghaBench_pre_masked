
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct pci_devinst {TYPE_1__* pi_bar; } ;
struct TYPE_2__ {int type; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_devinst*,int ) ;
 int FUNC_2 (struct pci_devinst*) ;
 int FUNC_3 (struct pci_devinst*,int) ;
 int FUNC_4 (struct pci_devinst*,int) ;

void
FUNC_5(struct pci_devinst *VAR_4, uint16_t VAR_5)
{
 int VAR_6;
 uint16_t VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_2);
 VAR_7 = VAR_5 ^ VAR_8;





 for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++) {
  switch (VAR_4->pi_bar[VAR_6].type) {
   case 128:
   case 129:
    break;
   case 132:

    if (VAR_7 & VAR_1) {
     if (VAR_8 & VAR_1)
      FUNC_3(VAR_4, VAR_6);
     else
      FUNC_4(VAR_4, VAR_6);
    }
    break;
   case 131:
   case 130:

    if (VAR_7 & VAR_0) {
     if (VAR_8 & VAR_0)
      FUNC_3(VAR_4, VAR_6);
     else
      FUNC_4(VAR_4, VAR_6);
    }
    break;
   default:
    FUNC_0(0);
  }
 }





 FUNC_2(VAR_4);
}
