
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {scalar_t__ major_version; int thread; int recovery; int sb_flags; scalar_t__ persistent; TYPE_1__* pers; } ;
struct md_rdev {int sb_start; int sectors; int desc_nr; int saved_raid_disk; int raid_disk; int flags; TYPE_2__* bdev; } ;
typedef int dev_t ;
struct TYPE_4__ {int bd_inode; } ;
struct TYPE_3__ {int hot_add_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct md_rdev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct md_rdev*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (struct md_rdev*,struct mddev*) ;
 int FUNC_4 (struct md_rdev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct md_rdev*) ;
 int FUNC_7 (int ) ;
 struct md_rdev* FUNC_8 (int ,int,int ) ;
 int FUNC_9 (struct mddev*) ;
 int FUNC_10 (struct mddev*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mddev*) ;
 int FUNC_13 (char*,int ,...) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct mddev *VAR_7, dev_t VAR_8)
{
 char VAR_9[VAR_0];
 int VAR_10;
 struct md_rdev *VAR_11;

 if (!VAR_7->pers)
  return -VAR_2;

 if (VAR_7->major_version != 0) {
  FUNC_13("%s: HOT_ADD may only be used with version-0 superblocks.\n",
   FUNC_12(VAR_7));
  return -VAR_1;
 }
 if (!VAR_7->pers->hot_add_disk) {
  FUNC_13("%s: personality does not support diskops!\n",
   FUNC_12(VAR_7));
  return -VAR_1;
 }

 VAR_11 = FUNC_8(VAR_8, -1, 0);
 if (FUNC_0(VAR_11)) {
  FUNC_13("md: error, md_import_device() returned %ld\n",
   FUNC_1(VAR_11));
  return -VAR_1;
 }

 if (VAR_7->persistent)
  VAR_11->sb_start = FUNC_4(VAR_11);
 else
  VAR_11->sb_start = FUNC_7(VAR_11->bdev->bd_inode) / 512;

 VAR_11->sectors = VAR_11->sb_start;

 if (FUNC_15(VAR_3, &VAR_11->flags)) {
  FUNC_13("md: can not hot-add faulty %s disk to %s!\n",
   FUNC_2(VAR_11->bdev,VAR_9), FUNC_12(VAR_7));
  VAR_10 = -VAR_1;
  goto abort_export;
 }

 FUNC_5(VAR_4, &VAR_11->flags);
 VAR_11->desc_nr = -1;
 VAR_11->saved_raid_disk = -1;
 VAR_10 = FUNC_3(VAR_11, VAR_7);
 if (VAR_10)
  goto abort_export;






 VAR_11->raid_disk = -1;

 FUNC_14(VAR_6, &VAR_7->sb_flags);
 if (!VAR_7->thread)
  FUNC_10(VAR_7, 1);




 FUNC_14(VAR_5, &VAR_7->recovery);
 FUNC_11(VAR_7->thread);
 FUNC_9(VAR_7);
 return 0;

abort_export:
 FUNC_6(VAR_11);
 return VAR_10;
}
