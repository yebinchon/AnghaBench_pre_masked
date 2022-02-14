
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; } ;
struct pci_dev {scalar_t__ sysdata; } ;
struct TYPE_2__ {unsigned long start; scalar_t__ base; } ;
struct pci_controller {TYPE_1__ io_space; } ;
typedef unsigned long resource_size_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (struct pci_dev*,int) ;

int FUNC_1(struct pci_dev *VAR_2, int VAR_3, struct vm_area_struct *VAR_4)
{
 struct pci_controller *VAR_5 = (struct pci_controller*) VAR_2->sysdata;
 resource_size_t VAR_6 = FUNC_0(VAR_2, VAR_3);

 if (VAR_5 == 0)
  return -VAR_0;


 VAR_6 -= (unsigned long)VAR_5->io_space.base;

 VAR_4->vm_pgoff += (VAR_6 + VAR_5->io_space.start) >> VAR_1;
 return 0;
}
