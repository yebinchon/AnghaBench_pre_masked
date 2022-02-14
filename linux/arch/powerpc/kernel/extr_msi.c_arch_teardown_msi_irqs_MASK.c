
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int bus; } ;
struct TYPE_2__ {int (* teardown_msi_irqs ) (struct pci_dev*) ;} ;
struct pci_controller {TYPE_1__ controller_ops; } ;


 struct pci_controller* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;

void FUNC_2(struct pci_dev *VAR_0)
{
 struct pci_controller *VAR_1 = FUNC_0(VAR_0->bus);





 if (VAR_1->controller_ops.teardown_msi_irqs)
  VAR_1->controller_ops.teardown_msi_irqs(VAR_0);
}
