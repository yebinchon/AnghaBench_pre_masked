
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {int disks; int state; int sector; TYPE_2__* dev; } ;
struct r5conf {TYPE_1__* mddev; } ;
struct TYPE_4__ {int flags; scalar_t__ written; } ;
struct TYPE_3__ {int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (struct r5conf*,TYPE_2__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct r5conf *VAR_3,
      struct stripe_head *VAR_4, int VAR_5)
{
 int VAR_6;

 for (VAR_6 = VAR_4->disks; VAR_6--; ) {
  if (VAR_4->dev[VAR_6].written) {
   FUNC_2(VAR_0, &VAR_4->dev[VAR_6].flags);
   FUNC_1(VAR_3, &VAR_4->dev[VAR_6]);
   FUNC_0(VAR_3->mddev->bitmap, VAR_4->sector,
        VAR_2,
        !FUNC_3(VAR_1, &VAR_4->state),
        0);
  }
 }
}
