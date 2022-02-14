
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; int vm_pgoff; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 VAR_2->vm_page_prot = FUNC_1(VAR_2->vm_page_prot);

 if (FUNC_0(VAR_2, VAR_2->vm_start, VAR_2->vm_pgoff,
          VAR_2->vm_end - VAR_2->vm_start,
          VAR_2->vm_page_prot)) {
  FUNC_2("Hostlink buffer mmap ERROR\n");
  return -VAR_0;
 }
 return 0;
}
