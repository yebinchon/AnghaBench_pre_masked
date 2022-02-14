
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {int raid_disks; TYPE_2__* mirrors; } ;
struct r1bio {int read_disk; int remaining; struct bio** bios; int state; } ;
struct mddev {int recovery; struct r1conf* private; } ;
struct bio {int * bi_end_io; int bi_opf; } ;
struct TYPE_4__ {TYPE_1__* rdev; } ;
struct TYPE_3__ {int bdev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mddev*,struct r1bio*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ,int ) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_5 (struct r1bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct r1bio*) ;
 int FUNC_9 (struct r1bio*,int) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct mddev *VAR_9, struct r1bio *VAR_10)
{
 struct r1conf *VAR_11 = VAR_9->private;
 int VAR_12;
 int VAR_13 = VAR_11->raid_disks * 2;
 struct bio *VAR_14;

 if (!FUNC_10(VAR_5, &VAR_10->state))

  if (!FUNC_5(VAR_10))
   return;

 if (FUNC_10(VAR_3, &VAR_9->recovery))
  FUNC_8(VAR_10);




 FUNC_2(&VAR_10->remaining, 1);
 for (VAR_12 = 0; VAR_12 < VAR_13 ; VAR_12++) {
  VAR_14 = VAR_10->bios[VAR_12];
  if (VAR_14->bi_end_io == ((void*)0) ||
      (VAR_14->bi_end_io == VAR_7 &&
       (VAR_12 == VAR_10->read_disk ||
        !FUNC_10(VAR_4, &VAR_9->recovery))))
   continue;
  if (FUNC_10(VAR_1, &VAR_11->mirrors[VAR_12].rdev->flags)) {
   FUNC_0(VAR_9, VAR_10);
   continue;
  }

  FUNC_4(VAR_14, VAR_6, 0);
  if (FUNC_10(VAR_0, &VAR_11->mirrors[VAR_12].rdev->flags))
   VAR_14->bi_opf |= VAR_2;

  VAR_14->bi_end_io = VAR_8;
  FUNC_1(&VAR_10->remaining);
  FUNC_7(VAR_11->mirrors[VAR_12].rdev->bdev, FUNC_3(VAR_14));

  FUNC_6(VAR_14);
 }

 FUNC_9(VAR_10, 1);
}
