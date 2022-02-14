
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {int disks; int qd_idx; int pd_idx; TYPE_2__* dev; int sector; } ;
struct r5l_recovery_ctx {int data_parity_stripes; } ;
struct r5conf {TYPE_1__* disks; } ;
struct md_rdev {int mddev; int nr_pending; } ;
struct TYPE_4__ {int page; int flags; } ;
struct TYPE_3__ {int replacement; int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct stripe_head*) ;
 struct md_rdev* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct md_rdev*,int ) ;
 int FUNC_6 (struct md_rdev*,int ,int ,int ,int ,int ,int) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(struct r5conf *VAR_3,
          struct stripe_head *VAR_4,
          struct r5l_recovery_ctx *VAR_5)
{
 struct md_rdev *VAR_6, *VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4->disks; VAR_8++) {
  if (!FUNC_7(VAR_1, &VAR_4->dev[VAR_8].flags))
   continue;
  if (VAR_8 == VAR_4->qd_idx || VAR_8 == VAR_4->pd_idx)
   continue;
  VAR_9++;
 }






 if (VAR_9 == 0)
  goto out;

 for (VAR_8 = 0; VAR_8 < VAR_4->disks; VAR_8++) {
  if (!FUNC_7(VAR_1, &VAR_4->dev[VAR_8].flags))
   continue;


  FUNC_3();
  VAR_6 = FUNC_2(VAR_3->disks[VAR_8].rdev);
  if (VAR_6) {
   FUNC_0(&VAR_6->nr_pending);
   FUNC_4();
   FUNC_6(VAR_6, VAR_4->sector, VAR_0,
         VAR_4->dev[VAR_8].page, VAR_2, 0,
         0);
   FUNC_5(VAR_6, VAR_6->mddev);
   FUNC_3();
  }
  VAR_7 = FUNC_2(VAR_3->disks[VAR_8].replacement);
  if (VAR_7) {
   FUNC_0(&VAR_7->nr_pending);
   FUNC_4();
   FUNC_6(VAR_7, VAR_4->sector, VAR_0,
         VAR_4->dev[VAR_8].page, VAR_2, 0,
         0);
   FUNC_5(VAR_7, VAR_7->mddev);
   FUNC_3();
  }
  FUNC_4();
 }
 VAR_5->data_parity_stripes++;
out:
 FUNC_1(VAR_4);
}
