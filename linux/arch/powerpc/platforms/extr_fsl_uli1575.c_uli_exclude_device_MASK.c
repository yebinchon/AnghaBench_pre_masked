
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct pci_controller {scalar_t__ first_busno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct pci_controller *VAR_2,
   u_char VAR_3, u_char VAR_4)
{
 if (VAR_3 == (VAR_2->first_busno + 2)) {

  if ((FUNC_1(VAR_4) == 29) && (FUNC_0(VAR_4) == 1))
   return VAR_0;


  if ((FUNC_1(VAR_4) == 29) && (FUNC_0(VAR_4) == 2))
   return VAR_0;
 }

 return VAR_1;
}
