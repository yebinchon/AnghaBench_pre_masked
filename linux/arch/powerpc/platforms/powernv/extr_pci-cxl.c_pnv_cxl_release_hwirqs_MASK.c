
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {scalar_t__ msi_base; int msi_bmp; } ;
struct pci_dev {int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 int FUNC_0 (int *,scalar_t__,int) ;
 struct pci_controller* FUNC_1 (int ) ;

void FUNC_2(struct pci_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct pci_controller *VAR_3 = FUNC_1(VAR_0->bus);
 struct pnv_phb *VAR_4 = VAR_3->private_data;

 FUNC_0(&VAR_4->msi_bmp, VAR_1 - VAR_4->msi_base, VAR_2);
}
