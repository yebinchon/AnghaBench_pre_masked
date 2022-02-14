
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {int msi_base; int msi_bmp; } ;
struct pci_dev {int dev; int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int) ;
 struct pci_controller* FUNC_2 (int ) ;

int FUNC_3(struct pci_dev *VAR_1, int VAR_2)
{
 struct pci_controller *VAR_3 = FUNC_2(VAR_1->bus);
 struct pnv_phb *VAR_4 = VAR_3->private_data;
 int VAR_5 = FUNC_1(&VAR_4->msi_bmp, VAR_2);

 if (VAR_5 < 0) {
  FUNC_0(&VAR_1->dev, "Failed to find a free MSI\n");
  return -VAR_0;
 }

 return VAR_4->msi_base + VAR_5;
}
