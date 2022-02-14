
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_log {TYPE_2__* reclaim_thread; TYPE_1__* rdev; } ;
struct mddev {int sb_wait; } ;
struct TYPE_4__ {int tsk; } ;
struct TYPE_3__ {struct mddev* mddev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct r5l_log*) ;
 int FUNC_3 (struct r5l_log*,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct r5l_log *VAR_1, int VAR_2)
{
 struct mddev *VAR_3;

 if (VAR_2) {

  VAR_3 = VAR_1->rdev->mddev;
  FUNC_4(&VAR_3->sb_wait);
  FUNC_0(VAR_1->reclaim_thread->tsk);
  FUNC_3(VAR_1, VAR_0);
  FUNC_2(VAR_1);
 } else
  FUNC_1(VAR_1->reclaim_thread->tsk);
}
