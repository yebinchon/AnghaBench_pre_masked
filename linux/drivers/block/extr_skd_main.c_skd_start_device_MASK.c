
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skd_device {int drive_state; int gendisk_on; int lock; TYPE_1__* pdev; int waitq; int start_queue; void* timer_countdown; int state; scalar_t__ last_mtd; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct skd_device*,int ) ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_1 (struct skd_device*,int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct skd_device*) ;
 int FUNC_7 (struct skd_device*) ;
 int FUNC_8 (struct skd_device*) ;
 int FUNC_9 (struct skd_device*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct skd_device *VAR_16)
{
 unsigned long VAR_17;
 u32 VAR_18;
 u32 VAR_19;

 FUNC_10(&VAR_16->lock, VAR_17);


 FUNC_1(VAR_16, VAR_2, VAR_4);

 VAR_18 = FUNC_0(VAR_16, VAR_7);

 FUNC_2(&VAR_16->pdev->dev, "initial status=0x%x\n", VAR_18);

 VAR_19 = VAR_18 & VAR_6;
 VAR_16->drive_state = VAR_19;
 VAR_16->last_mtd = 0;

 VAR_16->state = VAR_11;
 VAR_16->timer_countdown = VAR_14;

 FUNC_8(VAR_16);

 switch (VAR_16->drive_state) {
 case 130:
  FUNC_3(&VAR_16->pdev->dev, "Drive offline...\n");
  break;

 case 132:
  FUNC_2(&VAR_16->pdev->dev, "FIT_SR_DRIVE_FW_BOOTING\n");
  VAR_16->state = VAR_12;
  VAR_16->timer_countdown = VAR_15;
  break;

 case 134:
  FUNC_4(&VAR_16->pdev->dev, "Start: BUSY_SANITIZE\n");
  VAR_16->state = VAR_10;
  VAR_16->timer_countdown = VAR_13;
  break;

 case 135:
  FUNC_4(&VAR_16->pdev->dev, "Start: BUSY_ERASE\n");
  VAR_16->state = VAR_9;
  VAR_16->timer_countdown = VAR_13;
  break;

 case 131:
 case 129:
  FUNC_9(VAR_16);
  break;

 case 136:
  FUNC_3(&VAR_16->pdev->dev, "Drive Busy...\n");
  VAR_16->state = VAR_8;
  VAR_16->timer_countdown = VAR_13;
  break;

 case 128:
  FUNC_3(&VAR_16->pdev->dev, "drive soft reset in prog\n");
  break;

 case 133:




  FUNC_7(VAR_16);

  FUNC_2(&VAR_16->pdev->dev, "starting queue\n");
  FUNC_5(&VAR_16->start_queue);
  VAR_16->gendisk_on = -1;
  FUNC_12(&VAR_16->waitq);
  break;

 case 0xFF:


  FUNC_6(VAR_16);

  FUNC_2(&VAR_16->pdev->dev,
   "starting queue to error-out reqs\n");
  FUNC_5(&VAR_16->start_queue);
  VAR_16->gendisk_on = -1;
  FUNC_12(&VAR_16->waitq);
  break;

 default:
  FUNC_3(&VAR_16->pdev->dev, "Start: unknown state %x\n",
   VAR_16->drive_state);
  break;
 }

 VAR_19 = FUNC_0(VAR_16, VAR_0);
 FUNC_2(&VAR_16->pdev->dev, "FIT Control Status=0x%x\n", VAR_19);

 VAR_19 = FUNC_0(VAR_16, VAR_4);
 FUNC_2(&VAR_16->pdev->dev, "Intr Status=0x%x\n", VAR_19);

 VAR_19 = FUNC_0(VAR_16, VAR_3);
 FUNC_2(&VAR_16->pdev->dev, "Intr Mask=0x%x\n", VAR_19);

 VAR_19 = FUNC_0(VAR_16, VAR_5);
 FUNC_2(&VAR_16->pdev->dev, "Msg from Dev=0x%x\n", VAR_19);

 VAR_19 = FUNC_0(VAR_16, VAR_1);
 FUNC_2(&VAR_16->pdev->dev, "HW version=0x%x\n", VAR_19);

 FUNC_11(&VAR_16->lock, VAR_17);
}
