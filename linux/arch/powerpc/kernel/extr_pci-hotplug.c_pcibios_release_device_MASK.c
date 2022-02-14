
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int flags; } ;
struct pci_dev {int bus; } ;
struct TYPE_2__ {int (* release_device ) (struct pci_dev*) ;} ;
struct pci_controller {TYPE_1__ controller_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dn*) ;
 struct pci_controller* FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*,char*) ;
 struct pci_dn* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

void FUNC_6(struct pci_dev *VAR_1)
{
 struct pci_controller *VAR_2 = FUNC_2(VAR_1->bus);
 struct pci_dn *VAR_3 = FUNC_4(VAR_1);

 FUNC_0(VAR_1);

 if (VAR_2->controller_ops.release_device)
  VAR_2->controller_ops.release_device(VAR_1);


 if (VAR_3 && (VAR_3->flags & VAR_0)) {
  FUNC_3(VAR_1, "freeing dead pdn\n");
  FUNC_1(VAR_3);
 }
}
