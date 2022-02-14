
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_pgoff; int vm_end; int vm_start; int vm_flags; int vm_page_prot; } ;
struct resource {int flags; unsigned long start; int end; } ;
struct pci_controller {int isa_mem_size; scalar_t__ io_base_phys; struct resource io_resource; scalar_t__ io_base_virt; scalar_t__ isa_mem_phys; } ;
struct pci_bus {int number; } ;
typedef int resource_size_t ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;
struct TYPE_2__ {int pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct pci_controller* FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned long long,...) ;
 int FUNC_4 (struct vm_area_struct*,int,int,int,int ) ;
 int FUNC_5 (struct vm_area_struct*) ;

int FUNC_6(struct pci_bus *VAR_7,
          struct vm_area_struct *VAR_8,
          enum pci_mmap_state VAR_9)
{
 struct pci_controller *VAR_10 = FUNC_0(VAR_7);
 resource_size_t VAR_11 =
  ((resource_size_t)VAR_8->vm_pgoff) << VAR_2;
 resource_size_t VAR_12 = VAR_8->vm_end - VAR_8->vm_start;
 struct resource *VAR_13;

 FUNC_3("pci_mmap_legacy_page_range(%04x:%02x, %s @%llx..%llx)\n",
   FUNC_1(VAR_7), VAR_7->number,
   VAR_9 == VAR_6 ? "MEM" : "IO",
   (unsigned long long)VAR_11,
   (unsigned long long)(VAR_11 + VAR_12 - 1));

 if (VAR_9 == VAR_6) {







  if ((VAR_11 + VAR_12) > VAR_10->isa_mem_size) {






   if (VAR_8->vm_flags & VAR_3)
    return FUNC_5(VAR_8);
   return 0;
  }
  VAR_11 += VAR_10->isa_mem_phys;
 } else {
  unsigned long VAR_14 = (unsigned long)VAR_10->io_base_virt -
        VAR_4;
  unsigned long VAR_15 = VAR_11 + VAR_14;
  VAR_13 = &VAR_10->io_resource;
  if (!(VAR_13->flags & VAR_1))
   return -VAR_0;
  if (VAR_15 < VAR_13->start || (VAR_15 + VAR_12) > VAR_13->end)
   return -VAR_0;
  VAR_11 += VAR_10->io_base_phys;
 }
 FUNC_3(" -> mapping phys %llx\n", (unsigned long long)VAR_11);

 VAR_8->vm_pgoff = VAR_11 >> VAR_2;
 VAR_8->vm_page_prot = FUNC_2(VAR_8->vm_page_prot);
 return FUNC_4(VAR_8, VAR_8->vm_start, VAR_8->vm_pgoff,
          VAR_8->vm_end - VAR_8->vm_start,
          VAR_8->vm_page_prot);
}
