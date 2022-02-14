
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {int timer_lock; int poll_timer; int poll_cnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gameport *VAR_0)
{
 FUNC_1(&VAR_0->timer_lock);

 if (!--VAR_0->poll_cnt)
  FUNC_0(&VAR_0->poll_timer);

 FUNC_2(&VAR_0->timer_lock);
}
