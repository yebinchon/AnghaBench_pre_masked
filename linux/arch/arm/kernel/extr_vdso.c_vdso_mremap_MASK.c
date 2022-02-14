
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_special_mapping {int dummy; } ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; } ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_4__ {unsigned long vdso; } ;
struct TYPE_5__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct vm_special_mapping *VAR_4,
  struct vm_area_struct *VAR_5)
{
 unsigned long VAR_6 = VAR_5->vm_end - VAR_5->vm_start;
 unsigned long VAR_7;


 VAR_7 = (VAR_3 - 1) << VAR_1;

 if (VAR_7 != VAR_6)
  return -VAR_0;

 VAR_2->mm->context.vdso = VAR_5->vm_start;

 return 0;
}
