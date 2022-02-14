
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int number; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_2, int VAR_3)
{
 switch (VAR_2->number) {
 case 129:
  return FUNC_0(VAR_3) == 0;
 case 128:
  if (FUNC_0(VAR_3) == 0)
   return FUNC_1(VAR_1)
     & VAR_0;

 default:
  return 0;
 }
}
