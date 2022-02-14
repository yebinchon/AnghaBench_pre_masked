
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdp_superblock_1 {int devflags; int feature_map; int recovery_offset; int journal_tail; int * dev_roles; int max_dev; int new_chunk; int new_layout; int new_level; int delta_disks; int reshape_position; int bitmap_offset; int set_uuid; int resync_offset; int size; int raid_disks; int layout; int level; int utime; int ctime; int chunksize; int events; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ space; int default_offset; int default_space; int * file; } ;
struct mddev {int raid_disks; int major_version; int chunk_sectors; int level; int layout; scalar_t__ events; int reshape_backwards; int max_disks; scalar_t__ minor_version; int delta_disks; int new_level; int new_layout; int new_chunk_sectors; int recovery; TYPE_1__* bitmap; int * pers; int flags; void* reshape_position; TYPE_2__ bitmap_info; int uuid; void* recovery_cp; void* dev_sectors; scalar_t__* clevel; void* utime; void* ctime; scalar_t__ external; scalar_t__ patch_version; } ;
struct md_rdev {int raid_disk; int desc_nr; int saved_raid_disk; int flags; void* recovery_offset; void* journal_tail; int sb_page; } ;
typedef scalar_t__ __u64 ;
typedef scalar_t__ __s32 ;
struct TYPE_3__ {scalar_t__ events_cleared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct mdp_superblock_1* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct mddev *VAR_26, struct md_rdev *VAR_27)
{
 struct mdp_superblock_1 *VAR_28 = FUNC_5(VAR_27->sb_page);
 __u64 VAR_29 = FUNC_3(VAR_28->events);

 VAR_27->raid_disk = -1;
 FUNC_0(VAR_4, &VAR_27->flags);
 FUNC_0(VAR_5, &VAR_27->flags);
 FUNC_0(VAR_0, &VAR_27->flags);
 FUNC_0(VAR_24, &VAR_27->flags);

