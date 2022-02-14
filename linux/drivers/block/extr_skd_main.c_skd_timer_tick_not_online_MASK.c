
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {int state; int drive_state; int timer_countdown; int gendisk_on; int waitq; int start_queue; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct skd_device*) ;
 int FUNC_5 (struct skd_device*) ;
 int FUNC_6 (struct skd_device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct skd_device *VAR_3)
{
 switch (VAR_3->state) {
 case 138:
 case 137:
  break;
 case 141:
  FUNC_0(&VAR_3->pdev->dev,
   "drive busy sanitize[%x], driver[%x]\n",
   VAR_3->drive_state, VAR_3->state);



  if (VAR_3->timer_countdown > 0) {
   VAR_3->timer_countdown--;
   return;
  }
  FUNC_5(VAR_3);
  break;

 case 144:
 case 142:
 case 143:
  FUNC_0(&VAR_3->pdev->dev, "busy[%x], countdown=%d\n",
   VAR_3->state, VAR_3->timer_countdown);
  if (VAR_3->timer_countdown > 0) {
   VAR_3->timer_countdown--;
   return;
  }
  FUNC_0(&VAR_3->pdev->dev,
   "busy[%x], timedout=%d, restarting device.",
   VAR_3->state, VAR_3->timer_countdown);
  FUNC_6(VAR_3);
  break;

 case 128:
 case 131:
  if (VAR_3->timer_countdown > 0) {
   VAR_3->timer_countdown--;
   return;
  }


  VAR_3->state = 139;

  FUNC_1(&VAR_3->pdev->dev, "DriveFault Connect Timeout (%x)\n",
   VAR_3->drive_state);



  FUNC_3(&VAR_3->start_queue);
  VAR_3->gendisk_on = -1;
  FUNC_7(&VAR_3->waitq);
  break;

 case 136:

  break;

 case 134:
 case 135:
  break;

 case 133:
  if (VAR_3->timer_countdown > 0) {
   VAR_3->timer_countdown--;
   return;
  }


  VAR_3->state = 139;
  FUNC_1(&VAR_3->pdev->dev,
   "DriveFault Reconnect Timeout (%x)\n",
   VAR_3->drive_state);
  if ((VAR_3->drive_state == VAR_1) ||
      (VAR_3->drive_state == VAR_0) ||
      (VAR_3->drive_state == VAR_2))



   FUNC_5(VAR_3);
  else {
   FUNC_1(&VAR_3->pdev->dev, "Disable BusMaster (%x)\n",
    VAR_3->drive_state);
   FUNC_2(VAR_3->pdev);
   FUNC_4(VAR_3);
   FUNC_5(VAR_3);
  }



  FUNC_3(&VAR_3->start_queue);
  VAR_3->gendisk_on = -1;
  FUNC_7(&VAR_3->waitq);
  break;

 case 132:
 case 130:
 case 129:
 case 139:
 case 140:
 default:
  break;
 }
}
