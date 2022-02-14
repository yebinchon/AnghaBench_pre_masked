
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct drbd_device {char congestion_reason; TYPE_1__* ldev; } ;
struct TYPE_6__ {TYPE_2__* connection; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int backing_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_3__* FUNC_2 (struct drbd_device*) ;
 scalar_t__ FUNC_3 (struct drbd_device*) ;
 int FUNC_4 (struct drbd_device*,int ) ;
 int FUNC_5 (struct drbd_device*) ;
 int FUNC_6 (struct drbd_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_5, int VAR_6)
{
 struct drbd_device *VAR_7 = VAR_5;
 struct request_queue *VAR_8;
 char VAR_9 = '-';
 int VAR_10 = 0;

 if (!FUNC_5(VAR_7)) {

  VAR_10 = VAR_6;
  VAR_9 = 'd';
  goto out;
 }

 if (FUNC_7(VAR_0, &FUNC_2(VAR_7)->connection->flags)) {
  VAR_10 |= (1 << VAR_3);





  if (!FUNC_4(VAR_7, VAR_1))
   VAR_10 |= (1 << VAR_4);
  else
   FUNC_6(VAR_7);
  VAR_10 &= VAR_6;
  VAR_9 = 'c';
  goto out;
 }

 if (FUNC_3(VAR_7)) {
  VAR_8 = FUNC_0(VAR_7->ldev->backing_bdev);
  VAR_10 = FUNC_1(VAR_8->backing_dev_info, VAR_6);
  FUNC_6(VAR_7);
  if (VAR_10)
   VAR_9 = 'b';
 }

 if (VAR_6 & (1 << VAR_3) &&
     FUNC_7(VAR_2, &FUNC_2(VAR_7)->connection->flags)) {
  VAR_10 |= (1 << VAR_3);
  VAR_9 = VAR_9 == 'b' ? 'a' : 'n';
 }

out:
 VAR_7->congestion_reason = VAR_9;
 return VAR_10;
}
