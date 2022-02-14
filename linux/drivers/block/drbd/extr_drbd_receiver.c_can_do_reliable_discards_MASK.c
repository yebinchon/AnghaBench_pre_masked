
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct drbd_device {TYPE_1__* ldev; } ;
struct disk_conf {int discard_zeroes_if_aligned; } ;
struct TYPE_2__ {int disk_conf; int backing_bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;
 struct disk_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static bool FUNC_5(struct drbd_device *VAR_0)
{
 struct request_queue *VAR_1 = FUNC_0(VAR_0->ldev->backing_bdev);
 struct disk_conf *VAR_2;
 bool VAR_3;

 if (!FUNC_1(VAR_1))
  return 0;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0->ldev->disk_conf);
 VAR_3 = VAR_2->discard_zeroes_if_aligned;
 FUNC_4();
 return VAR_3;
}
