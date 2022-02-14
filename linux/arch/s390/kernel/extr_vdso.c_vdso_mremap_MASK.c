
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_special_mapping {int dummy; } ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; TYPE_2__* vm_mm; } ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_4__ {unsigned long vdso_base; scalar_t__ compat_mm; } ;
struct TYPE_5__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_3__* VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

__attribute__((used)) static int FUNC_1(const struct vm_special_mapping *VAR_6,
         struct vm_area_struct *VAR_7)
{
 unsigned long VAR_8;

 VAR_8 = VAR_5;





 if ((VAR_8 << VAR_2) != VAR_7->vm_end - VAR_7->vm_start)
  return -VAR_1;

 if (FUNC_0(VAR_3->mm != VAR_7->vm_mm))
  return -VAR_0;

 VAR_3->mm->context.vdso_base = VAR_7->vm_start;
 return 0;
}
