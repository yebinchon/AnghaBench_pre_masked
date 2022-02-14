
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wakeup_source {int lock; int expire_count; scalar_t__ timer_expires; scalar_t__ active; } ;
struct timer_list {int dummy; } ;


 struct wakeup_source* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (struct wakeup_source*) ;
 struct wakeup_source* VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct wakeup_source *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1);
 unsigned long VAR_5;

 FUNC_1(&VAR_4->lock, VAR_5);

 if (VAR_4->active && VAR_4->timer_expires
     && FUNC_3(VAR_0, VAR_4->timer_expires)) {
  FUNC_4(VAR_4);
  VAR_4->expire_count++;
 }

 FUNC_2(&VAR_4->lock, VAR_5);
}
