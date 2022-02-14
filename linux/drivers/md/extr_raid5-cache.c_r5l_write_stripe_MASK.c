
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {size_t pd_idx; int disks; scalar_t__ qd_idx; scalar_t__ log_start; int log_list; int count; int state; TYPE_1__* dev; scalar_t__ log_io; struct r5conf* raid_conf; } ;
struct r5l_log {scalar_t__ r5c_journal_mode; scalar_t__ last_checkpoint; int io_mutex; int io_list_lock; int no_mem_stripes; int uuid_checksum; } ;
struct r5conf {int cache_state; } ;
struct TYPE_2__ {int log_checksum; int page; int flags; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,void*,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct r5l_log*,struct stripe_head*) ;
 int FUNC_11 (struct r5l_log*,int) ;
 int FUNC_12 (struct r5l_log*,struct stripe_head*,int,int) ;
 int FUNC_13 (struct r5l_log*,int) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;

int FUNC_18(struct r5l_log *VAR_12, struct stripe_head *VAR_13)
{
 struct r5conf *VAR_14 = VAR_13->raid_conf;
 int VAR_15 = 0;
 int VAR_16, VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20 = 0;
 bool VAR_21 = 0;

 if (!VAR_12)
  return -VAR_0;

 if (VAR_13->log_io || !FUNC_17(VAR_7, &VAR_13->dev[VAR_13->pd_idx].flags) ||
     FUNC_17(VAR_11, &VAR_13->state)) {

  FUNC_3(VAR_9, &VAR_13->state);
  return -VAR_0;
 }

 FUNC_1(FUNC_17(VAR_10, &VAR_13->state));

 for (VAR_19 = 0; VAR_19 < VAR_13->disks; VAR_19++) {
  void *VAR_22;

  if (!FUNC_17(VAR_7, &VAR_13->dev[VAR_19].flags) ||
      FUNC_17(VAR_6, &VAR_13->dev[VAR_19].flags))
   continue;

  VAR_15++;

  if (FUNC_17(VAR_9, &VAR_13->state))
   continue;
  VAR_22 = FUNC_5(VAR_13->dev[VAR_19].page);
  VAR_13->dev[VAR_19].log_checksum = FUNC_4(VAR_12->uuid_checksum,
          VAR_22, VAR_3);
  FUNC_6(VAR_22);
 }
 VAR_17 = 1 + !!(VAR_13->qd_idx >= 0);
 VAR_16 = VAR_15 - VAR_17;

 FUNC_14(VAR_9, &VAR_13->state);




 FUNC_3(VAR_8, &VAR_13->state);
 FUNC_2(&VAR_13->count);

 FUNC_8(&VAR_12->io_mutex);

 VAR_18 = (1 + VAR_15) << (VAR_2 - 9);

 if (VAR_12->r5c_journal_mode == VAR_4) {
  if (!FUNC_11(VAR_12, VAR_18)) {
   FUNC_10(VAR_12, VAR_13);
   VAR_21 = 1;
  } else {
   VAR_20 = FUNC_12(VAR_12, VAR_13, VAR_16, VAR_17);
   if (VAR_20) {
    FUNC_15(&VAR_12->io_list_lock);
    FUNC_7(&VAR_13->log_list,
           &VAR_12->no_mem_stripes);
    FUNC_16(&VAR_12->io_list_lock);
   }
  }
 } else {




  if (FUNC_17(VAR_5, &VAR_14->cache_state) &&
      VAR_13->log_start == VAR_1) {
   FUNC_10(VAR_12, VAR_13);
   VAR_21 = 1;
   VAR_18 = 0;
  } else if (!FUNC_11(VAR_12, VAR_18)) {
   if (VAR_13->log_start == VAR_12->last_checkpoint)
    FUNC_0();
   else
    FUNC_10(VAR_12, VAR_13);
  } else {
   VAR_20 = FUNC_12(VAR_12, VAR_13, VAR_16, VAR_17);
   if (VAR_20) {
    FUNC_15(&VAR_12->io_list_lock);
    FUNC_7(&VAR_13->log_list,
           &VAR_12->no_mem_stripes);
    FUNC_16(&VAR_12->io_list_lock);
   }
  }
 }

 FUNC_9(&VAR_12->io_mutex);
 if (VAR_21)
  FUNC_13(VAR_12, VAR_18);
 return 0;
}
