
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drbd_device {int al_wait; TYPE_3__* act_log; int al_lock; TYPE_1__* ldev; } ;
struct TYPE_8__ {scalar_t__ pending_changes; } ;
struct TYPE_7__ {int al_updates; } ;
struct TYPE_6__ {int disk_conf; } ;


 int FUNC_0 (struct drbd_device*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_2__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct drbd_device *VAR_0)
{
 bool VAR_1 = 0;




 FUNC_9(VAR_0->al_wait,
   VAR_0->act_log->pending_changes == 0 ||
   (VAR_1 = FUNC_2(VAR_0->act_log)));

 if (VAR_1) {


  if (VAR_0->act_log->pending_changes) {
   bool VAR_2;

   FUNC_5();
   VAR_2 = FUNC_4(VAR_0->ldev->disk_conf)->al_updates;
   FUNC_6();

   if (VAR_2)
    FUNC_0(VAR_0);
   FUNC_7(&VAR_0->al_lock);




   FUNC_1(VAR_0->act_log);
   FUNC_8(&VAR_0->al_lock);
  }
  FUNC_3(VAR_0->act_log);
  FUNC_10(&VAR_0->al_wait);
 }
}
