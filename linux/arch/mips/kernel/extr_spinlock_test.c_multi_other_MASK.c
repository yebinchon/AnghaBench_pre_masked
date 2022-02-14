
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spin_multi_state {int loops; int exit_wait; int lock; int start_wait; int enter_wait; } ;
struct spin_multi_per_thread {int start; struct spin_multi_state* state; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void *VAR_0)
{
 int VAR_1;
 int VAR_2;
 struct spin_multi_per_thread *VAR_3 = VAR_0;
 struct spin_multi_state *VAR_4 = VAR_3->state;

 VAR_1 = VAR_4->loops;
 VAR_2 = 1;

 FUNC_0(&VAR_4->enter_wait);

 while (FUNC_1(&VAR_4->enter_wait))
  ;

 VAR_3->start = FUNC_2();

 FUNC_0(&VAR_4->start_wait);

 while (FUNC_1(&VAR_4->start_wait))
  ;

 while (VAR_2) {
  FUNC_3(&VAR_4->lock);
  VAR_1--;
  if (VAR_1 == 0)
   VAR_2 = 0;
  FUNC_4(&VAR_4->lock);
 }

 FUNC_0(&VAR_4->exit_wait);
 while (FUNC_1(&VAR_4->exit_wait))
  ;
 return 0;
}
