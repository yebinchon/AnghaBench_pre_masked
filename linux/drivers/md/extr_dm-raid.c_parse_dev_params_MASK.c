
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int persistent; int major_version; int recovery_cp; scalar_t__ external; int disks; } ;
struct TYPE_10__ {int same_set; } ;
struct TYPE_11__ {TYPE_3__ rdev; scalar_t__ dev; } ;
struct raid_set {int raid_disks; TYPE_6__* ti; TYPE_5__ md; TYPE_4__ journal_dev; TYPE_2__* dev; } ;
struct dm_arg_set {int dummy; } ;
struct TYPE_14__ {int bdev; } ;
struct TYPE_13__ {char* error; int table; } ;
struct TYPE_8__ {int raid_disk; int flags; int same_set; int bdev; int meta_bdev; int recovery_offset; int sb_page; TYPE_5__* mddev; scalar_t__ new_data_offset; scalar_t__ data_offset; } ;
struct TYPE_9__ {TYPE_1__ rdev; TYPE_7__* data_dev; TYPE_7__* meta_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,char const*,int ,TYPE_7__**) ;
 char* FUNC_2 (struct dm_arg_set*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct raid_set *VAR_4, struct dm_arg_set *VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 const char *VAR_10;


 VAR_10 = FUNC_2(VAR_5);
 if (!VAR_10)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->raid_disks; VAR_6++) {
  VAR_4->dev[VAR_6].rdev.raid_disk = VAR_6;

  VAR_4->dev[VAR_6].meta_dev = ((void*)0);
  VAR_4->dev[VAR_6].data_dev = ((void*)0);





  VAR_4->dev[VAR_6].rdev.data_offset = 0;
  VAR_4->dev[VAR_6].rdev.new_data_offset = 0;
  VAR_4->dev[VAR_6].rdev.mddev = &VAR_4->md;

  VAR_10 = FUNC_2(VAR_5);
  if (!VAR_10)
   return -VAR_0;

  if (FUNC_5(VAR_10, "-")) {
   VAR_9 = FUNC_1(VAR_4->ti, VAR_10, FUNC_3(VAR_4->ti->table),
       &VAR_4->dev[VAR_6].meta_dev);
   if (VAR_9) {
    VAR_4->ti->error = "RAID metadata device lookup failure";
    return VAR_9;
   }

   VAR_4->dev[VAR_6].rdev.sb_page = FUNC_0(VAR_2);
   if (!VAR_4->dev[VAR_6].rdev.sb_page) {
    VAR_4->ti->error = "Failed to allocate superblock page";
    return -VAR_1;
   }
  }

  VAR_10 = FUNC_2(VAR_5);
  if (!VAR_10)
   return -VAR_0;

  if (!FUNC_5(VAR_10, "-")) {
   if (!FUNC_6(VAR_3, &VAR_4->dev[VAR_6].rdev.flags) &&
       (!VAR_4->dev[VAR_6].rdev.recovery_offset)) {
    VAR_4->ti->error = "Drive designated for rebuild not specified";
    return -VAR_0;
   }

   if (VAR_4->dev[VAR_6].meta_dev) {
    VAR_4->ti->error = "No data device supplied with metadata device";
    return -VAR_0;
   }

   continue;
  }

  VAR_9 = FUNC_1(VAR_4->ti, VAR_10, FUNC_3(VAR_4->ti->table),
      &VAR_4->dev[VAR_6].data_dev);
  if (VAR_9) {
   VAR_4->ti->error = "RAID device lookup failure";
   return VAR_9;
  }

  if (VAR_4->dev[VAR_6].meta_dev) {
   VAR_8 = 1;
   VAR_4->dev[VAR_6].rdev.meta_bdev = VAR_4->dev[VAR_6].meta_dev->bdev;
  }
  VAR_4->dev[VAR_6].rdev.bdev = VAR_4->dev[VAR_6].data_dev->bdev;
  FUNC_4(&VAR_4->dev[VAR_6].rdev.same_set, &VAR_4->md.disks);
  if (!FUNC_6(VAR_3, &VAR_4->dev[VAR_6].rdev.flags))
   VAR_7++;
 }

 if (VAR_4->journal_dev.dev)
  FUNC_4(&VAR_4->journal_dev.rdev.same_set, &VAR_4->md.disks);

 if (VAR_8) {
  VAR_4->md.external = 0;
  VAR_4->md.persistent = 1;
  VAR_4->md.major_version = 2;
 } else if (VAR_7 && !VAR_4->md.recovery_cp) {
  VAR_4->ti->error = "Unable to rebuild drive while array is not in-sync";
  return -VAR_0;
 }

 return 0;
}
