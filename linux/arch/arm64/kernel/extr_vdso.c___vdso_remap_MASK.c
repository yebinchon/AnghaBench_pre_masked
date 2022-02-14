
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_special_mapping {int dummy; } ;
struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; } ;
typedef enum arch_vdso_type { ____Placeholder_arch_vdso_type } arch_vdso_type ;
struct TYPE_8__ {TYPE_2__* mm; } ;
struct TYPE_7__ {unsigned long vdso_code_end; unsigned long vdso_code_start; } ;
struct TYPE_5__ {void* vdso; } ;
struct TYPE_6__ {TYPE_1__ context; } ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static int FUNC_0(enum arch_vdso_type VAR_3,
   const struct vm_special_mapping *VAR_4,
   struct vm_area_struct *VAR_5)
{
 unsigned long VAR_6 = VAR_5->vm_end - VAR_5->vm_start;
 unsigned long VAR_7 = VAR_2[VAR_3].vdso_code_end -
      VAR_2[VAR_3].vdso_code_start;

 if (VAR_7 != VAR_6)
  return -VAR_0;

 VAR_1->mm->context.vdso = (void *)VAR_5->vm_start;

 return 0;
}
