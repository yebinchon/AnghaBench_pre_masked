
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int default_offset; int default_space; scalar_t__ offset; } ;
struct mddev {size_t major_version; int persistent; scalar_t__ level; int dev_sectors; scalar_t__ raid_disks; int layout; int chunk_sectors; scalar_t__ new_level; int new_chunk_sectors; int new_layout; scalar_t__ reshape_backwards; scalar_t__ delta_disks; int uuid; void* reshape_position; TYPE_1__ bitmap_info; scalar_t__ sb_flags; scalar_t__ flags; int max_disks; scalar_t__ external; void* recovery_cp; scalar_t__* clevel; void* ctime; int patch_version; int minor_version; } ;
typedef int sector_t ;
struct TYPE_7__ {scalar_t__ raid_disks; size_t major_version; scalar_t__ level; int state; int layout; int chunk_size; int not_persistent; scalar_t__ size; int patch_version; int minor_version; } ;
typedef TYPE_2__ mdu_array_info_t ;
struct TYPE_8__ {int * name; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 () ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,scalar_t__*) ;
 TYPE_3__* VAR_9 ;

__attribute__((used)) static int FUNC_5(struct mddev *VAR_10, mdu_array_info_t *VAR_11)
{

 if (VAR_11->raid_disks == 0) {

  if (VAR_11->major_version < 0 ||
      VAR_11->major_version >= FUNC_0(VAR_9) ||
      VAR_9[VAR_11->major_version].name == ((void*)0)) {

   FUNC_3("md: superblock version %d not known\n",
    VAR_11->major_version);
   return -VAR_0;
  }
  VAR_10->major_version = VAR_11->major_version;
  VAR_10->minor_version = VAR_11->minor_version;
  VAR_10->patch_version = VAR_11->patch_version;
  VAR_10->persistent = !VAR_11->not_persistent;



  VAR_10->ctime = FUNC_2();
  return 0;
 }
 VAR_10->major_version = VAR_1;
 VAR_10->minor_version = VAR_2;
 VAR_10->patch_version = VAR_3;
 VAR_10->ctime = FUNC_2();

 VAR_10->level = VAR_11->level;
 VAR_10->clevel[0] = 0;
 VAR_10->dev_sectors = 2 * (sector_t)VAR_11->size;
 VAR_10->raid_disks = VAR_11->raid_disks;



 if (VAR_11->state & (1<<VAR_6))
  VAR_10->recovery_cp = VAR_8;
 else
  VAR_10->recovery_cp = 0;
 VAR_10->persistent = ! VAR_11->not_persistent;
 VAR_10->external = 0;

 VAR_10->layout = VAR_11->layout;
 if (VAR_10->level == 0)

  VAR_10->layout = -1;
 VAR_10->chunk_sectors = VAR_11->chunk_size >> 9;

 if (VAR_10->persistent) {
  VAR_10->max_disks = VAR_7;
  VAR_10->flags = 0;
  VAR_10->sb_flags = 0;
 }
 FUNC_4(VAR_5, &VAR_10->sb_flags);

 VAR_10->bitmap_info.default_offset = VAR_4 >> 9;
 VAR_10->bitmap_info.default_space = 64*2 - (VAR_4 >> 9);
 VAR_10->bitmap_info.offset = 0;

 VAR_10->reshape_position = VAR_8;




 FUNC_1(VAR_10->uuid, 16);

 VAR_10->new_level = VAR_10->level;
 VAR_10->new_chunk_sectors = VAR_10->chunk_sectors;
 VAR_10->new_layout = VAR_10->layout;
 VAR_10->delta_disks = 0;
 VAR_10->reshape_backwards = 0;

 return 0;
}
