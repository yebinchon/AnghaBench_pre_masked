
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int safemode; int lock; int sb_flags; int sb_wait; int sysfs_state; scalar_t__ safemode_delay; scalar_t__ in_sync; TYPE_1__* pers; scalar_t__ ro; } ;
struct TYPE_2__ {int sync_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mddev*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(struct mddev *VAR_2)
{
 if (!VAR_2->pers)
  return;
 if (VAR_2->ro)
  return;
 if (!VAR_2->pers->sync_request)
  return;

 FUNC_2(&VAR_2->lock);
 if (VAR_2->in_sync) {
  VAR_2->in_sync = 0;
  FUNC_1(VAR_0, &VAR_2->sb_flags);
  FUNC_1(VAR_1, &VAR_2->sb_flags);
  if (VAR_2->safemode_delay &&
      VAR_2->safemode == 0)
   VAR_2->safemode = 1;
  FUNC_3(&VAR_2->lock);
  FUNC_0(VAR_2, 0);
  FUNC_4(VAR_2->sysfs_state);

  FUNC_6(VAR_2->sb_wait,
      !FUNC_5(VAR_1, &VAR_2->sb_flags));
 } else
  FUNC_3(&VAR_2->lock);
}
