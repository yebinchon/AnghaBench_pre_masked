
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int hash_lock_index; int count; int release_list; int state; struct r5conf* raid_conf; } ;
struct r5conf {int device_lock; TYPE_1__* mddev; int released_stripes; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int thread; } ;


 int FUNC_0 (struct list_head*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 scalar_t__ FUNC_2 (int *,int *,unsigned long) ;
 int FUNC_3 (struct r5conf*,struct stripe_head*,struct list_head*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct r5conf*,struct list_head*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct stripe_head *VAR_1)
{
 struct r5conf *VAR_2 = VAR_1->raid_conf;
 unsigned long VAR_3;
 struct list_head VAR_4;
 int VAR_5;
 bool VAR_6;



 if (FUNC_1(&VAR_1->count, -1, 1))
  return;

 if (FUNC_9(!VAR_2->mddev->thread) ||
  FUNC_8(VAR_0, &VAR_1->state))
  goto slow_path;
 VAR_6 = FUNC_4(&VAR_1->release_list, &VAR_2->released_stripes);
 if (VAR_6)
  FUNC_5(VAR_2->mddev->thread);
 return;
slow_path:

 if (FUNC_2(&VAR_1->count, &VAR_2->device_lock, VAR_3)) {
  FUNC_0(&VAR_4);
  VAR_5 = VAR_1->hash_lock_index;
  FUNC_3(VAR_2, VAR_1, &VAR_4);
  FUNC_7(&VAR_2->device_lock, VAR_3);
  FUNC_6(VAR_2, &VAR_4, VAR_5);
 }
}
