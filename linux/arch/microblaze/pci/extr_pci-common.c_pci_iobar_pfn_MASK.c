
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; } ;
struct pci_dev {int bus; } ;
struct pci_controller {int io_base_phys; scalar_t__ io_base_virt; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct pci_controller* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int) ;

int FUNC_2(struct pci_dev *VAR_3, int VAR_4, struct vm_area_struct *VAR_5)
{
 struct pci_controller *VAR_6 = FUNC_0(VAR_3->bus);
 resource_size_t VAR_7 = FUNC_1(VAR_3, VAR_4);

 if (!VAR_6)
  return -VAR_0;


 VAR_7 -= (unsigned long)VAR_6->io_base_virt - VAR_2;

 VAR_5->vm_pgoff += (VAR_7 + VAR_6->io_base_phys) >> VAR_1;
 return 0;
}
