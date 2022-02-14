
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_6__ {int size; } ;
struct pktcdvd_device {TYPE_2__* bdev; int flags; TYPE_1__ settings; int disk; } ;
typedef int loff_t ;
typedef scalar_t__ fmode_t ;
struct TYPE_7__ {int bd_disk; int bd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int) ;
 struct request_queue* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (TYPE_2__*,int,struct pktcdvd_device*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct pktcdvd_device*,char*) ;
 int FUNC_8 (struct pktcdvd_device*,long*) ;
 int FUNC_9 (struct pktcdvd_device*,int ) ;
 int FUNC_10 (struct pktcdvd_device*,char*,long) ;
 int FUNC_11 (struct pktcdvd_device*) ;
 int FUNC_12 (struct pktcdvd_device*,struct request_queue*) ;
 int FUNC_13 (struct pktcdvd_device*,int ,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,long) ;

__attribute__((used)) static int FUNC_16(struct pktcdvd_device *VAR_6, fmode_t VAR_7)
{
 int VAR_8;
 long VAR_9;
 struct request_queue *VAR_10;






 FUNC_2(VAR_6->bdev->bd_dev);
 VAR_8 = FUNC_4(VAR_6->bdev, VAR_3 | VAR_2, VAR_6);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_8(VAR_6, &VAR_9);
 if (VAR_8) {
  FUNC_7(VAR_6, "pkt_get_last_written failed\n");
  goto out_putdev;
 }

 FUNC_15(VAR_6->disk, VAR_9 << 2);
 FUNC_15(VAR_6->bdev->bd_disk, VAR_9 << 2);
 FUNC_0(VAR_6->bdev, (loff_t)VAR_9 << 11);

 VAR_10 = FUNC_1(VAR_6->bdev);
 if (VAR_7) {
  VAR_8 = FUNC_11(VAR_6);
  if (VAR_8)
   goto out_putdev;




  FUNC_3(VAR_10, VAR_6->settings.size);
  FUNC_14(VAR_5, &VAR_6->flags);
 } else {
  FUNC_13(VAR_6, VAR_4, VAR_4);
  FUNC_6(VAR_5, &VAR_6->flags);
 }

 VAR_8 = FUNC_12(VAR_6, VAR_10);
 if (VAR_8)
  goto out_putdev;

 if (VAR_7) {
  if (!FUNC_9(VAR_6, VAR_0)) {
   FUNC_7(VAR_6, "not enough memory for buffers\n");
   VAR_8 = -VAR_1;
   goto out_putdev;
  }
  FUNC_10(VAR_6, "%lukB available on disc\n", VAR_9 << 1);
 }

 return 0;

out_putdev:
 FUNC_5(VAR_6->bdev, VAR_3 | VAR_2);
out:
 return VAR_8;
}
