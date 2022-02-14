
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {scalar_t__ r5c_journal_mode; int disable_writeback_work; } ;
struct r5conf {struct r5l_log* log; } ;
struct mddev {struct r5conf* private; } ;
struct md_rdev {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct r5conf*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct mddev *VAR_2, struct md_rdev *VAR_3)
{
 struct r5conf *VAR_4 = VAR_2->private;
 struct r5l_log *VAR_5 = VAR_4->log;

 if (!VAR_5)
  return;

 if ((FUNC_0(VAR_4) > 0 ||
      FUNC_2(VAR_0, &VAR_3->flags)) &&
     VAR_4->log->r5c_journal_mode == VAR_1)
  FUNC_1(&VAR_5->disable_writeback_work);
}
