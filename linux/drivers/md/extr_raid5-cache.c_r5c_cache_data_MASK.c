
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int disks; scalar_t__ log_start; int log_list; int count; int state; TYPE_1__* dev; struct r5conf* raid_conf; } ;
struct r5l_log {scalar_t__ last_checkpoint; int io_mutex; int io_list_lock; int no_mem_stripes; int uuid_checksum; } ;
struct r5conf {int cache_state; } ;
struct TYPE_2__ {int log_checksum; int page; int flags; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,void*,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct r5l_log*,struct stripe_head*) ;
 int FUNC_12 (struct r5l_log*,int) ;
 int FUNC_13 (struct r5l_log*,struct stripe_head*,int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;

int FUNC_17(struct r5l_log *VAR_6, struct stripe_head *VAR_7)
{
 struct r5conf *VAR_8 = VAR_7->raid_conf;
 int VAR_9 = 0;
 int VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 FUNC_1(!VAR_6);

 for (VAR_11 = 0; VAR_11 < VAR_7->disks; VAR_11++) {
  void *VAR_13;

  if (!FUNC_16(VAR_4, &VAR_7->dev[VAR_11].flags))
   continue;
  VAR_13 = FUNC_6(VAR_7->dev[VAR_11].page);
  VAR_7->dev[VAR_11].log_checksum = FUNC_5(VAR_6->uuid_checksum,
          VAR_13, VAR_2);
  FUNC_7(VAR_13);
  VAR_9++;
 }
 FUNC_2(VAR_9 == 0);





 FUNC_4(VAR_5, &VAR_7->state);
 FUNC_3(&VAR_7->count);

 FUNC_9(&VAR_6->io_mutex);

 VAR_10 = (1 + VAR_9) << (VAR_1 - 9);

 if (FUNC_16(VAR_3, &VAR_8->cache_state) &&
     VAR_7->log_start == VAR_0)
  FUNC_11(VAR_6, VAR_7);
 else if (!FUNC_12(VAR_6, VAR_10)) {
  if (VAR_7->log_start == VAR_6->last_checkpoint)
   FUNC_0();
  else
   FUNC_11(VAR_6, VAR_7);
 } else {
  VAR_12 = FUNC_13(VAR_6, VAR_7, VAR_9, 0);
  if (VAR_12) {
   FUNC_14(&VAR_6->io_list_lock);
   FUNC_8(&VAR_7->log_list, &VAR_6->no_mem_stripes);
   FUNC_15(&VAR_6->io_list_lock);
  }
 }

 FUNC_10(&VAR_6->io_mutex);
 return 0;
}
