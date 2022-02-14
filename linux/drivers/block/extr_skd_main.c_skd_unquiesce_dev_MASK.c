
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skd_device {int state; scalar_t__ drive_state; int gendisk_on; TYPE_1__* pdev; int waitq; int start_queue; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;







 int VAR_2 ;



 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int ,int,int ,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct skd_device*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct skd_device *VAR_3)
{
 int VAR_4 = VAR_3->state;

 FUNC_4(VAR_3, "unquiesce");
 if (VAR_3->state == VAR_2) {
  FUNC_0(&VAR_3->pdev->dev, "**** device already ONLINE\n");
  return 0;
 }
 if (VAR_3->drive_state != VAR_1) {
  VAR_3->state = 137;
  FUNC_0(&VAR_3->pdev->dev, "drive BUSY state\n");
  return 0;
 }





 switch (VAR_3->state) {
 case 130:
 case 137:
 case 135:
 case 136:
 case 128:
 case 129:
 case 133:
 case 132:
 case 131:
  VAR_3->state = VAR_2;
  FUNC_1(&VAR_3->pdev->dev, "Driver state %s(%d)=>%s(%d)\n",
   FUNC_5(VAR_4),
   VAR_4, FUNC_5(VAR_3->state),
   VAR_3->state);
  FUNC_0(&VAR_3->pdev->dev,
   "**** device ONLINE...starting block queue\n");
  FUNC_0(&VAR_3->pdev->dev, "starting queue\n");
  FUNC_2(&VAR_3->pdev->dev, "STEC s1120 ONLINE\n");
  FUNC_3(&VAR_3->start_queue);
  VAR_3->gendisk_on = 1;
  FUNC_6(&VAR_3->waitq);
  break;

 case 134:
 default:
  FUNC_0(&VAR_3->pdev->dev,
   "**** driver state %d, not implemented\n",
   VAR_3->state);
  return -VAR_0;
 }
 return 0;
}
