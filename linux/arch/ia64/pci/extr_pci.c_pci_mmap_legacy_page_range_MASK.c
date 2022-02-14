
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_page_prot; } ;
struct pci_bus {int dummy; } ;
typedef int pgprot_t ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct pci_bus*) ;
 int VAR_4 ;
 int FUNC_3 (int *,unsigned long,unsigned long,int ) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 int FUNC_5 (unsigned long,unsigned long) ;

int
FUNC_6(struct pci_bus *VAR_5, struct vm_area_struct *VAR_6,
      enum pci_mmap_state VAR_7)
{
 unsigned long VAR_8 = VAR_6->vm_end - VAR_6->vm_start;
 pgprot_t VAR_9;
 char *VAR_10;


 if (VAR_7 != VAR_4)
  return -VAR_2;





 if (!FUNC_5(VAR_6->vm_pgoff, VAR_8))
  return -VAR_1;
 VAR_9 = FUNC_3(((void*)0), VAR_6->vm_pgoff, VAR_8,
        VAR_6->vm_page_prot);

 VAR_10 = FUNC_2(VAR_5);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_6->vm_pgoff += (unsigned long)VAR_10 >> VAR_3;
 VAR_6->vm_page_prot = VAR_9;

 if (FUNC_4(VAR_6, VAR_6->vm_start, VAR_6->vm_pgoff,
       VAR_8, VAR_6->vm_page_prot))
  return -VAR_0;

 return 0;
}
