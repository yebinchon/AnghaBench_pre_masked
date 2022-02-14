
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_11__ {int shift; } ;
struct md_rdev {int sb_start; int desc_nr; int sectors; int bdev; int sb_page; TYPE_1__ badblocks; int sb_size; scalar_t__ new_data_offset; scalar_t__ data_offset; int preferred_minor; } ;
typedef int sector_t ;
struct TYPE_12__ {int number; } ;
struct TYPE_13__ {scalar_t__ md_magic; int minor_version; scalar_t__ raid_disks; int level; scalar_t__ size; TYPE_2__ this_disk; int md_minor; int sb_csum; int major_version; } ;
typedef TYPE_3__ mdp_super_t ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct md_rdev*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,...) ;
 int FUNC_9 (struct md_rdev*,int ) ;

__attribute__((used)) static int FUNC_10(struct md_rdev *VAR_5, struct md_rdev *VAR_6, int VAR_7)
{
 char VAR_8[VAR_0], VAR_9[VAR_0];
 mdp_super_t *VAR_10;
 int VAR_11;







 VAR_5->sb_start = FUNC_1(VAR_5);

 VAR_11 = FUNC_9(VAR_5, VAR_3);
 if (VAR_11)
  return VAR_11;

 VAR_11 = -VAR_1;

 FUNC_0(VAR_5->bdev, VAR_8);
 VAR_10 = FUNC_7(VAR_5->sb_page);

 if (VAR_10->md_magic != VAR_4) {
  FUNC_8("md: invalid raid superblock magic on %s\n", VAR_8);
  goto abort;
 }

 if (VAR_10->major_version != 0 ||
     VAR_10->minor_version < 90 ||
     VAR_10->minor_version > 91) {
  FUNC_8("Bad version number %d.%d on %s\n",
   VAR_10->major_version, VAR_10->minor_version, VAR_8);
  goto abort;
 }

 if (VAR_10->raid_disks <= 0)
  goto abort;

 if (FUNC_3(FUNC_2(VAR_10)) != FUNC_3(VAR_10->sb_csum)) {
  FUNC_8("md: invalid superblock checksum on %s\n", VAR_8);
  goto abort;
 }

 VAR_5->preferred_minor = VAR_10->md_minor;
 VAR_5->data_offset = 0;
 VAR_5->new_data_offset = 0;
 VAR_5->sb_size = VAR_3;
 VAR_5->badblocks.shift = -1;

 if (VAR_10->level == VAR_2)
  VAR_5->desc_nr = -1;
 else
  VAR_5->desc_nr = VAR_10->this_disk.number;

 if (!VAR_6) {
  VAR_11 = 1;
 } else {
  __u64 VAR_12, VAR_13;
  mdp_super_t *VAR_14 = FUNC_7(VAR_6->sb_page);
  if (!FUNC_6(VAR_14, VAR_10)) {
   FUNC_8("md: %s has different UUID to %s\n",
    VAR_8, FUNC_0(VAR_6->bdev,VAR_9));
   goto abort;
  }
  if (!FUNC_5(VAR_14, VAR_10)) {
   FUNC_8("md: %s has same UUID but different superblock to %s\n",
    VAR_8, FUNC_0(VAR_6->bdev, VAR_9));
   goto abort;
  }
  VAR_12 = FUNC_4(VAR_10);
  VAR_13 = FUNC_4(VAR_14);
  if (VAR_12 > VAR_13)
   VAR_11 = 1;
  else
   VAR_11 = 0;
 }
 VAR_5->sectors = VAR_5->sb_start;




 if ((u64)VAR_5->sectors >= (2ULL << 32) && VAR_10->level >= 1)
  VAR_5->sectors = (sector_t)(2ULL << 32) - 2;

 if (VAR_5->sectors < ((sector_t)VAR_10->size) * 2 && VAR_10->level >= 1)

  VAR_11 = -VAR_1;

 abort:
 return VAR_11;
}
