
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_controller {TYPE_1__* io_space; } ;
struct pci_bus {struct pci_controller* sysdata; } ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ start; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct pci_bus *VAR_1, loff_t VAR_2, u32 *VAR_3, size_t VAR_4)
{
 struct pci_controller *VAR_5 = VAR_1->sysdata;

 VAR_2 += VAR_5->io_space->start;

 switch(VAR_4) {
 case 1:
  *((u8 *)VAR_3) = FUNC_0(VAR_2);
  return 1;
 case 2:
  if (VAR_2 & 1)
   return -VAR_0;
  *((u16 *)VAR_3) = FUNC_2(VAR_2);
  return 2;
 case 4:
  if (VAR_2 & 3)
   return -VAR_0;
  *((u32 *)VAR_3) = FUNC_1(VAR_2);
  return 4;
 }
 return -VAR_0;
}
