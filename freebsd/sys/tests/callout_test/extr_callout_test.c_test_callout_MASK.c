
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout_run {int callout_waiting; int lock; int co_completed; int * co_array; int co_return_npa; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(void *VAR_1)
{
 struct callout_run *VAR_2;
 int VAR_3;

 FUNC_5();
 VAR_3 = VAR_0;
 FUNC_6();
 VAR_2 = (struct callout_run *)VAR_1;
 FUNC_0(&VAR_2->callout_waiting, 1);
 FUNC_7(&VAR_2->lock);
 if (FUNC_4(&VAR_2->co_array[VAR_3]) ||
     !FUNC_2(&VAR_2->co_array[VAR_3])) {
  VAR_2->co_return_npa++;
  FUNC_1(&VAR_2->callout_waiting, 1);
  FUNC_8(&VAR_2->lock);
  return;
 }
 FUNC_3(&VAR_2->co_array[VAR_3]);
 VAR_2->co_completed++;
 FUNC_8(&VAR_2->lock);
 FUNC_1(&VAR_2->callout_waiting, 1);
}
