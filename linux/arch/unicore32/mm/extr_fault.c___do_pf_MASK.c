
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct task_struct {int dummy; } ;
struct mm_struct {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,struct vm_area_struct*) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static vm_fault_t FUNC_5(struct mm_struct *VAR_4, unsigned long VAR_5,
  unsigned int VAR_6, unsigned int VAR_7, struct task_struct *VAR_8)
{
 struct vm_area_struct *VAR_9;
 vm_fault_t VAR_10;

 VAR_9 = FUNC_2(VAR_4, VAR_5);
 VAR_10 = VAR_2;
 if (FUNC_4(!VAR_9))
  goto out;
 if (FUNC_4(VAR_9->vm_start > VAR_5))
  goto check_stack;





good_area:
 if (FUNC_0(VAR_6, VAR_9)) {
  VAR_10 = VAR_1;
  goto out;
 }





 VAR_10 = FUNC_3(VAR_9, VAR_5 & VAR_0, VAR_7);
 return VAR_10;

check_stack:
 if (VAR_9->vm_flags & VAR_3 && !FUNC_1(VAR_9, VAR_5))
  goto good_area;
out:
 return VAR_10;
}
