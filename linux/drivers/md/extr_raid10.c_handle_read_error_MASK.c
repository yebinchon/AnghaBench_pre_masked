
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {int dummy; } ;
struct r10bio {int read_slot; int master_bio; scalar_t__ state; TYPE_1__* devs; } ;
struct mddev {scalar_t__ ro; struct r10conf* private; } ;
struct md_rdev {int flags; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct bio* bio; struct md_rdev* rdev; } ;


 int VAR_0 ;
 struct bio* VAR_1 ;
 int FUNC_0 (struct r10conf*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct r10conf*,struct mddev*,struct r10bio*) ;
 int FUNC_3 (struct r10conf*,int) ;
 int FUNC_4 (struct mddev*,struct md_rdev*) ;
 int FUNC_5 (struct mddev*,int ,struct r10bio*) ;
 int FUNC_6 (struct md_rdev*,struct mddev*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct r10conf*) ;

__attribute__((used)) static void FUNC_9(struct mddev *VAR_2, struct r10bio *VAR_3)
{
 int VAR_4 = VAR_3->read_slot;
 struct bio *VAR_5;
 struct r10conf *VAR_6 = VAR_2->private;
 struct md_rdev *VAR_7 = VAR_3->devs[VAR_4].rdev;
 VAR_5 = VAR_3->devs[VAR_4].bio;
 FUNC_1(VAR_5);
 VAR_3->devs[VAR_4].bio = ((void*)0);

 if (VAR_2->ro)
  VAR_3->devs[VAR_4].bio = VAR_1;
 else if (!FUNC_7(VAR_0, &VAR_7->flags)) {
  FUNC_3(VAR_6, 1);
  FUNC_2(VAR_6, VAR_2, VAR_3);
  FUNC_8(VAR_6);
 } else
  FUNC_4(VAR_2, VAR_7);

 FUNC_6(VAR_7, VAR_2);
 FUNC_0(VAR_6);
 VAR_3->state = 0;
 FUNC_5(VAR_2, VAR_3->master_bio, VAR_3);
}
