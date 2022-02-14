
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_pgoff; unsigned long vm_end; unsigned long vm_start; } ;
struct TYPE_6__ {unsigned long start; } ;
struct pci_pbm_info {TYPE_3__ mem_space; TYPE_3__ io_space; } ;
struct TYPE_4__ {struct pci_pbm_info* host_controller; } ;
struct TYPE_5__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_3, struct vm_area_struct *VAR_4,
          enum pci_mmap_state VAR_5)
{
 struct pci_pbm_info *VAR_6 = VAR_3->dev.archdata.host_controller;
 unsigned long VAR_7, VAR_8, VAR_9;

 if (VAR_5 == VAR_2) {
  VAR_7 = FUNC_0(&VAR_6->io_space);
 } else {
  VAR_7 = FUNC_0(&VAR_6->mem_space);
 }


 VAR_8 = VAR_4->vm_pgoff << VAR_1;
 VAR_9 = VAR_4->vm_end - VAR_4->vm_start;

 if (VAR_8 >= VAR_7 ||
     (VAR_8 + VAR_9) > VAR_7)
  return -VAR_0;

 if (VAR_5 == VAR_2) {
  VAR_4->vm_pgoff = (VAR_6->io_space.start +
     VAR_8) >> VAR_1;
 } else {
  VAR_4->vm_pgoff = (VAR_6->mem_space.start +
     VAR_8) >> VAR_1;
 }

 return 0;
}
