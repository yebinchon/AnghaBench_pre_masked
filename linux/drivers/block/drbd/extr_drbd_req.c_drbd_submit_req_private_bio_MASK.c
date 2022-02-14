
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_request {struct bio* private_bio; struct drbd_device* device; } ;
struct drbd_device {TYPE_1__* ldev; } ;
struct bio {int bi_opf; } ;
struct TYPE_2__ {int backing_bdev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 scalar_t__ FUNC_3 (struct drbd_device*,unsigned int) ;
 int FUNC_4 (struct drbd_request*,int) ;
 int FUNC_5 (struct bio*) ;
 scalar_t__ FUNC_6 (struct drbd_device*) ;
 int FUNC_7 (struct drbd_device*) ;

__attribute__((used)) static void
FUNC_8(struct drbd_request *VAR_10)
{
 struct drbd_device *VAR_11 = VAR_10->device;
 struct bio *VAR_12 = VAR_10->private_bio;
 unsigned int VAR_13;

 if (FUNC_1(VAR_12) != VAR_7)
  VAR_13 = VAR_2;
 else if (VAR_12->bi_opf & VAR_9)
  VAR_13 = VAR_0;
 else
  VAR_13 = VAR_1;

 FUNC_2(VAR_12, VAR_11->ldev->backing_bdev);






 if (FUNC_6(VAR_11)) {
  if (FUNC_3(VAR_11, VAR_13))
   FUNC_0(VAR_12);
  else if (FUNC_1(VAR_12) == VAR_8)
   FUNC_4(VAR_10, VAR_4 |
       ((VAR_12->bi_opf & VAR_5) ? 0 : VAR_3));
  else if (FUNC_1(VAR_12) == VAR_6)
   FUNC_4(VAR_10, VAR_3);
  else
   FUNC_5(VAR_12);
  FUNC_7(VAR_11);
 } else
  FUNC_0(VAR_12);
}
