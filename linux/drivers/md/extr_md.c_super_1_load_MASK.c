
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int size; int offset; } ;
struct mdp_superblock_1 {scalar_t__ magic; scalar_t__ major_version; scalar_t__ max_dev; scalar_t__ feature_map; scalar_t__ sb_csum; scalar_t__ new_offset; scalar_t__ cnt_corrected_read; scalar_t__ level; scalar_t__ dev_number; scalar_t__ bblog_offset; int bblog_shift; scalar_t__ layout; scalar_t__ chunksize; int data_size; int events; scalar_t__* set_uuid; TYPE_1__ ppl; int bblog_size; int data_offset; scalar_t__* pad3; scalar_t__ pad0; int super_offset; } ;
struct TYPE_7__ {scalar_t__ offset; scalar_t__ sector; void* size; } ;
struct TYPE_10__ {scalar_t__ count; int shift; } ;
struct md_rdev {int sb_start; int preferred_minor; int data_offset; int new_data_offset; int sb_size; int desc_nr; int sectors; TYPE_4__* bdev; scalar_t__ sb_page; TYPE_2__ ppl; TYPE_5__ badblocks; scalar_t__ bb_page; int corrected_errors; } ;
typedef int sector_t ;
typedef int s32 ;
typedef int __u64 ;
typedef scalar_t__ __s16 ;
typedef int __le64 ;
struct TYPE_9__ {int bd_inode; TYPE_3__* bd_disk; } ;
struct TYPE_8__ {int queue; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int,int,int) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_4 (struct mdp_superblock_1*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__*,scalar_t__*,int) ;
 struct mdp_superblock_1* FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct md_rdev*,int) ;
 int FUNC_15 (struct md_rdev*,int,int,scalar_t__,int ,int ,int) ;

