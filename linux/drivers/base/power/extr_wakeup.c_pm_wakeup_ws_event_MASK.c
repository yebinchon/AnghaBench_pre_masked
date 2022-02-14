
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {unsigned long timer_expires; int lock; int timer; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct wakeup_source*) ;
 int FUNC_6 (struct wakeup_source*,int) ;

void FUNC_7(struct wakeup_source *VAR_1, unsigned int VAR_2, bool VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_1->lock, VAR_4);

 FUNC_6(VAR_1, VAR_3);

 if (!VAR_2) {
  FUNC_5(VAR_1);
  goto unlock;
 }

 VAR_5 = VAR_0 + FUNC_1(VAR_2);
 if (!VAR_5)
  VAR_5 = 1;

 if (!VAR_1->timer_expires || FUNC_4(VAR_5, VAR_1->timer_expires)) {
  FUNC_0(&VAR_1->timer, VAR_5);
  VAR_1->timer_expires = VAR_5;
 }

 unlock:
 FUNC_3(&VAR_1->lock, VAR_4);
}
