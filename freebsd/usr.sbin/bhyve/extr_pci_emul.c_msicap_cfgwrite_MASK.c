
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int enabled; int addr; int msg_data; int maxmsgnum; } ;
struct pci_devinst {TYPE_1__ pi_msi; } ;


 int FUNC_0 (struct pci_devinst*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pci_devinst*,int) ;
 int FUNC_2 (struct pci_devinst*,int) ;
 int FUNC_3 (struct pci_devinst*) ;

void
FUNC_4(struct pci_devinst *VAR_3, int VAR_4, int VAR_5,
  int VAR_6, uint32_t VAR_7)
{
 uint16_t VAR_8, VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12;





 if ((VAR_5 - VAR_4) == 2 && VAR_6 == 2) {
  VAR_9 = VAR_1 | VAR_2;
  VAR_8 = FUNC_1(VAR_3, VAR_5);
  VAR_8 &= ~VAR_9;
  VAR_8 |= VAR_7 & VAR_9;
  VAR_7 = VAR_8;

  VAR_12 = FUNC_2(VAR_3, VAR_4 + 4);
  if (VAR_8 & VAR_0)
   VAR_10 = FUNC_1(VAR_3, VAR_4 + 12);
  else
   VAR_10 = FUNC_1(VAR_3, VAR_4 + 8);

  VAR_11 = VAR_8 & VAR_1;
  VAR_3->pi_msi.enabled = VAR_8 & VAR_2 ? 1 : 0;
  if (VAR_3->pi_msi.enabled) {
   VAR_3->pi_msi.addr = VAR_12;
   VAR_3->pi_msi.msg_data = VAR_10;
   VAR_3->pi_msi.maxmsgnum = 1 << (VAR_11 >> 4);
  } else {
   VAR_3->pi_msi.maxmsgnum = 0;
  }
  FUNC_3(VAR_3);
 }

 FUNC_0(VAR_3, VAR_5, VAR_7, VAR_6);
}
