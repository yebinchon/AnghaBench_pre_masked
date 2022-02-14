
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; scalar_t__ vm_end; struct file* vm_file; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static inline bool
FUNC_1(struct vm_area_struct *VAR_0, struct file *VAR_1,
       unsigned long VAR_2, unsigned long VAR_3)
{
 if (VAR_0->vm_file != VAR_1)
  return 0;

 return VAR_0->vm_start == VAR_2 &&
        (VAR_0->vm_end - VAR_0->vm_start) == FUNC_0(VAR_3);
}
