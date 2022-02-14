
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct TYPE_2__ {scalar_t__* asid; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

void FUNC_8(struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = FUNC_7();
 struct mm_struct* VAR_5 = VAR_2->vm_mm;
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_5->context.asid[VAR_4] == VAR_0)
  return;

 FUNC_5(VAR_6);

 VAR_7 = FUNC_1();
 FUNC_6(FUNC_0(VAR_5->context.asid[VAR_4]));

 if (VAR_2->vm_flags & VAR_1)
  FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 FUNC_6(VAR_7);

 FUNC_4(VAR_6);
}
