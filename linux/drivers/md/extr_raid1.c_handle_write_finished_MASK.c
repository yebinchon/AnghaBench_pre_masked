
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r1conf {int raid_disks; TYPE_2__* mddev; int wait_barrier; int device_lock; int * nr_queued; int bio_end_io_list; TYPE_1__* mirrors; } ;
struct r1bio {int state; int sector; int retry_list; int ** bios; int sectors; } ;
struct md_rdev {int dummy; } ;
struct TYPE_5__ {int thread; } ;
struct TYPE_4__ {struct md_rdev* rdev; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct r1bio*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_2__*,struct md_rdev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct r1bio*,int) ;
 int FUNC_6 (struct r1bio*) ;
 int FUNC_7 (struct md_rdev*,int ,int ,int ) ;
 int FUNC_8 (struct md_rdev*,TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct r1conf *VAR_3, struct r1bio *VAR_4)
{
 int VAR_5, VAR_6;
 bool VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->raid_disks * 2 ; VAR_5++)
  if (VAR_4->bios[VAR_5] == VAR_0) {
   struct md_rdev *VAR_8 = VAR_3->mirrors[VAR_5].rdev;
   FUNC_7(VAR_8,
          VAR_4->sector,
          VAR_4->sectors, 0);
   FUNC_8(VAR_8, VAR_3->mddev);
  } else if (VAR_4->bios[VAR_5] != ((void*)0)) {




   VAR_7 = 1;
   if (!FUNC_5(VAR_4, VAR_5)) {
    FUNC_3(VAR_3->mddev,
      VAR_3->mirrors[VAR_5].rdev);

    FUNC_10(VAR_1, &VAR_4->state);
   }
   FUNC_8(VAR_3->mirrors[VAR_5].rdev,
      VAR_3->mddev);
  }
 if (VAR_7) {
  FUNC_11(&VAR_3->device_lock);
  FUNC_2(&VAR_4->retry_list, &VAR_3->bio_end_io_list);
  VAR_6 = FUNC_9(VAR_4->sector);
  FUNC_0(&VAR_3->nr_queued[VAR_6]);
  FUNC_12(&VAR_3->device_lock);




  FUNC_14(&VAR_3->wait_barrier);
  FUNC_4(VAR_3->mddev->thread);
 } else {
  if (FUNC_13(VAR_2, &VAR_4->state))
   FUNC_1(VAR_4);
  FUNC_6(VAR_4);
 }
}
