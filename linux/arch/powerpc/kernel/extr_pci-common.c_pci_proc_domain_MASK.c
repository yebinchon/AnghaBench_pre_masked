
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {scalar_t__ global_number; } ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_controller* FUNC_0 (struct pci_bus*) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct pci_bus *VAR_2)
{
 struct pci_controller *VAR_3 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_1))
  return 0;
 if (FUNC_1(VAR_0))
  return VAR_3->global_number != 0;
 return 1;
}
