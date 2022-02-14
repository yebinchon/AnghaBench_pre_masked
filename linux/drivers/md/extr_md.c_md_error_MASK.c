
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ func; } ;
struct mddev {TYPE_2__ event_work; int thread; int recovery; scalar_t__ degraded; TYPE_1__* pers; } ;
struct md_rdev {int sysfs_state; int flags; } ;
struct TYPE_3__ {int (* error_handler ) (struct mddev*,struct md_rdev*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mddev*,struct md_rdev*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct mddev *VAR_5, struct md_rdev *VAR_6)
{
 if (!VAR_6 || FUNC_6(VAR_0, &VAR_6->flags))
  return;

 if (!VAR_5->pers || !VAR_5->pers->error_handler)
  return;
 VAR_5->pers->error_handler(VAR_5,VAR_6);
 if (VAR_5->degraded)
  FUNC_3(VAR_3, &VAR_5->recovery);
 FUNC_5(VAR_6->sysfs_state);
 FUNC_3(VAR_1, &VAR_5->recovery);
 FUNC_3(VAR_2, &VAR_5->recovery);
 FUNC_1(VAR_5->thread);
 if (VAR_5->event_work.func)
  FUNC_2(VAR_4, &VAR_5->event_work);
 FUNC_0(VAR_5);
}
