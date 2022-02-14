
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r10conf {TYPE_4__* mirrors; } ;
struct r10bio {TYPE_1__* devs; int state; } ;
struct mddev {struct r10conf* private; } ;
struct bio {scalar_t__ bi_end_io; } ;
struct TYPE_8__ {TYPE_3__* replacement; TYPE_2__* rdev; } ;
struct TYPE_7__ {int bdev; int nr_pending; } ;
struct TYPE_6__ {int bdev; int nr_pending; } ;
struct TYPE_5__ {int devnum; struct bio* repl_bio; struct bio* bio; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct r10bio*) ;
 int FUNC_3 (struct r10bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct mddev *VAR_1, struct r10bio *VAR_2)
{
 struct r10conf *VAR_3 = VAR_1->private;
 int VAR_4;
 struct bio *VAR_5, *VAR_6;

 if (!FUNC_6(VAR_0, &VAR_2->state)) {
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
  return;
 }





 VAR_4 = VAR_2->devs[1].devnum;
 VAR_5 = VAR_2->devs[1].bio;
 VAR_6 = VAR_2->devs[1].repl_bio;




 if (VAR_6 && !VAR_6->bi_end_io)
  VAR_6 = ((void*)0);
 if (VAR_5->bi_end_io) {
  FUNC_0(&VAR_3->mirrors[VAR_4].rdev->nr_pending);
  FUNC_5(VAR_3->mirrors[VAR_4].rdev->bdev, FUNC_1(VAR_5));
  FUNC_4(VAR_5);
 }
 if (VAR_6) {
  FUNC_0(&VAR_3->mirrors[VAR_4].replacement->nr_pending);
  FUNC_5(VAR_3->mirrors[VAR_4].replacement->bdev,
        FUNC_1(VAR_6));
  FUNC_4(VAR_6);
 }
}
