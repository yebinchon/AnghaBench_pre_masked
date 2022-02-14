
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {int safemode_timer; int flags; int sb_wait; TYPE_2__* pers; int active_io; int suspended; int reconfig_mutex; TYPE_1__* thread; } ;
struct TYPE_4__ {int (* quiesce ) (struct mddev*,int) ;} ;
struct TYPE_3__ {scalar_t__ tsk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct mddev*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct mddev *VAR_3)
{
 FUNC_0(VAR_3->thread && VAR_2 == VAR_3->thread->tsk);
 FUNC_4(&VAR_3->reconfig_mutex);
 if (VAR_3->suspended++)
  return;
 FUNC_8();
 FUNC_11(&VAR_3->sb_wait);
 FUNC_5(VAR_0, &VAR_3->flags);
 FUNC_6();
 FUNC_10(VAR_3->sb_wait, FUNC_1(&VAR_3->active_io) == 0);
 VAR_3->pers->quiesce(VAR_3, 1);
 FUNC_2(VAR_0, &VAR_3->flags);
 FUNC_10(VAR_3->sb_wait, !FUNC_9(VAR_1, &VAR_3->flags));

 FUNC_3(&VAR_3->safemode_timer);
}
