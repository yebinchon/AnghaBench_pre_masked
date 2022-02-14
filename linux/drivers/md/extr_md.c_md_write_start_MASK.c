
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int ro; int safemode; int writes_pending; int sb_flags; scalar_t__ suspended; int sb_wait; int has_superblocks; int sysfs_state; int lock; int thread; scalar_t__ in_sync; scalar_t__ sync_checkers; int sync_thread; int recovery; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int) ;

bool FUNC_14(struct mddev *VAR_4, struct bio *VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_1(VAR_5) != VAR_3)
  return 1;

 FUNC_0(VAR_4->ro == 1);
 if (VAR_4->ro == 2) {

  VAR_4->ro = 0;
  FUNC_7(VAR_0, &VAR_4->recovery);
  FUNC_2(VAR_4->thread);
  FUNC_2(VAR_4->sync_thread);
  VAR_6 = 1;
 }
 FUNC_5();
 FUNC_3(&VAR_4->writes_pending);
 FUNC_8();
 if (VAR_4->safemode == 1)
  VAR_4->safemode = 0;

 if (VAR_4->in_sync || VAR_4->sync_checkers) {
  FUNC_9(&VAR_4->lock);
  if (VAR_4->in_sync) {
   VAR_4->in_sync = 0;
   FUNC_7(VAR_1, &VAR_4->sb_flags);
   FUNC_7(VAR_2, &VAR_4->sb_flags);
   FUNC_2(VAR_4->thread);
   VAR_6 = 1;
  }
  FUNC_10(&VAR_4->lock);
 }
 FUNC_6();
 if (VAR_6)
  FUNC_11(VAR_4->sysfs_state);
 if (!VAR_4->has_superblocks)
  return 1;
 FUNC_13(VAR_4->sb_wait,
     !FUNC_12(VAR_2, &VAR_4->sb_flags) ||
     VAR_4->suspended);
 if (FUNC_12(VAR_2, &VAR_4->sb_flags)) {
  FUNC_4(&VAR_4->writes_pending);
  return 0;
 }
 return 1;
}
