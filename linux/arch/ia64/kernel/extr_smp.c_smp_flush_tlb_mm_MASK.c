
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int mm_users; } ;
typedef int cpumask_var_t ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (void (*) (void*),struct mm_struct*,int) ;
 int FUNC_12 (int ,void (*) (void*),struct mm_struct*,int) ;

void
FUNC_13 (struct mm_struct *VAR_2)
{
 cpumask_var_t VAR_3;
 FUNC_9();

 if (FUNC_4(VAR_2 == VAR_1->active_mm && FUNC_1(&VAR_2->mm_users) == 1))
 {
  FUNC_5(VAR_2);
  FUNC_10();
  return;
 }
 if (!FUNC_0(&VAR_3, VAR_0)) {
  FUNC_11((void (*)(void *))FUNC_5,
   VAR_2, 1);
 } else {
  FUNC_2(VAR_3, FUNC_8(VAR_2));
  FUNC_12(VAR_3,
   (void (*)(void *))FUNC_5, VAR_2, 1);
  FUNC_3(VAR_3);
 }
 FUNC_6();
 FUNC_5(VAR_2);
 FUNC_7();
 FUNC_10();
}
