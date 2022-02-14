
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r10conf {int copies; TYPE_1__* mirrors; } ;
struct r10bio {int remaining; int sectors; TYPE_2__* devs; int state; } ;
struct mddev {struct r10conf* private; } ;
struct md_rdev {int nr_pending; int flags; } ;
struct bio {int * bi_next; } ;
struct TYPE_4__ {int devnum; struct bio* bio; struct bio* repl_bio; } ;
struct TYPE_3__ {int rdev; int replacement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct r10bio*) ;
 int FUNC_3 (struct bio*) ;
 scalar_t__ FUNC_4 (struct mddev*,struct r10bio*) ;
 int FUNC_5 (struct mddev*,int ,int ) ;
 int FUNC_6 (struct bio*,int ) ;
 struct md_rdev* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct mddev *VAR_2, struct r10bio *VAR_3)
{





 struct r10conf *VAR_4 = VAR_2->private;
 int VAR_5;

 if (!FUNC_10(VAR_1, &VAR_3->state))
  if (FUNC_4(VAR_2, VAR_3) < 0) {

   FUNC_5(VAR_2, VAR_3->sectors, 0);
   return;
  }




 FUNC_1(&VAR_3->remaining, 1);
 for (VAR_5 = 0; VAR_5 < VAR_4->copies*2; VAR_5++) {
  struct bio *VAR_6;
  int VAR_7 = VAR_3->devs[VAR_5/2].devnum;
  struct md_rdev *VAR_8;
  FUNC_8();
  if (VAR_5&1) {
   VAR_8 = FUNC_7(VAR_4->mirrors[VAR_7].replacement);
   VAR_6 = VAR_3->devs[VAR_5/2].repl_bio;
  } else {
   VAR_8 = FUNC_7(VAR_4->mirrors[VAR_7].rdev);
   VAR_6 = VAR_3->devs[VAR_5/2].bio;
  }
  if (!VAR_8 || FUNC_10(VAR_0, &VAR_8->flags)) {
   FUNC_9();
   continue;
  }
  FUNC_0(&VAR_8->nr_pending);
  FUNC_9();
  FUNC_6(VAR_6, VAR_3->sectors);
  FUNC_0(&VAR_3->remaining);
  VAR_6->bi_next = ((void*)0);
  FUNC_3(VAR_6);
 }
 FUNC_2(VAR_3);
}
