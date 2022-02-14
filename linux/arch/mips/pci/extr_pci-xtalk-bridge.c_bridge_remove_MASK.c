
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pci_bus {int dummy; } ;
struct bridge_controller {int domain; } ;


 struct bridge_controller* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 () ;
 struct pci_bus* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct pci_bus *VAR_1 = FUNC_6(VAR_0);
 struct bridge_controller *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->domain);
 FUNC_2();
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_5();

 return 0;
}
