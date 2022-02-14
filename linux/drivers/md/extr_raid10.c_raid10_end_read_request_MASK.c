
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r10conf {int mddev; } ;
struct r10bio {int read_slot; int state; scalar_t__ sector; TYPE_2__* devs; TYPE_1__* mddev; } ;
struct md_rdev {int bdev; int raid_disk; } ;
struct bio {struct r10bio* bi_private; int bi_status; } ;
struct TYPE_4__ {struct md_rdev* rdev; } ;
struct TYPE_3__ {struct r10conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct r10conf*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ,unsigned long long) ;
 int FUNC_4 (struct r10bio*) ;
 int FUNC_5 (struct md_rdev*,int ) ;
 int FUNC_6 (struct r10bio*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int,struct r10bio*) ;

__attribute__((used)) static void FUNC_10(struct bio *VAR_4)
{
 int VAR_5 = !VAR_4->bi_status;
 struct r10bio *VAR_6 = VAR_4->bi_private;
 int VAR_7;
 struct md_rdev *VAR_8;
 struct r10conf *VAR_9 = VAR_6->mddev->private;

 VAR_7 = VAR_6->read_slot;
 VAR_8 = VAR_6->devs[VAR_7].rdev;



 FUNC_9(VAR_7, VAR_6);

 if (VAR_5) {
  FUNC_7(VAR_3, &VAR_6->state);
 } else {





  if (!FUNC_0(VAR_9, FUNC_8(VAR_1, &VAR_6->state),
        VAR_8->raid_disk))
   VAR_5 = 1;
 }
 if (VAR_5) {
  FUNC_4(VAR_6);
  FUNC_5(VAR_8, VAR_9->mddev);
 } else {



  char VAR_10[VAR_0];
  FUNC_3("md/raid10:%s: %s: rescheduling sector %llu\n",
       FUNC_2(VAR_9->mddev),
       FUNC_1(VAR_8->bdev, VAR_10),
       (unsigned long long)VAR_6->sector);
  FUNC_7(VAR_2, &VAR_6->state);
  FUNC_6(VAR_6);
 }
}
