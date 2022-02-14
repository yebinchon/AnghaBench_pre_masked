
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_mm; } ;
struct TYPE_2__ {int context; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long) ;

void
FUNC_6(struct vm_area_struct *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 if (FUNC_5(VAR_2)) {
  if (FUNC_4(VAR_0->vm_mm->context)) {
   FUNC_3(VAR_0, VAR_1);
   FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_2));
  } else {
   FUNC_2(VAR_0, VAR_1, FUNC_0(VAR_2));
  }
 }
}
