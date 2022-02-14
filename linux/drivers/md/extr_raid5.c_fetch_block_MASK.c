
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head_state {int uptodate; int failed; int* failed_num; int req_compute; int syncing; int locked; int ops_request; } ;
struct TYPE_2__ {int target; int target2; } ;
struct stripe_head {int batch_head; scalar_t__ qd_idx; int pd_idx; TYPE_1__ ops; struct r5dev* dev; int state; scalar_t__ sector; } ;
struct r5dev {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct stripe_head*,struct stripe_head_state*,int,int) ;
 int FUNC_2 (char*,int,int,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct stripe_head *VAR_7, struct stripe_head_state *VAR_8,
         int VAR_9, int VAR_10)
{
 struct r5dev *VAR_11 = &VAR_7->dev[VAR_9];


 if (FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10)) {



  FUNC_0(FUNC_4(VAR_3, &VAR_11->flags));
  FUNC_0(FUNC_4(VAR_4, &VAR_11->flags));
  FUNC_0(VAR_7->batch_head);
  if ((VAR_8->uptodate == VAR_10 - 1) &&
      ((VAR_7->qd_idx >= 0 && VAR_7->pd_idx == VAR_9) ||
      (VAR_8->failed && (VAR_9 == VAR_8->failed_num[0] ||
       VAR_9 == VAR_8->failed_num[1])))) {



   FUNC_2("Computing stripe %llu block %d\n",
          (unsigned long long)VAR_7->sector, VAR_9);
   FUNC_3(VAR_5, &VAR_7->state);
   FUNC_3(VAR_6, &VAR_8->ops_request);
   FUNC_3(VAR_3, &VAR_11->flags);
   VAR_7->ops.target = VAR_9;
   VAR_7->ops.target2 = -1;
   VAR_8->req_compute = 1;






   VAR_8->uptodate++;
   return 1;
  } else if (VAR_8->uptodate == VAR_10-2 && VAR_8->failed >= 2) {



   int VAR_12;
   for (VAR_12 = VAR_10; VAR_12--; ) {
    if (VAR_12 == VAR_9)
     continue;
    if (!FUNC_4(VAR_2,
          &VAR_7->dev[VAR_12].flags))
     break;
   }
   FUNC_0(VAR_12 < 0);
   FUNC_2("Computing stripe %llu blocks %d,%d\n",
          (unsigned long long)VAR_7->sector,
          VAR_9, VAR_12);
   FUNC_3(VAR_5, &VAR_7->state);
   FUNC_3(VAR_6, &VAR_8->ops_request);
   FUNC_3(VAR_3, &VAR_7->dev[VAR_9].flags);
   FUNC_3(VAR_3, &VAR_7->dev[VAR_12].flags);
   VAR_7->ops.target = VAR_9;
   VAR_7->ops.target2 = VAR_12;
   VAR_8->uptodate += 2;
   VAR_8->req_compute = 1;
   return 1;
  } else if (FUNC_4(VAR_0, &VAR_11->flags)) {
   FUNC_3(VAR_1, &VAR_11->flags);
   FUNC_3(VAR_4, &VAR_11->flags);
   VAR_8->locked++;
   FUNC_2("Reading block %d (sync=%d)\n",
    VAR_9, VAR_8->syncing);
  }
 }

 return 0;
}
