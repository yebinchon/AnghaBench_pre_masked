
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {scalar_t__* context; int mm_users; } ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct mm_struct*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct mm_struct*,int) ;
 int FUNC_6 () ;

void
FUNC_7(struct mm_struct *VAR_3)
{
 FUNC_3();

 if (VAR_3 == VAR_1->active_mm) {
  FUNC_2(VAR_3);
  if (FUNC_0(&VAR_3->mm_users) <= 1) {
   int VAR_4, VAR_5 = FUNC_6();
   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    if (!FUNC_1(VAR_4) || VAR_4 == VAR_5)
     continue;
    if (VAR_3->context[VAR_4])
     VAR_3->context[VAR_4] = 0;
   }
   FUNC_4();
   return;
  }
 }

 FUNC_5(VAR_2, VAR_3, 1);

 FUNC_4();
}
