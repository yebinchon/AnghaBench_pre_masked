
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int lock; scalar_t__ timer_expires; int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct wakeup_source*,int) ;

void FUNC_4(struct wakeup_source *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0)
  return;

 FUNC_1(&VAR_0->lock, VAR_1);

 FUNC_3(VAR_0, 0);
 FUNC_0(&VAR_0->timer);
 VAR_0->timer_expires = 0;

 FUNC_2(&VAR_0->lock, VAR_1);
}
