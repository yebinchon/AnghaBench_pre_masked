
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {scalar_t__ ro; int in_sync; int * wb_info_pool; scalar_t__ sb_flags; TYPE_1__* pers; int safemode_timer; int recovery; scalar_t__ sync_thread; } ;
struct TYPE_2__ {int (* quiesce ) (struct mddev*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mddev*) ;
 int VAR_2 ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*,int) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct mddev*,int) ;
 int FUNC_9 (struct mddev*,int) ;

__attribute__((used)) static void FUNC_10(struct mddev *VAR_3)
{
 FUNC_7(VAR_0, &VAR_3->recovery);
 FUNC_1(VAR_2);
 if (VAR_3->sync_thread) {
  FUNC_7(VAR_1, &VAR_3->recovery);
  FUNC_3(VAR_3);
 }

 FUNC_0(&VAR_3->safemode_timer);

 if (VAR_3->pers && VAR_3->pers->quiesce) {
  VAR_3->pers->quiesce(VAR_3, 1);
  VAR_3->pers->quiesce(VAR_3, 0);
 }
 FUNC_2(VAR_3);

 if (VAR_3->ro == 0 &&
     ((!VAR_3->in_sync && !FUNC_5(VAR_3)) ||
      VAR_3->sb_flags)) {

  if (!FUNC_5(VAR_3))
   VAR_3->in_sync = 1;
  FUNC_4(VAR_3, 1);
 }
 FUNC_6(VAR_3->wb_info_pool);
 VAR_3->wb_info_pool = ((void*)0);
}
