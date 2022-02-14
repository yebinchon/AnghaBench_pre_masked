
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct skd_device {void* last_mtd; int proto_ver; int dev_max_queue_depth; void* devno; int connect_time_stamp; int drive_jiffies; TYPE_1__* pdev; int cq_dma_address; int state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ,void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* FUNC_4 (struct skd_device*,int ) ;
 int FUNC_5 (struct skd_device*,void*,int ) ;
 int FUNC_6 (struct skd_device*,int ,int ) ;
 int FUNC_7 (int *,char*,void*,void*) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (struct skd_device*) ;
 int FUNC_11 (struct skd_device*) ;

__attribute__((used)) static void FUNC_12(struct skd_device *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_4(VAR_6, VAR_0);

 FUNC_7(&VAR_6->pdev->dev, "mfd=0x%x last_mtd=0x%x\n", VAR_7,
  VAR_6->last_mtd);


 if (FUNC_2(VAR_7) != FUNC_2(VAR_6->last_mtd))
  return;

 switch (FUNC_2(VAR_7)) {
 case 131:
  VAR_6->proto_ver = FUNC_3(VAR_7);

  if (VAR_6->proto_ver != VAR_3) {
   FUNC_8(&VAR_6->pdev->dev, "protocol mismatch\n");
   FUNC_8(&VAR_6->pdev->dev, "  got=%d support=%d\n",
    VAR_6->proto_ver, VAR_3);
   FUNC_8(&VAR_6->pdev->dev, "  please upgrade driver\n");
   VAR_6->state = VAR_4;
   FUNC_11(VAR_6);
   break;
  }
  VAR_8 = FUNC_0(130, 0, 0);
  FUNC_5(VAR_6, VAR_8, VAR_1);
  VAR_6->last_mtd = VAR_8;
  break;

 case 130:
  VAR_6->dev_max_queue_depth = FUNC_1(VAR_7);
  VAR_8 = FUNC_0(128, 0,
       VAR_5);
  FUNC_5(VAR_6, VAR_8, VAR_1);
  VAR_6->last_mtd = VAR_8;
  break;

 case 128:
  FUNC_6(VAR_6, VAR_6->cq_dma_address, VAR_2);
  VAR_8 = FUNC_0(129, 0, 0);
  FUNC_5(VAR_6, VAR_8, VAR_1);
  VAR_6->last_mtd = VAR_8;
  break;

 case 129:
  FUNC_10(VAR_6);
  VAR_8 = FUNC_0(134, 0, VAR_6->devno);
  FUNC_5(VAR_6, VAR_8, VAR_1);
  VAR_6->last_mtd = VAR_8;
  break;

 case 134:

  VAR_6->connect_time_stamp = (u32)FUNC_9();
  VAR_9 = VAR_6->connect_time_stamp & 0xFFFF;
  VAR_8 = FUNC_0(132, 0, VAR_9);
  FUNC_5(VAR_6, VAR_8, VAR_1);
  VAR_6->last_mtd = VAR_8;
  break;

 case 132:
  VAR_6->drive_jiffies = FUNC_1(VAR_7);
  VAR_9 = (VAR_6->connect_time_stamp >> 16) & 0xFFFF;
  VAR_8 = FUNC_0(133, 0, VAR_9);
  FUNC_5(VAR_6, VAR_8, VAR_1);
  VAR_6->last_mtd = VAR_8;
  break;

 case 133:
  VAR_6->drive_jiffies |= (FUNC_1(VAR_7) << 16);
  VAR_8 = FUNC_0(135, 0, 0);
  FUNC_5(VAR_6, VAR_8, VAR_1);
  VAR_6->last_mtd = VAR_8;

  FUNC_8(&VAR_6->pdev->dev, "Time sync driver=0x%x device=0x%x\n",
   VAR_6->connect_time_stamp, VAR_6->drive_jiffies);
  break;

 case 135:
  VAR_6->last_mtd = 0;



  break;

 default:
  break;
 }
}
