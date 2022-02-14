
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; } ;
typedef int resource_size_t ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,int ,unsigned long*,int *) ;
 int FUNC_3 (int ,unsigned long,int *,int) ;

int FUNC_4(struct vm_area_struct *VAR_2)
{
 resource_size_t VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5 = VAR_2->vm_end - VAR_2->vm_start;
 pgprot_t VAR_6;

 if (VAR_2->vm_flags & VAR_1) {




  if (FUNC_2(VAR_2, VAR_2->vm_start, 0, &VAR_4, &VAR_3)) {
   FUNC_0(1);
   return -VAR_0;
  }
  VAR_6 = FUNC_1(VAR_4);
  return FUNC_3(VAR_3, VAR_5, &VAR_6, 1);
 }

 return 0;
}
