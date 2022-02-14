
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int sb_wait; scalar_t__ suspended; int active_io; TYPE_1__* pers; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int (* make_request ) (struct mddev*,struct bio*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (struct mddev*,struct bio*) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct mddev*,struct bio*) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct mddev *VAR_2, struct bio *VAR_3)
{
check_suspended:
 FUNC_7();
 if (FUNC_5(VAR_2, VAR_3)) {
  FUNC_0(VAR_1);
  for (;;) {
   FUNC_6(&VAR_2->sb_wait, &VAR_1,
     VAR_0);
   if (!FUNC_5(VAR_2, VAR_3))
    break;
   FUNC_8();
   FUNC_9();
   FUNC_7();
  }
  FUNC_4(&VAR_2->sb_wait, &VAR_1);
 }
 FUNC_3(&VAR_2->active_io);
 FUNC_8();

 if (!VAR_2->pers->make_request(VAR_2, VAR_3)) {
  FUNC_1(&VAR_2->active_io);
  FUNC_11(&VAR_2->sb_wait);
  goto check_suspended;
 }

 if (FUNC_2(&VAR_2->active_io) && VAR_2->suspended)
  FUNC_11(&VAR_2->sb_wait);
}
