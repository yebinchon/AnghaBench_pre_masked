
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dev; } ;
struct TYPE_6__ {int offset; int default_offset; } ;
struct mddev {TYPE_3__ bitmap_info; int events; } ;
struct raid_set {TYPE_2__ journal_dev; int raid_type; TYPE_1__* ti; struct mddev md; } ;
struct md_rdev {scalar_t__ raid_disk; scalar_t__ saved_raid_disk; void* new_data_offset; void* data_offset; int flags; void* recovery_offset; void* sectors; int sb_page; } ;
struct dm_raid_superblock {int new_data_offset; int data_offset; int disk_recovery_offset; int sectors; int compat_features; scalar_t__ incompat_features; } ;
struct TYPE_4__ {char* error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 struct dm_raid_superblock* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;
 int FUNC_5 (struct raid_set*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (struct raid_set*,struct md_rdev*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct raid_set *VAR_6, struct md_rdev *VAR_7)
{
 struct mddev *VAR_8 = &VAR_6->md;
 struct dm_raid_superblock *VAR_9;

 if (FUNC_4(VAR_6) || !VAR_7->sb_page || VAR_7->raid_disk < 0)
  return 0;

 VAR_9 = FUNC_3(VAR_7->sb_page);





 if (!VAR_8->events && FUNC_8(VAR_6, VAR_7))
  return -VAR_0;

 if (FUNC_1(VAR_9->compat_features) &&
     FUNC_1(VAR_9->compat_features) != VAR_1) {
  VAR_6->ti->error = "Unable to assemble array: Unknown flag(s) in compatible feature flags";
  return -VAR_0;
 }

 if (VAR_9->incompat_features) {
  VAR_6->ti->error = "Unable to assemble array: No incompatible feature flags supported yet";
  return -VAR_0;
 }


 VAR_8->bitmap_info.offset = (FUNC_6(VAR_6->raid_type) || VAR_6->journal_dev.dev) ? 0 : FUNC_10(4096);
 VAR_8->bitmap_info.default_offset = VAR_8->bitmap_info.offset;

 if (!FUNC_9(VAR_3, &VAR_7->flags)) {





  if (FUNC_1(VAR_9->compat_features) & VAR_1)
   VAR_7->sectors = FUNC_2(VAR_9->sectors);

  VAR_7->recovery_offset = FUNC_2(VAR_9->disk_recovery_offset);
  if (VAR_7->recovery_offset == VAR_5)
   FUNC_7(VAR_4, &VAR_7->flags);




  else if (!FUNC_5(VAR_6))
   FUNC_0(VAR_4, &VAR_7->flags);
 }




 if (FUNC_9(VAR_2, &VAR_7->flags)) {
  VAR_7->recovery_offset = 0;
  FUNC_0(VAR_4, &VAR_7->flags);
  VAR_7->saved_raid_disk = VAR_7->raid_disk;
 }


 VAR_7->data_offset = FUNC_2(VAR_9->data_offset);
 VAR_7->new_data_offset = FUNC_2(VAR_9->new_data_offset);

 return 0;
}
