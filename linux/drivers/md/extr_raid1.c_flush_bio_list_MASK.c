
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {int wait_barrier; TYPE_2__* mddev; } ;
struct md_rdev {int flags; int bdev; } ;
struct bio {TYPE_1__* bi_disk; struct bio* bi_next; } ;
struct TYPE_4__ {int bitmap; } ;
struct TYPE_3__ {int queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct r1conf *VAR_2, struct bio *VAR_3)
{

 FUNC_6(VAR_2->mddev->bitmap);
 FUNC_9(&VAR_2->wait_barrier);

 while (VAR_3) {
  struct bio *VAR_4 = VAR_3->bi_next;
  struct md_rdev *VAR_5 = (void *)VAR_3->bi_disk;
  VAR_3->bi_next = ((void*)0);
  FUNC_3(VAR_3, VAR_5->bdev);
  if (FUNC_7(VAR_0, &VAR_5->flags)) {
   FUNC_1(VAR_3);
  } else if (FUNC_8((FUNC_2(VAR_3) == VAR_1) &&
        !FUNC_4(VAR_3->bi_disk->queue)))

   FUNC_0(VAR_3);
  else
   FUNC_5(VAR_3);
  VAR_3 = VAR_4;
 }
}
