
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int count; TYPE_1__* group; int lru; int state; } ;
struct r5conf {scalar_t__ quiesce; int max_nr_stripes; int * hash_locks; int device_lock; int empty_inactive_list_nr; int * inactive_list; int active_stripes; int cache_state; int wait_for_stripe; int log; scalar_t__ generation; int wait_for_quiescent; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int stripes_cnt; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct stripe_head* FUNC_1 (struct r5conf*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 struct stripe_head* FUNC_6 (struct r5conf*,int) ;
 int FUNC_7 (struct stripe_head*,scalar_t__,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char*,unsigned long long) ;
 int FUNC_11 (struct r5conf*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (int ,int,int ) ;

struct stripe_head *
FUNC_21(struct r5conf *VAR_5, sector_t VAR_6,
   int VAR_7, int VAR_8, int VAR_9)
{
 struct stripe_head *VAR_10;
 int VAR_11 = FUNC_18(VAR_6);
 int VAR_12;

 FUNC_10("get_stripe, sector %llu\n", (unsigned long long)VAR_6);

 FUNC_15(VAR_5->hash_locks + VAR_11);

 do {
  FUNC_20(VAR_5->wait_for_quiescent,
        VAR_5->quiesce == 0 || VAR_9,
        *(VAR_5->hash_locks + VAR_11));
  VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_5->generation - VAR_7);
  if (!VAR_10) {
   if (!FUNC_19(VAR_2, &VAR_5->cache_state)) {
    VAR_10 = FUNC_6(VAR_5, VAR_11);
    if (!VAR_10 && !FUNC_19(VAR_1,
           &VAR_5->cache_state))
     FUNC_13(VAR_0,
      &VAR_5->cache_state);
   }
   if (VAR_8 && VAR_10 == ((void*)0))
    break;

   FUNC_11(VAR_5);
   if (!VAR_10) {
    FUNC_13(VAR_2,
     &VAR_5->cache_state);
    FUNC_12(VAR_5->log, 0);
    FUNC_20(
     VAR_5->wait_for_stripe,
     !FUNC_9(VAR_5->inactive_list + VAR_11) &&
     (FUNC_4(&VAR_5->active_stripes)
      < (VAR_5->max_nr_stripes * 3 / 4)
      || !FUNC_19(VAR_2,
            &VAR_5->cache_state)),
     *(VAR_5->hash_locks + VAR_11));
    FUNC_5(VAR_2,
       &VAR_5->cache_state);
   } else {
    FUNC_7(VAR_10, VAR_6, VAR_7);
    FUNC_2(&VAR_10->count);
   }
  } else if (!FUNC_3(&VAR_10->count)) {
   FUNC_14(&VAR_5->device_lock);
   if (!FUNC_4(&VAR_10->count)) {
    if (!FUNC_19(VAR_4, &VAR_10->state))
     FUNC_2(&VAR_5->active_stripes);
    FUNC_0(FUNC_9(&VAR_10->lru) &&
           !FUNC_19(VAR_3, &VAR_10->state));
    VAR_12 = 0;
    if (!FUNC_9(VAR_5->inactive_list + VAR_11))
     VAR_12 = 1;
    FUNC_8(&VAR_10->lru);
    if (FUNC_9(VAR_5->inactive_list + VAR_11) && VAR_12)
     FUNC_2(&VAR_5->empty_inactive_list_nr);
    if (VAR_10->group) {
     VAR_10->group->stripes_cnt--;
     VAR_10->group = ((void*)0);
    }
   }
   FUNC_2(&VAR_10->count);
   FUNC_16(&VAR_5->device_lock);
  }
 } while (VAR_10 == ((void*)0));

 FUNC_17(VAR_5->hash_locks + VAR_11);
 return VAR_10;
}
