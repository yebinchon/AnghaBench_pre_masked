
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5l_log {scalar_t__ last_checkpoint; scalar_t__ device_size; TYPE_1__* rdev; } ;
struct mddev {int sb_flags; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ data_offset; struct mddev* mddev; struct block_device* bdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct block_device*,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (struct mddev*,int) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (struct mddev*) ;
 int FUNC_7 (struct r5l_log*,scalar_t__) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static void FUNC_9(struct r5l_log *VAR_3,
 sector_t VAR_4)
{
 struct block_device *VAR_5 = VAR_3->rdev->bdev;
 struct mddev *VAR_6;

 FUNC_7(VAR_3, VAR_4);

 if (!FUNC_2(FUNC_1(VAR_5)))
  return;

 VAR_6 = VAR_3->rdev->mddev;
 FUNC_8(&VAR_6->sb_flags, 0,
  FUNC_0(VAR_1) | FUNC_0(VAR_2));
 if (!FUNC_5(VAR_6))
  return;
 FUNC_4(VAR_6, 1);
 FUNC_6(VAR_6);


 if (VAR_3->last_checkpoint < VAR_4) {
  FUNC_3(VAR_5,
    VAR_3->last_checkpoint + VAR_3->rdev->data_offset,
    VAR_4 - VAR_3->last_checkpoint, VAR_0, 0);
 } else {
  FUNC_3(VAR_5,
    VAR_3->last_checkpoint + VAR_3->rdev->data_offset,
    VAR_3->device_size - VAR_3->last_checkpoint,
    VAR_0, 0);
  FUNC_3(VAR_5, VAR_3->rdev->data_offset, VAR_4,
    VAR_0, 0);
 }
}
