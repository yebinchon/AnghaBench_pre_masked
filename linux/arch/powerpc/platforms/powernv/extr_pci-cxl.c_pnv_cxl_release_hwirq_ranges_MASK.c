
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {int msi_base; int msi_bmp; } ;
struct pci_dev {int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;
struct cxl_irq_ranges {int* offset; int * range; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 struct pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int ) ;

void FUNC_3(struct cxl_irq_ranges *VAR_1,
      struct pci_dev *VAR_2)
{
 struct pci_controller *VAR_3 = FUNC_1(VAR_2->bus);
 struct pnv_phb *VAR_4 = VAR_3->private_data;
 int VAR_5, VAR_6;

 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_1->range[VAR_5])
   continue;
  FUNC_2("cxl release irq range 0x%x: offset: 0x%lx  limit: %ld\n",
    VAR_5, VAR_1->offset[VAR_5],
    VAR_1->range[VAR_5]);
  VAR_6 = VAR_1->offset[VAR_5] - VAR_4->msi_base;
  FUNC_0(&VAR_4->msi_bmp, VAR_6,
           VAR_1->range[VAR_5]);
 }
}
