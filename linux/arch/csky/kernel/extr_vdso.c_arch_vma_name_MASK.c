
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {long vm_start; TYPE_2__* vm_mm; } ;
struct TYPE_3__ {scalar_t__ vdso; } ;
struct TYPE_4__ {TYPE_1__ context; } ;



const char *FUNC_0(struct vm_area_struct *VAR_0)
{
 if (VAR_0->vm_mm == ((void*)0))
  return ((void*)0);

 if (VAR_0->vm_start == (long)VAR_0->vm_mm->context.vdso)
  return "[vdso]";
 else
  return ((void*)0);
}
