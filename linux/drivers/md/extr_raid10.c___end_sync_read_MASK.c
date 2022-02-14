
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r10conf {int mddev; TYPE_1__* mirrors; } ;
struct r10bio {int remaining; int state; int sectors; TYPE_2__* mddev; } ;
struct bio {int bi_status; } ;
struct TYPE_6__ {int corrected_errors; } ;
struct TYPE_5__ {struct r10conf* private; } ;
struct TYPE_4__ {TYPE_3__* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (struct r10bio*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct r10bio *VAR_2, struct bio *VAR_3, int VAR_4)
{
 struct r10conf *VAR_5 = VAR_2->mddev->private;

 if (!VAR_3->bi_status)
  FUNC_4(VAR_1, &VAR_2->state);
 else



  FUNC_0(VAR_2->sectors,
      &VAR_5->mirrors[VAR_4].rdev->corrected_errors);




 FUNC_2(VAR_5->mirrors[VAR_4].rdev, VAR_5->mddev);
 if (FUNC_5(VAR_0, &VAR_2->state) ||
     FUNC_1(&VAR_2->remaining)) {



  FUNC_3(VAR_2);
 }
}
