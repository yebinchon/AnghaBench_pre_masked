
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct TYPE_5__ {scalar_t__ ptbase; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_8__ {TYPE_3__* active_mm; } ;
struct TYPE_6__ {scalar_t__ ptbase; } ;
struct TYPE_7__ {TYPE_2__ context; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ) ;
 TYPE_4__* VAR_1 ;

void FUNC_1(struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 struct mm_struct *VAR_4 = VAR_2->vm_mm;

 if (VAR_4->context.ptbase == VAR_1->active_mm->context.ptbase)
  FUNC_0((void *)VAR_3, VAR_0);
}
