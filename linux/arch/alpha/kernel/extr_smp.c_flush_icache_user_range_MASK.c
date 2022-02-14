
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {scalar_t__* context; int mm_users; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct mm_struct*,int) ;
 int FUNC_6 () ;

void
FUNC_7(struct vm_area_struct *VAR_4, struct page *VAR_5,
   unsigned long VAR_6, int VAR_7)
{
 struct mm_struct *VAR_8 = VAR_4->vm_mm;

 if ((VAR_4->vm_flags & VAR_1) == 0)
  return;

 FUNC_3();

 if (VAR_8 == VAR_2->active_mm) {
  FUNC_0(VAR_8);
  if (FUNC_1(&VAR_8->mm_users) <= 1) {
   int VAR_9, VAR_10 = FUNC_6();
   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
    if (!FUNC_2(VAR_9) || VAR_9 == VAR_10)
     continue;
    if (VAR_8->context[VAR_9])
     VAR_8->context[VAR_9] = 0;
   }
   FUNC_4();
   return;
  }
 }

 FUNC_5(VAR_3, VAR_8, 1);

 FUNC_4();
}
