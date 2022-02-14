
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_count; } ;
struct pnv_phb {TYPE_1__ msi_bmp; } ;
struct pci_dev {int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 struct pci_controller* FUNC_0 (int ) ;

int FUNC_1(struct pci_dev *VAR_0)
{
 struct pci_controller *VAR_1 = FUNC_0(VAR_0->bus);
 struct pnv_phb *VAR_2 = VAR_1->private_data;

 return VAR_2->msi_bmp.irq_count;
}
