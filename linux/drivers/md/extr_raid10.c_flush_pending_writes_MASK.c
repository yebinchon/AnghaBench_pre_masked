
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ head; } ;
struct r10conf {int device_lock; int wait_barrier; TYPE_1__* mddev; scalar_t__ pending_count; TYPE_3__ pending_bio_list; } ;
struct md_rdev {int flags; int bdev; } ;
struct blk_plug {int dummy; } ;
struct bio {TYPE_2__* bi_disk; struct bio* bi_next; } ;
struct TYPE_5__ {int queue; } ;
struct TYPE_4__ {int bitmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 struct bio* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,int ) ;
 int FUNC_6 (struct blk_plug*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct blk_plug*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct r10conf *VAR_3)
{



 FUNC_11(&VAR_3->device_lock);

 if (VAR_3->pending_bio_list.head) {
  struct blk_plug VAR_4;
  struct bio *VAR_5;

  VAR_5 = FUNC_3(&VAR_3->pending_bio_list);
  VAR_3->pending_count = 0;
  FUNC_12(&VAR_3->device_lock);
  FUNC_0(VAR_2);

  FUNC_8(&VAR_4);


  FUNC_10(VAR_3->mddev->bitmap);
  FUNC_15(&VAR_3->wait_barrier);

  while (VAR_5) {
   struct bio *VAR_6 = VAR_5->bi_next;
   struct md_rdev *VAR_7 = (void*)VAR_5->bi_disk;
   VAR_5->bi_next = ((void*)0);
   FUNC_5(VAR_5, VAR_7->bdev);
   if (FUNC_13(VAR_0, &VAR_7->flags)) {
    FUNC_2(VAR_5);
   } else if (FUNC_14((FUNC_4(VAR_5) == VAR_1) &&
         !FUNC_7(VAR_5->bi_disk->queue)))

    FUNC_1(VAR_5);
   else
    FUNC_9(VAR_5);
   VAR_5 = VAR_6;
  }
  FUNC_6(&VAR_4);
 } else
  FUNC_12(&VAR_3->device_lock);
}
