
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int in_sync; scalar_t__ sync_checkers; int safemode; int writes_pending; int sysfs_state; int sb_flags; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(struct mddev *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 if (!VAR_1->in_sync) {
  VAR_1->sync_checkers++;
  FUNC_7(&VAR_1->lock);
  FUNC_2(&VAR_1->writes_pending);
  FUNC_6(&VAR_1->lock);
  if (!VAR_1->in_sync &&
      FUNC_1(&VAR_1->writes_pending)) {
   VAR_1->in_sync = 1;




   FUNC_5();
   FUNC_4(VAR_0, &VAR_1->sb_flags);
   FUNC_8(VAR_1->sysfs_state);
  }
  if (--VAR_1->sync_checkers == 0)
   FUNC_3(&VAR_1->writes_pending);
 }
 if (VAR_1->safemode == 1)
  VAR_1->safemode = 0;
 return VAR_1->in_sync;
}
