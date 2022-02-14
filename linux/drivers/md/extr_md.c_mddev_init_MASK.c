
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct mddev {char* last_sync_action; int level; void* resync_max; scalar_t__ resync_min; scalar_t__ reshape_backwards; void* reshape_position; int recovery_wait; int sb_wait; int flush_pending; int lock; int active_io; int openers; int active; int safemode_timer; int all_mddevs; int disks; TYPE_1__ bitmap_info; int reconfig_mutex; int open_mutex; int kobj; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

void FUNC_7(struct mddev *VAR_4)
{
 FUNC_3(&VAR_4->kobj, &VAR_2);
 FUNC_4(&VAR_4->open_mutex);
 FUNC_4(&VAR_4->reconfig_mutex);
 FUNC_4(&VAR_4->bitmap_info.mutex);
 FUNC_0(&VAR_4->disks);
 FUNC_0(&VAR_4->all_mddevs);
 FUNC_6(&VAR_4->safemode_timer, VAR_3, 0);
 FUNC_1(&VAR_4->active, 1);
 FUNC_1(&VAR_4->openers, 0);
 FUNC_1(&VAR_4->active_io, 0);
 FUNC_5(&VAR_4->lock);
 FUNC_1(&VAR_4->flush_pending, 0);
 FUNC_2(&VAR_4->sb_wait);
 FUNC_2(&VAR_4->recovery_wait);
 VAR_4->reshape_position = VAR_1;
 VAR_4->reshape_backwards = 0;
 VAR_4->last_sync_action = "none";
 VAR_4->resync_min = 0;
 VAR_4->resync_max = VAR_1;
 VAR_4->level = VAR_0;
}
