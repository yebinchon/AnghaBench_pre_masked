
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct pci_controller {int dummy; } ;
struct pci_bus {TYPE_2__* legacy_io; TYPE_1__* legacy_mem; struct pci_controller* sysdata; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;
struct TYPE_4__ {unsigned long size; } ;
struct TYPE_3__ {unsigned long size; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_controller*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_1 (struct pci_controller*,int) ;
 int FUNC_2 (struct pci_controller*,struct vm_area_struct*,int,int) ;
 int VAR_1 ;

int FUNC_3(struct pci_bus *VAR_2, struct vm_area_struct *VAR_3,
          enum pci_mmap_state VAR_4)
{
 struct pci_controller *VAR_5 = VAR_2->sysdata;
 int VAR_6 = FUNC_1(VAR_5, VAR_4);
 unsigned long VAR_7;

 VAR_7 = (VAR_4 == VAR_1) ? VAR_2->legacy_mem->size :
       VAR_2->legacy_io->size;
 if (!FUNC_0(VAR_5, VAR_3, VAR_7, VAR_6))
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_3, VAR_4, VAR_6);
}
