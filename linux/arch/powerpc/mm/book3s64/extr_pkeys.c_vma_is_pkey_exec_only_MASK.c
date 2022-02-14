
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; TYPE_2__* vm_mm; } ;
struct TYPE_3__ {scalar_t__ execute_only_pkey; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;

__attribute__((used)) static inline bool FUNC_1(struct vm_area_struct *VAR_3)
{

 if ((VAR_3->vm_flags & (VAR_1 | VAR_2 | VAR_0)) != VAR_0)
  return 0;

 return (FUNC_0(VAR_3) == VAR_3->vm_mm->context.execute_only_pkey);
}
