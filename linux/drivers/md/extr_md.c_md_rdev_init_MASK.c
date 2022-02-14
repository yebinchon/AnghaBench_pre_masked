
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int desc_nr; int saved_raid_disk; int raid_disk; int badblocks; int blocked_wait; int same_set; int corrected_errors; int read_errors; int nr_pending; int * bb_page; scalar_t__ sb_loaded; scalar_t__ last_read_error; scalar_t__ sb_events; scalar_t__ new_data_offset; scalar_t__ data_offset; scalar_t__ flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct md_rdev *VAR_0)
{
 VAR_0->desc_nr = -1;
 VAR_0->saved_raid_disk = -1;
 VAR_0->raid_disk = -1;
 VAR_0->flags = 0;
 VAR_0->data_offset = 0;
 VAR_0->new_data_offset = 0;
 VAR_0->sb_events = 0;
 VAR_0->last_read_error = 0;
 VAR_0->sb_loaded = 0;
 VAR_0->bb_page = ((void*)0);
 FUNC_1(&VAR_0->nr_pending, 0);
 FUNC_1(&VAR_0->read_errors, 0);
 FUNC_1(&VAR_0->corrected_errors, 0);

 FUNC_0(&VAR_0->same_set);
 FUNC_3(&VAR_0->blocked_wait);





 return FUNC_2(&VAR_0->badblocks, 0);
}
