
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head_state {size_t* failed_num; int failed; int to_write; scalar_t__ replacing; scalar_t__ expanding; scalar_t__ syncing; } ;
struct stripe_head {scalar_t__ sector; scalar_t__ pd_idx; scalar_t__ qd_idx; TYPE_2__* raid_conf; int state; struct r5dev* dev; } ;
struct r5dev {int flags; scalar_t__ towrite; scalar_t__ toread; } ;
struct TYPE_4__ {int level; TYPE_1__* mddev; } ;
struct TYPE_3__ {scalar_t__ recovery_cp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct stripe_head*,int) ;

__attribute__((used)) static int FUNC_2(struct stripe_head *VAR_5, struct stripe_head_state *VAR_6,
      int VAR_7, int VAR_8)
{
 struct r5dev *VAR_9 = &VAR_5->dev[VAR_7];
 struct r5dev *VAR_10[2] = { &VAR_5->dev[VAR_6->failed_num[0]],
      &VAR_5->dev[VAR_6->failed_num[1]] };
 int VAR_11;


 if (FUNC_0(VAR_1, &VAR_9->flags) ||
     FUNC_0(VAR_3, &VAR_9->flags))



  return 0;

 if (VAR_9->toread ||
     (VAR_9->towrite && !FUNC_0(VAR_2, &VAR_9->flags)))

  return 1;

 if (VAR_6->syncing || VAR_6->expanding ||
     (VAR_6->replacing && FUNC_1(VAR_5, VAR_7)))



  return 1;

 if ((VAR_6->failed >= 1 && VAR_10[0]->toread) ||
     (VAR_6->failed >= 2 && VAR_10[1]->toread))



  return 1;
 if (!VAR_6->failed || !VAR_6->to_write)
  return 0;

 if (FUNC_0(VAR_0, &VAR_9->flags) &&
     !FUNC_0(VAR_4, &VAR_5->state))





  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_6->failed && VAR_11 < 2; VAR_11++) {
  if (VAR_10[VAR_11]->towrite &&
      !FUNC_0(VAR_3, &VAR_10[VAR_11]->flags) &&
      !FUNC_0(VAR_2, &VAR_10[VAR_11]->flags))





   return 1;
 }
 if (VAR_5->raid_conf->level != 6 &&
     VAR_5->sector < VAR_5->raid_conf->mddev->recovery_cp)

  return 0;
 for (VAR_11 = 0; VAR_11 < VAR_6->failed && VAR_11 < 2; VAR_11++) {
  if (VAR_6->failed_num[VAR_11] != VAR_5->pd_idx &&
      VAR_6->failed_num[VAR_11] != VAR_5->qd_idx &&
      !FUNC_0(VAR_3, &VAR_10[VAR_11]->flags) &&
      !FUNC_0(VAR_2, &VAR_10[VAR_11]->flags))
   return 1;
 }

 return 0;
}