__attribute__((used)) static int FUNC_16(struct md_rdev *VAR_16, struct md_rdev *VAR_17, int VAR_18)
{
 struct mdp_superblock_1 *VAR_19;
 int VAR_20;
 sector_t VAR_21;
 sector_t VAR_22;
 char VAR_23[VAR_0], VAR_24[VAR_0];
 int VAR_25;
 switch(VAR_18) {
 case 0:
  VAR_21 = FUNC_6(VAR_16->bdev->bd_inode) >> 9;
  VAR_21 -= 8*2;
  VAR_21 &= ~(sector_t)(4*2-1);
  break;
 case 1:
  VAR_21 = 0;
  break;
 case 2:
  VAR_21 = 8;
  break;
 default:
  return -VAR_1;
 }
 VAR_16->sb_start = VAR_21;




 VAR_20 = FUNC_14(VAR_16, 4096);
 if (VAR_20) return VAR_20;

 VAR_19 = FUNC_11(VAR_16->sb_page);

 if (VAR_19->magic != FUNC_5(VAR_13) ||
     VAR_19->major_version != FUNC_5(1) ||
     FUNC_8(VAR_19->max_dev) > (4096-256)/2 ||
     FUNC_9(VAR_19->super_offset) != VAR_16->sb_start ||
     (FUNC_8(VAR_19->feature_map) & ~VAR_6) != 0)
  return -VAR_1;

 if (FUNC_4(VAR_19) != VAR_19->sb_csum) {
  FUNC_12("md: invalid superblock checksum on %s\n",
   FUNC_3(VAR_16->bdev,VAR_23));
  return -VAR_1;
 }
 if (FUNC_9(VAR_19->data_size) < 10) {
  FUNC_12("md: data_size too small on %s\n",
   FUNC_3(VAR_16->bdev,VAR_23));
  return -VAR_1;
 }
 if (VAR_19->pad0 ||
     VAR_19->pad3[0] ||
     FUNC_10(VAR_19->pad3, VAR_19->pad3+1, sizeof(VAR_19->pad3) - sizeof(VAR_19->pad3[1])))

  return -VAR_1;

 VAR_16->preferred_minor = 0xffff;
 VAR_16->data_offset = FUNC_9(VAR_19->data_offset);
 VAR_16->new_data_offset = VAR_16->data_offset;
 if ((FUNC_8(VAR_19->feature_map) & VAR_12) &&
     (FUNC_8(VAR_19->feature_map) & VAR_9))
  VAR_16->new_data_offset += (s32)FUNC_8(VAR_19->new_offset);
 FUNC_1(&VAR_16->corrected_errors, FUNC_8(VAR_19->cnt_corrected_read));

 VAR_16->sb_size = FUNC_8(VAR_19->max_dev) * 2 + 256;
 VAR_25 = FUNC_13(VAR_16->bdev->bd_disk->queue)-1;
 if (VAR_16->sb_size & VAR_25)
  VAR_16->sb_size = (VAR_16->sb_size | VAR_25) + 1;

 if (VAR_18
     && VAR_16->data_offset < VAR_21 + (VAR_16->sb_size/512))
  return -VAR_1;
 if (VAR_18
     && VAR_16->new_data_offset < VAR_21 + (VAR_16->sb_size/512))
  return -VAR_1;

 if (VAR_19->level == FUNC_5(VAR_5))
  VAR_16->desc_nr = -1;
 else
  VAR_16->desc_nr = FUNC_8(VAR_19->dev_number);

 if (!VAR_16->bb_page) {
  VAR_16->bb_page = FUNC_0(VAR_4);
  if (!VAR_16->bb_page)
   return -VAR_3;
 }
 if ((FUNC_8(VAR_19->feature_map) & VAR_7) &&
     VAR_16->badblocks.count == 0) {



  s32 VAR_26;
  sector_t VAR_27;
  __le64 *VAR_28;
  int VAR_29;
  int VAR_30 = FUNC_7(VAR_19->bblog_size);
  if (VAR_30 > (VAR_14 / 512))
   return -VAR_1;
  VAR_26 = FUNC_8(VAR_19->bblog_offset);
  if (VAR_26 == 0)
   return -VAR_1;
  VAR_27 = (long long)VAR_26;
  if (!FUNC_15(VAR_16, VAR_27, VAR_30 << 9,
      VAR_16->bb_page, VAR_15, 0, 1))
   return -VAR_2;
  VAR_28 = (__le64 *)FUNC_11(VAR_16->bb_page);
  VAR_16->badblocks.shift = VAR_19->bblog_shift;
  for (VAR_29 = 0 ; VAR_29 < (VAR_30 << (9-3)) ; VAR_29++, VAR_28++) {
   u64 VAR_31 = FUNC_9(*VAR_28);
   int VAR_32 = VAR_31 & (0x3ff);
   u64 VAR_33 = VAR_31 >> 10;
   VAR_33 <<= VAR_19->bblog_shift;
   VAR_32 <<= VAR_19->bblog_shift;
   if (VAR_31 + 1 == 0)
    break;
   if (FUNC_2(&VAR_16->badblocks, VAR_33, VAR_32, 1))
    return -VAR_1;
  }
 } else if (VAR_19->bblog_offset != 0)
  VAR_16->badblocks.shift = 0;

 if ((FUNC_8(VAR_19->feature_map) &
     (VAR_10 | VAR_8))) {
  VAR_16->ppl.offset = (__s16)FUNC_7(VAR_19->ppl.offset);
  VAR_16->ppl.size = FUNC_7(VAR_19->ppl.size);
  VAR_16->ppl.sector = VAR_16->sb_start + VAR_16->ppl.offset;
 }

 if ((FUNC_8(VAR_19->feature_map) & VAR_11) &&
     VAR_19->level != 0)
  return -VAR_1;

 if (!VAR_17) {
  VAR_20 = 1;
 } else {
  __u64 VAR_34, VAR_35;
  struct mdp_superblock_1 *VAR_36 = FUNC_11(VAR_17->sb_page);

  if (FUNC_10(VAR_19->set_uuid, VAR_36->set_uuid, 16) != 0 ||
      VAR_19->level != VAR_36->level ||
      VAR_19->layout != VAR_36->layout ||
      VAR_19->chunksize != VAR_36->chunksize) {
   FUNC_12("md: %s has strangely different superblock to %s\n",
    FUNC_3(VAR_16->bdev,VAR_23),
    FUNC_3(VAR_17->bdev,VAR_24));
   return -VAR_1;
  }
  VAR_34 = FUNC_9(VAR_19->events);
  VAR_35 = FUNC_9(VAR_36->events);

  if (VAR_34 > VAR_35)
   VAR_20 = 1;
  else
   VAR_20 = 0;
 }
 if (VAR_18) {
  VAR_22 = (FUNC_6(VAR_16->bdev->bd_inode) >> 9);
  VAR_22 -= VAR_16->data_offset;
 } else
  VAR_22 = VAR_16->sb_start;
 if (VAR_22 < FUNC_9(VAR_19->data_size))
  return -VAR_1;
 VAR_16->sectors = FUNC_9(VAR_19->data_size);
 return VAR_20;
}
