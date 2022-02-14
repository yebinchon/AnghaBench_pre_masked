
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nodes; scalar_t__ max_write_behind; scalar_t__ daemon_sleep; scalar_t__ chunksize; scalar_t__ default_space; scalar_t__ default_offset; scalar_t__ offset; } ;
struct mddev {TYPE_1__ bitmap_info; int * cluster_info; int * private; scalar_t__ safemode; scalar_t__ degraded; scalar_t__ changed; scalar_t__ in_sync; scalar_t__ recovery; scalar_t__ sync_speed_max; scalar_t__ sync_speed_min; scalar_t__ suspend_hi; scalar_t__ suspend_lo; int resync_mismatches; scalar_t__ curr_resync; scalar_t__ new_chunk_sectors; scalar_t__ new_layout; void* new_level; scalar_t__ reshape_backwards; scalar_t__ delta_disks; scalar_t__ can_decrease_events; scalar_t__ events; scalar_t__ max_disks; scalar_t__ layout; scalar_t__ utime; scalar_t__ ctime; scalar_t__ chunk_sectors; scalar_t__* metadata_type; scalar_t__ ro; scalar_t__ sb_flags; scalar_t__ flags; scalar_t__* clevel; void* level; scalar_t__ persistent; scalar_t__ external; void* reshape_position; void* resync_max; scalar_t__ resync_min; scalar_t__ recovery_cp; scalar_t__ raid_disks; scalar_t__ dev_sectors; scalar_t__ external_size; scalar_t__ array_sectors; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct mddev *VAR_2)
{
 VAR_2->array_sectors = 0;
 VAR_2->external_size = 0;
 VAR_2->dev_sectors = 0;
 VAR_2->raid_disks = 0;
 VAR_2->recovery_cp = 0;
 VAR_2->resync_min = 0;
 VAR_2->resync_max = VAR_1;
 VAR_2->reshape_position = VAR_1;
 VAR_2->external = 0;
 VAR_2->persistent = 0;
 VAR_2->level = VAR_0;
 VAR_2->clevel[0] = 0;
 VAR_2->flags = 0;
 VAR_2->sb_flags = 0;
 VAR_2->ro = 0;
 VAR_2->metadata_type[0] = 0;
 VAR_2->chunk_sectors = 0;
 VAR_2->ctime = VAR_2->utime = 0;
 VAR_2->layout = 0;
 VAR_2->max_disks = 0;
 VAR_2->events = 0;
 VAR_2->can_decrease_events = 0;
 VAR_2->delta_disks = 0;
 VAR_2->reshape_backwards = 0;
 VAR_2->new_level = VAR_0;
 VAR_2->new_layout = 0;
 VAR_2->new_chunk_sectors = 0;
 VAR_2->curr_resync = 0;
 FUNC_0(&VAR_2->resync_mismatches, 0);
 VAR_2->suspend_lo = VAR_2->suspend_hi = 0;
 VAR_2->sync_speed_min = VAR_2->sync_speed_max = 0;
 VAR_2->recovery = 0;
 VAR_2->in_sync = 0;
 VAR_2->changed = 0;
 VAR_2->degraded = 0;
 VAR_2->safemode = 0;
 VAR_2->private = ((void*)0);
 VAR_2->cluster_info = ((void*)0);
 VAR_2->bitmap_info.offset = 0;
 VAR_2->bitmap_info.default_offset = 0;
 VAR_2->bitmap_info.default_space = 0;
 VAR_2->bitmap_info.chunksize = 0;
 VAR_2->bitmap_info.daemon_sleep = 0;
 VAR_2->bitmap_info.max_write_behind = 0;
 VAR_2->bitmap_info.nodes = 0;
}
