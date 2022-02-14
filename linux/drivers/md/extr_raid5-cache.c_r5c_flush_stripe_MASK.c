
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int state; int count; int lru; } ;
struct r5conf {int r5c_flushing_full_stripes; int r5c_flushing_partial_stripes; int active_stripes; int device_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct stripe_head*) ;
 int FUNC_6 (struct stripe_head*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct r5conf *VAR_4, struct stripe_head *VAR_5)
{
 FUNC_0(FUNC_3(&VAR_5->lru));
 FUNC_0(!FUNC_8(VAR_2, &VAR_5->state));
 FUNC_0(FUNC_8(VAR_0, &VAR_5->state));





 FUNC_0(FUNC_8(VAR_1, &VAR_5->state));
 FUNC_4(&VAR_4->device_lock);

 FUNC_2(&VAR_5->lru);
 FUNC_1(&VAR_5->count);

 FUNC_7(VAR_0, &VAR_5->state);
 FUNC_1(&VAR_4->active_stripes);
 FUNC_5(VAR_5);

 if (FUNC_8(VAR_3, &VAR_5->state))
  FUNC_1(&VAR_4->r5c_flushing_partial_stripes);
 else
  FUNC_1(&VAR_4->r5c_flushing_full_stripes);
 FUNC_6(VAR_5);
}
