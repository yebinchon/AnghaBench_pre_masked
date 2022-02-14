
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resync_pages {int dummy; } ;
struct r1conf {scalar_t__ fullsync; scalar_t__ cluster_sync_low; scalar_t__ cluster_sync_high; int raid_disks; int recovery_disabled; TYPE_2__* mirrors; int * nr_waiting; int r1buf_pool; } ;
struct r1bio {int read_disk; struct bio** bios; int remaining; scalar_t__ sectors; scalar_t__ state; scalar_t__ sector; struct mddev* mddev; } ;
struct page {int dummy; } ;
struct mddev {scalar_t__ dev_sectors; scalar_t__ curr_resync; scalar_t__ recovery_cp; scalar_t__ resync_max; scalar_t__ curr_resync_completed; scalar_t__ recovery; int * bitmap; int recovery_disabled; scalar_t__ sb_flags; struct r1conf* private; } ;
struct md_rdev {scalar_t__ data_offset; scalar_t__ flags; int bdev; int nr_pending; } ;
struct TYPE_4__ {scalar_t__ bi_sector; } ;
struct bio {scalar_t__ bi_end_io; int bi_opf; TYPE_1__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {int (* resync_info_update ) (struct mddev*,scalar_t__,scalar_t__) ;} ;
struct TYPE_5__ {struct md_rdev* rdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct bio*,struct page*,int,int ) ;
 int FUNC_5 (struct bio*,int ) ;
 int FUNC_6 (struct bio*,int ,int ) ;
 int FUNC_7 (struct r1conf*) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_8 (struct bio*) ;
 struct resync_pages* FUNC_9 (struct bio*) ;
 scalar_t__ FUNC_10 (struct r1conf*) ;
 scalar_t__ FUNC_11 (struct md_rdev*,scalar_t__,int,scalar_t__*,int*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,scalar_t__,int) ;
 int FUNC_14 (int *,scalar_t__,scalar_t__*,int) ;
 int FUNC_15 (int *,scalar_t__,scalar_t__*,int) ;
 TYPE_3__* VAR_21 ;
 int FUNC_16 (struct bio*,scalar_t__) ;
 scalar_t__ FUNC_17 (struct mddev*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct r1bio*) ;
 struct r1bio* FUNC_20 (struct r1conf*) ;
 scalar_t__ FUNC_21 (struct r1conf*,scalar_t__) ;
 struct md_rdev* FUNC_22 (struct md_rdev*) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 scalar_t__ FUNC_25 (struct md_rdev*,scalar_t__,int,int ) ;
 struct page* FUNC_26 (struct resync_pages*,int) ;
 int FUNC_27 (int) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int ,scalar_t__*) ;
 int FUNC_30 (struct mddev*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_31 (int ,scalar_t__*) ;

__attribute__((used)) static sector_t FUNC_32(struct mddev *VAR_22, sector_t VAR_23,
       int *VAR_24)
{
 struct r1conf *VAR_25 = VAR_22->private;
 struct r1bio *VAR_26;
 struct bio *VAR_27;
 sector_t VAR_28, VAR_29;
 int VAR_30 = -1;
 int VAR_31;
 int VAR_32 = -1;
 int VAR_33 = 0, VAR_34 = 0;
 sector_t VAR_35;
 int VAR_36 = 0;
 int VAR_37 = VAR_16;
 int VAR_38 = 0;
 int VAR_39 = FUNC_28(VAR_23);
 int VAR_40 = 0;

 if (!FUNC_18(&VAR_25->r1buf_pool))
  if (FUNC_10(VAR_25))
   return 0;

 VAR_28 = VAR_22->dev_sectors;
 if (VAR_23 >= VAR_28) {





  if (VAR_22->curr_resync < VAR_28)
   FUNC_14(VAR_22->bitmap, VAR_22->curr_resync,
        &VAR_35, 1);
  else
   VAR_25->fullsync = 0;

  FUNC_12(VAR_22->bitmap);
  FUNC_7(VAR_25);

  if (FUNC_17(VAR_22)) {
   VAR_25->cluster_sync_low = 0;
   VAR_25->cluster_sync_high = 0;
  }
  return 0;
 }

 if (VAR_22->bitmap == ((void*)0) &&
     VAR_22->recovery_cp == VAR_10 &&
     !FUNC_31(VAR_7, &VAR_22->recovery) &&
     VAR_25->fullsync == 0) {
  *VAR_24 = 1;
  return VAR_28 - VAR_23;
 }



 if (!FUNC_15(VAR_22->bitmap, VAR_23, &VAR_35, 1) &&
     !VAR_25->fullsync && !FUNC_31(VAR_7, &VAR_22->recovery)) {

  *VAR_24 = 1;
  return VAR_35;
 }





 if (FUNC_2(&VAR_25->nr_waiting[VAR_39]))
  FUNC_27(1);





 FUNC_13(VAR_22->bitmap, VAR_23,
  FUNC_17(VAR_22) && (VAR_23 + 2 * VAR_16 > VAR_25->cluster_sync_high));


 if (FUNC_21(VAR_25, VAR_23))
  return 0;

 VAR_26 = FUNC_20(VAR_25);

 FUNC_23();
 VAR_26->mddev = VAR_22;
 VAR_26->sector = VAR_23;
 VAR_26->state = 0;
 FUNC_29(VAR_12, &VAR_26->state);

 VAR_37 = FUNC_0(VAR_23, VAR_37);

 for (VAR_31 = 0; VAR_31 < VAR_25->raid_disks * 2; VAR_31++) {
  struct md_rdev *VAR_41;
  VAR_27 = VAR_26->bios[VAR_31];

  VAR_41 = FUNC_22(VAR_25->mirrors[VAR_31].rdev);
  if (VAR_41 == ((void*)0) ||
      FUNC_31(VAR_2, &VAR_41->flags)) {
   if (VAR_31 < VAR_25->raid_disks)
    VAR_36 = 1;
  } else if (!FUNC_31(VAR_3, &VAR_41->flags)) {
   FUNC_6(VAR_27, VAR_14, 0);
   VAR_27->bi_end_io = VAR_20;
   VAR_33 ++;
  } else {

   sector_t VAR_42 = VAR_10;
   int VAR_43;

   if (FUNC_11(VAR_41, VAR_23, VAR_37,
     &VAR_42, &VAR_43)) {
    if (VAR_42 > VAR_23)
     VAR_37 = VAR_42 - VAR_23;
    else {
     VAR_43 -= (VAR_23 - VAR_42);
     if (VAR_38 == 0 ||
         VAR_38 > VAR_43)
      VAR_38 = VAR_43;
    }
   }
   if (VAR_23 < VAR_42) {
    if (FUNC_31(VAR_18, &VAR_41->flags)) {
     if (VAR_32 < 0)
      VAR_32 = VAR_31;
    } else {
     if (VAR_30 < 0)
      VAR_30 = VAR_31;
    }
    FUNC_6(VAR_27, VAR_13, 0);
    VAR_27->bi_end_io = VAR_19;
    VAR_34++;
   } else if (!FUNC_31(VAR_17, &VAR_41->flags) &&
    FUNC_31(VAR_8, &VAR_22->recovery) &&
    !FUNC_31(VAR_5, &VAR_22->recovery)) {






    FUNC_6(VAR_27, VAR_14, 0);
    VAR_27->bi_end_io = VAR_20;
    VAR_33++;
   }
  }
  if (VAR_27->bi_end_io) {
   FUNC_1(&VAR_41->nr_pending);
   VAR_27->bi_iter.bi_sector = VAR_23 + VAR_41->data_offset;
   FUNC_5(VAR_27, VAR_41->bdev);
   if (FUNC_31(VAR_1, &VAR_41->flags))
    VAR_27->bi_opf |= VAR_4;
  }
 }
 FUNC_24();
 if (VAR_30 < 0)
  VAR_30 = VAR_32;
 VAR_26->read_disk = VAR_30;

 if (VAR_34 == 0 && VAR_38 > 0) {



  int VAR_44 = 1;
  for (VAR_31 = 0 ; VAR_31 < VAR_25->raid_disks * 2 ; VAR_31++)
   if (VAR_26->bios[VAR_31]->bi_end_io == VAR_20) {
    struct md_rdev *VAR_45 = VAR_25->mirrors[VAR_31].rdev;
    VAR_44 = FUNC_25(VAR_45, VAR_23,
       VAR_38, 0
     ) && VAR_44;
   }
  FUNC_29(VAR_9, &VAR_22->sb_flags);
  *VAR_24 = 1;
  FUNC_19(VAR_26);

  if (!VAR_44) {





   VAR_25->recovery_disabled = VAR_22->recovery_disabled;
   FUNC_29(VAR_6, &VAR_22->recovery);
   return 0;
  } else
   return VAR_38;

 }
 if (VAR_38 > 0 && VAR_38 < VAR_37) {


  VAR_37 = VAR_38;
 }

 if (FUNC_31(VAR_8, &VAR_22->recovery) && VAR_34 > 0)

  VAR_33 += VAR_34-1;

 if (VAR_33 == 0 || VAR_34 == 0) {



  sector_t VAR_46;
  if (VAR_38 > 0)
   VAR_28 = VAR_23 + VAR_38;
  VAR_46 = VAR_28 - VAR_23;
  *VAR_24 = 1;
  FUNC_19(VAR_26);
  return VAR_46;
 }

 if (VAR_28 > VAR_22->resync_max)
  VAR_28 = VAR_22->resync_max;
 if (VAR_28 > VAR_23 + VAR_37)
  VAR_28 = VAR_23 + VAR_37;
 VAR_29 = 0;
 VAR_35 = 0;
 do {
  struct page *VAR_47;
  int VAR_48 = VAR_11;
  if (VAR_23 + (VAR_48>>9) > VAR_28)
   VAR_48 = (VAR_28 - VAR_23) << 9;
  if (VAR_48 == 0)
   break;
  if (VAR_35 == 0) {
   if (!FUNC_15(VAR_22->bitmap, VAR_23,
        &VAR_35, VAR_36) &&
       !VAR_25->fullsync &&
       !FUNC_31(VAR_7, &VAR_22->recovery))
    break;
   if ((VAR_48 >> 9) > VAR_35)
    VAR_48 = VAR_35<<9;
  }

  for (VAR_31 = 0 ; VAR_31 < VAR_25->raid_disks * 2; VAR_31++) {
   struct resync_pages *VAR_49;

   VAR_27 = VAR_26->bios[VAR_31];
   VAR_49 = FUNC_9(VAR_27);
   if (VAR_27->bi_end_io) {
    VAR_47 = FUNC_26(VAR_49, VAR_40);





    FUNC_4(VAR_27, VAR_47, VAR_48, 0);
   }
  }
  VAR_29 += VAR_48>>9;
  VAR_23 += VAR_48>>9;
  VAR_35 -= (VAR_48>>9);
 } while (++VAR_40 < VAR_15);

 VAR_26->sectors = VAR_29;

 if (FUNC_17(VAR_22) &&
   VAR_25->cluster_sync_high < VAR_23 + VAR_29) {
  VAR_25->cluster_sync_low = VAR_22->curr_resync_completed;
  VAR_25->cluster_sync_high = VAR_25->cluster_sync_low + VAR_0;

  VAR_21->resync_info_update(VAR_22,
    VAR_25->cluster_sync_low,
    VAR_25->cluster_sync_high);
 }




 if (FUNC_31(VAR_7, &VAR_22->recovery)) {
  FUNC_3(&VAR_26->remaining, VAR_34);
  for (VAR_31 = 0; VAR_31 < VAR_25->raid_disks * 2 && VAR_34; VAR_31++) {
   VAR_27 = VAR_26->bios[VAR_31];
   if (VAR_27->bi_end_io == VAR_19) {
    VAR_34--;
    FUNC_16(VAR_27, VAR_29);
    if (VAR_34 == 1)
     VAR_27->bi_opf &= ~VAR_4;
    FUNC_8(VAR_27);
   }
  }
 } else {
  FUNC_3(&VAR_26->remaining, 1);
  VAR_27 = VAR_26->bios[VAR_26->read_disk];
  FUNC_16(VAR_27, VAR_29);
  if (VAR_34 == 1)
   VAR_27->bi_opf &= ~VAR_4;
  FUNC_8(VAR_27);
 }
 return VAR_29;
}
