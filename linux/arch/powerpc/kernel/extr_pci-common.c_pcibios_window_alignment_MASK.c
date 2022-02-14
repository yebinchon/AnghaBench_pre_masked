
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* window_alignment ) (struct pci_bus*,unsigned long) ;} ;
struct pci_controller {TYPE_1__ controller_ops; } ;
struct pci_bus {int dummy; } ;
typedef int resource_size_t ;


 struct pci_controller* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*,unsigned long) ;

resource_size_t FUNC_2(struct pci_bus *VAR_0,
      unsigned long VAR_1)
{
 struct pci_controller *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->controller_ops.window_alignment)
  return VAR_2->controller_ops.window_alignment(VAR_0, VAR_1);






 return 1;
}
