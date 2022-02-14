
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int bus; } ;
struct TYPE_2__ {int (* enable_device_hook ) (struct pci_dev*) ;} ;
struct pci_controller {TYPE_1__ controller_ops; } ;


 int VAR_0 ;
 struct pci_controller* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (struct pci_dev*) ;

int FUNC_3(struct pci_dev *VAR_1, int VAR_2)
{
 struct pci_controller *VAR_3 = FUNC_0(VAR_1->bus);

 if (VAR_3->controller_ops.enable_device_hook)
  if (!VAR_3->controller_ops.enable_device_hook(VAR_1))
   return -VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
