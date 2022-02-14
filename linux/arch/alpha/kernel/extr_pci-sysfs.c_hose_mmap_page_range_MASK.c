
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct pci_controller {unsigned long sparse_mem_base; unsigned long dense_mem_base; unsigned long sparse_io_base; unsigned long dense_io_base; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,scalar_t__,unsigned long,scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pci_controller *VAR_2,
    struct vm_area_struct *VAR_3,
    enum pci_mmap_state VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_4 == VAR_1)
  VAR_6 = VAR_5 ? VAR_2->sparse_mem_base : VAR_2->dense_mem_base;
 else
  VAR_6 = VAR_5 ? VAR_2->sparse_io_base : VAR_2->dense_io_base;

 VAR_3->vm_pgoff += VAR_6 >> VAR_0;

 return FUNC_0(VAR_3, VAR_3->vm_start, VAR_3->vm_pgoff,
      VAR_3->vm_end - VAR_3->vm_start,
      VAR_3->vm_page_prot);
}
