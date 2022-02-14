
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,int ,unsigned long*,int*) ;
 int FUNC_2 (int,unsigned long) ;

void FUNC_3(struct vm_area_struct *VAR_2, unsigned long VAR_3,
   unsigned long VAR_4)
{
 resource_size_t VAR_5;
 unsigned long VAR_6;

 if (VAR_2 && !(VAR_2->vm_flags & VAR_1))
  return;


 VAR_5 = (resource_size_t)VAR_3 << VAR_0;
 if (!VAR_5 && !VAR_4) {
  if (FUNC_1(VAR_2, VAR_2->vm_start, 0, &VAR_6, &VAR_5)) {
   FUNC_0(1);
   return;
  }

  VAR_4 = VAR_2->vm_end - VAR_2->vm_start;
 }
 FUNC_2(VAR_5, VAR_4);
 if (VAR_2)
  VAR_2->vm_flags &= ~VAR_1;
}