 if (VAR_26->raid_disks == 0) {
  VAR_26->major_version = 1;
  VAR_26->patch_version = 0;
  VAR_26->external = 0;
  VAR_26->chunk_sectors = FUNC_2(VAR_28->chunksize);
  VAR_26->ctime = FUNC_3(VAR_28->ctime);
  VAR_26->utime = FUNC_3(VAR_28->utime);
  VAR_26->level = FUNC_2(VAR_28->level);
  VAR_26->clevel[0] = 0;
  VAR_26->layout = FUNC_2(VAR_28->layout);
  VAR_26->raid_disks = FUNC_2(VAR_28->raid_disks);
  VAR_26->dev_sectors = FUNC_3(VAR_28->size);
  VAR_26->events = VAR_29;
  VAR_26->bitmap_info.offset = 0;
  VAR_26->bitmap_info.space = 0;



  VAR_26->bitmap_info.default_offset = 1024 >> 9;
  VAR_26->bitmap_info.default_space = (4096-1024) >> 9;
  VAR_26->reshape_backwards = 0;

  VAR_26->recovery_cp = FUNC_3(VAR_28->resync_offset);
  FUNC_4(VAR_26->uuid, VAR_28->set_uuid, 16);

  VAR_26->max_disks = (4096-256)/2;

  if ((FUNC_2(VAR_28->feature_map) & VAR_9) &&
      VAR_26->bitmap_info.file == ((void*)0)) {
   VAR_26->bitmap_info.offset =
    (__s32)FUNC_2(VAR_28->bitmap_offset);





   if (VAR_26->minor_version > 0)
    VAR_26->bitmap_info.space = 0;
   else if (VAR_26->bitmap_info.offset > 0)
    VAR_26->bitmap_info.space =
     8 - VAR_26->bitmap_info.offset;
   else
    VAR_26->bitmap_info.space =
     -VAR_26->bitmap_info.offset;
  }

  if ((FUNC_2(VAR_28->feature_map) & VAR_17)) {
   VAR_26->reshape_position = FUNC_3(VAR_28->reshape_position);
   VAR_26->delta_disks = FUNC_2(VAR_28->delta_disks);
   VAR_26->new_level = FUNC_2(VAR_28->new_level);
   VAR_26->new_layout = FUNC_2(VAR_28->new_layout);
   VAR_26->new_chunk_sectors = FUNC_2(VAR_28->new_chunk);
   if (VAR_26->delta_disks < 0 ||
       (VAR_26->delta_disks == 0 &&
        (FUNC_2(VAR_28->feature_map)
         & VAR_18)))
    VAR_26->reshape_backwards = 1;
  } else {
   VAR_26->reshape_position = VAR_22;
   VAR_26->delta_disks = 0;
   VAR_26->new_level = VAR_26->level;
   VAR_26->new_layout = VAR_26->layout;
   VAR_26->new_chunk_sectors = VAR_26->chunk_sectors;
  }

  if (VAR_26->level == 0 &&
      !(FUNC_2(VAR_28->feature_map) & VAR_13))
   VAR_26->layout = -1;

  if (FUNC_2(VAR_28->feature_map) & VAR_10)
   FUNC_7(VAR_19, &VAR_26->flags);

  if (FUNC_2(VAR_28->feature_map) &
      (VAR_12 | VAR_11)) {
   if (FUNC_2(VAR_28->feature_map) &
       (VAR_9 | VAR_10))
    return -VAR_1;
   if ((FUNC_2(VAR_28->feature_map) & VAR_12) &&
       (FUNC_2(VAR_28->feature_map) &
         VAR_11))
    return -VAR_1;
   FUNC_7(VAR_20, &VAR_26->flags);
  }
 } else if (VAR_26->pers == ((void*)0)) {


  ++VAR_29;
  if (VAR_27->desc_nr >= 0 &&
      VAR_27->desc_nr < FUNC_2(VAR_28->max_dev) &&
      (FUNC_1(VAR_28->dev_roles[VAR_27->desc_nr]) < VAR_8 ||
       FUNC_1(VAR_28->dev_roles[VAR_27->desc_nr]) == 129))
   if (VAR_29 < VAR_26->events)
    return -VAR_1;
 } else if (VAR_26->bitmap) {



  if (VAR_29 < VAR_26->bitmap->events_cleared)
   return 0;
  if (VAR_29 < VAR_26->events)
   FUNC_7(VAR_0, &VAR_27->flags);
 } else {
  if (VAR_29 < VAR_26->events)

   return 0;
 }
 if (VAR_26->level != VAR_7) {
  int VAR_30;
  if (VAR_27->desc_nr < 0 ||
      VAR_27->desc_nr >= FUNC_2(VAR_28->max_dev)) {
   VAR_30 = 128;
   VAR_27->desc_nr = -1;
  } else
   VAR_30 = FUNC_1(VAR_28->dev_roles[VAR_27->desc_nr]);
  switch(VAR_30) {
  case 128:
   break;
  case 130:
   FUNC_7(VAR_4, &VAR_27->flags);
   break;
  case 129:
   if (!(FUNC_2(VAR_28->feature_map) & VAR_10)) {

    FUNC_6("md: journal device provided without journal feature, ignoring the device\n");
    return -VAR_1;
   }
   FUNC_7(VAR_6, &VAR_27->flags);
   VAR_27->journal_tail = FUNC_3(VAR_28->journal_tail);
   VAR_27->raid_disk = 0;
   break;
  default:
   VAR_27->saved_raid_disk = VAR_30;
   if ((FUNC_2(VAR_28->feature_map) &
        VAR_15)) {
    VAR_27->recovery_offset = FUNC_3(VAR_28->recovery_offset);
    if (!(FUNC_2(VAR_28->feature_map) &
          VAR_14))
     VAR_27->saved_raid_disk = -1;
   } else {




    if (!FUNC_8(VAR_21,
           &VAR_26->recovery))
     FUNC_7(VAR_5, &VAR_27->flags);
   }
   VAR_27->raid_disk = VAR_30;
   break;
  }
  if (VAR_28->devflags & VAR_25)
   FUNC_7(VAR_24, &VAR_27->flags);
  if (VAR_28->devflags & VAR_3)
   FUNC_7(VAR_2, &VAR_27->flags);
  if (FUNC_2(VAR_28->feature_map) & VAR_16)
   FUNC_7(VAR_23, &VAR_27->flags);
 } else
  FUNC_7(VAR_5, &VAR_27->flags);

 return 0;
}
