
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct mm_struct {int dummy; } ;


 struct vm_area_struct* FUNC_0 (struct mm_struct*) ;

int FUNC_1(struct mm_struct *VAR_0, unsigned long VAR_1)
{
 struct vm_area_struct *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return 0;

 return (VAR_1 >= VAR_2->vm_start) && (VAR_1 < VAR_2->vm_end);
}
