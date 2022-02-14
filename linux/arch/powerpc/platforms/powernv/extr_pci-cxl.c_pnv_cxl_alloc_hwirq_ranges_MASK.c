
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {scalar_t__ msi_base; int msi_bmp; } ;
struct pci_dev {int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;
struct cxl_irq_ranges {int* range; scalar_t__* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cxl_irq_ranges*,int ,int) ;
 int FUNC_1 (int *,int) ;
 struct pci_controller* FUNC_2 (int ) ;
 int FUNC_3 (struct cxl_irq_ranges*,struct pci_dev*) ;
 int FUNC_4 (char*,int,scalar_t__,int) ;

int FUNC_5(struct cxl_irq_ranges *VAR_2,
          struct pci_dev *VAR_3, int VAR_4)
{
 struct pci_controller *VAR_5 = FUNC_2(VAR_3->bus);
 struct pnv_phb *VAR_6 = VAR_5->private_data;
 int VAR_7, VAR_8, VAR_9;

 FUNC_0(VAR_2, 0, sizeof(struct cxl_irq_ranges));


 for (VAR_7 = 1; VAR_7 < VAR_0 && VAR_4; VAR_7++) {
  VAR_9 = VAR_4;
  while (VAR_9) {
   VAR_8 = FUNC_1(&VAR_6->msi_bmp, VAR_9);
   if (VAR_8 >= 0)
    break;
   VAR_9 /= 2;
  }
  if (!VAR_9)
   goto fail;

  VAR_2->offset[VAR_7] = VAR_6->msi_base + VAR_8;
  VAR_2->range[VAR_7] = VAR_9;
  FUNC_4("cxl alloc irq range 0x%x: offset: 0x%lx  limit: %li\n",
    VAR_7, VAR_2->offset[VAR_7], VAR_2->range[VAR_7]);
  VAR_4 -= VAR_9;
 }
 if (VAR_4)
  goto fail;

 return 0;
fail:
 FUNC_3(VAR_2, VAR_3);
 return -VAR_1;
}
