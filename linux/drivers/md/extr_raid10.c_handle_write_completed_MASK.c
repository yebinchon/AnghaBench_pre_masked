
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r10conf {int copies; TYPE_3__* mddev; int wait_barrier; int device_lock; int nr_queued; int bio_end_io_list; TYPE_1__* mirrors; } ;
struct r10bio {int state; int retry_list; int sectors; TYPE_2__* devs; } ;
struct md_rdev {int dummy; } ;
struct bio {scalar_t__ bi_status; int * bi_end_io; } ;
struct TYPE_7__ {int thread; } ;
struct TYPE_6__ {int devnum; int addr; struct bio* repl_bio; struct bio* bio; } ;
struct TYPE_5__ {struct md_rdev* replacement; struct md_rdev* rdev; } ;


 struct bio* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct r10bio*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*,struct md_rdev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct r10bio*,int) ;
 int FUNC_5 (struct r10bio*) ;
 int FUNC_6 (struct r10bio*) ;
 int FUNC_7 (struct md_rdev*,int ,int ,int ) ;
 int FUNC_8 (struct md_rdev*,TYPE_3__*) ;
 int FUNC_9 (struct md_rdev*,int ,int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct r10conf *VAR_5, struct r10bio *VAR_6)
{






 int VAR_7;
 struct md_rdev *VAR_8;

 if (FUNC_13(VAR_3, &VAR_6->state) ||
     FUNC_13(VAR_2, &VAR_6->state)) {
  for (VAR_7 = 0; VAR_7 < VAR_5->copies; VAR_7++) {
   int VAR_9 = VAR_6->devs[VAR_7].devnum;
   VAR_8 = VAR_5->mirrors[VAR_9].rdev;
   if (VAR_6->devs[VAR_7].bio == ((void*)0) ||
    VAR_6->devs[VAR_7].bio->bi_end_io == ((void*)0))
    continue;
   if (!VAR_6->devs[VAR_7].bio->bi_status) {
    FUNC_7(
     VAR_8,
     VAR_6->devs[VAR_7].addr,
     VAR_6->sectors, 0);
   } else {
    if (!FUNC_9(
         VAR_8,
         VAR_6->devs[VAR_7].addr,
         VAR_6->sectors, 0))
     FUNC_2(VAR_5->mddev, VAR_8);
   }
   VAR_8 = VAR_5->mirrors[VAR_9].replacement;
   if (VAR_6->devs[VAR_7].repl_bio == ((void*)0) ||
    VAR_6->devs[VAR_7].repl_bio->bi_end_io == ((void*)0))
    continue;

   if (!VAR_6->devs[VAR_7].repl_bio->bi_status) {
    FUNC_7(
     VAR_8,
     VAR_6->devs[VAR_7].addr,
     VAR_6->sectors, 0);
   } else {
    if (!FUNC_9(
         VAR_8,
         VAR_6->devs[VAR_7].addr,
         VAR_6->sectors, 0))
     FUNC_2(VAR_5->mddev, VAR_8);
   }
  }
  FUNC_5(VAR_6);
 } else {
  bool VAR_10 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_5->copies; VAR_7++) {
   int VAR_11 = VAR_6->devs[VAR_7].devnum;
   struct bio *VAR_12 = VAR_6->devs[VAR_7].bio;
   VAR_8 = VAR_5->mirrors[VAR_11].rdev;
   if (VAR_12 == VAR_0) {
    FUNC_7(
     VAR_8,
     VAR_6->devs[VAR_7].addr,
     VAR_6->sectors, 0);
    FUNC_8(VAR_8, VAR_5->mddev);
   } else if (VAR_12 != ((void*)0) && VAR_12->bi_status) {
    VAR_10 = 1;
    if (!FUNC_4(VAR_6, VAR_7)) {
     FUNC_2(VAR_5->mddev, VAR_8);
     FUNC_10(VAR_1,
      &VAR_6->state);
    }
    FUNC_8(VAR_8, VAR_5->mddev);
   }
   VAR_12 = VAR_6->devs[VAR_7].repl_bio;
   VAR_8 = VAR_5->mirrors[VAR_11].replacement;
   if (VAR_8 && VAR_12 == VAR_0) {
    FUNC_7(
     VAR_8,
     VAR_6->devs[VAR_7].addr,
     VAR_6->sectors, 0);
    FUNC_8(VAR_8, VAR_5->mddev);
   }
  }
  if (VAR_10) {
   FUNC_11(&VAR_5->device_lock);
   FUNC_1(&VAR_6->retry_list, &VAR_5->bio_end_io_list);
   VAR_5->nr_queued++;
   FUNC_12(&VAR_5->device_lock);




   FUNC_14(&VAR_5->wait_barrier);
   FUNC_3(VAR_5->mddev->thread);
  } else {
   if (FUNC_13(VAR_4,
         &VAR_6->state))
    FUNC_0(VAR_6);
   FUNC_6(VAR_6);
  }
 }
}
