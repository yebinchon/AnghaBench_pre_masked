
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int bus; } ;
struct TYPE_2__ {int (* setup_msi_irqs ) (struct pci_dev*,int,int) ;int teardown_msi_irqs; } ;
struct pci_controller {TYPE_1__ controller_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_controller* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;

int FUNC_3(struct pci_dev *VAR_2, int VAR_3, int VAR_4)
{
 struct pci_controller *VAR_5 = FUNC_0(VAR_2->bus);

 if (!VAR_5->controller_ops.setup_msi_irqs ||
     !VAR_5->controller_ops.teardown_msi_irqs) {
  FUNC_1("msi: Platform doesn't provide MSI callbacks.\n");
  return -VAR_0;
 }


 if (VAR_4 == VAR_1 && VAR_3 > 1)
  return 1;

 return VAR_5->controller_ops.setup_msi_irqs(VAR_2, VAR_3, VAR_4);
}
