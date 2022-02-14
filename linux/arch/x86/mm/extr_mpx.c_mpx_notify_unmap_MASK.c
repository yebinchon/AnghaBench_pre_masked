
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; struct vm_area_struct* vm_next; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct vm_area_struct* FUNC_0 (struct mm_struct*,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;

void FUNC_4(struct mm_struct *VAR_3, unsigned long VAR_4,
        unsigned long VAR_5)
{
 struct vm_area_struct *VAR_6;
 int VAR_7;





 if (!FUNC_2(VAR_2->mm))
  return;
 VAR_6 = FUNC_0(VAR_3, VAR_4);
 while (VAR_6 && VAR_6->vm_start < VAR_5) {
  if (VAR_6->vm_flags & VAR_1)
   return;
  VAR_6 = VAR_6->vm_next;
 }

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  FUNC_1(VAR_0);
}
