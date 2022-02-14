
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; int vm_pgoff; } ;
struct pci_dev {int dummy; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int FUNC_0 (struct pci_dev*,struct vm_area_struct*,int) ;
 int FUNC_1 (struct pci_dev*,struct vm_area_struct*,int) ;
 int FUNC_2 (struct vm_area_struct*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct pci_dev *VAR_0, int VAR_1,
   struct vm_area_struct *VAR_2,
   enum pci_mmap_state VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(VAR_0, VAR_2, VAR_3);

 VAR_2->vm_page_prot = FUNC_3(VAR_2->vm_page_prot);
 VAR_5 = FUNC_2(VAR_2, VAR_2->vm_start,
     VAR_2->vm_pgoff,
     VAR_2->vm_end - VAR_2->vm_start,
     VAR_2->vm_page_prot);
 if (VAR_5)
  return VAR_5;

 return 0;
}
