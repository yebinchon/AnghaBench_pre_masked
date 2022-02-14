
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int sync_thread; int thread; int recovery; TYPE_1__* pers; int sb_wait; scalar_t__ suspended; int reconfig_mutex; } ;
struct TYPE_2__ {int (* quiesce ) (struct mddev*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mddev*,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mddev *VAR_1)
{
 FUNC_0(&VAR_1->reconfig_mutex);
 if (--VAR_1->suspended)
  return;
 FUNC_4(&VAR_1->sb_wait);
 VAR_1->pers->quiesce(VAR_1, 0);

 FUNC_2(VAR_0, &VAR_1->recovery);
 FUNC_1(VAR_1->thread);
 FUNC_1(VAR_1->sync_thread);
}
