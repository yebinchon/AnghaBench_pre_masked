
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct raid1_info {TYPE_3__* rdev; } ;
struct r1conf {int bio_split; struct raid1_info* mirrors; } ;
struct r1bio {size_t read_disk; int sectors; scalar_t__ sector; int state; struct bio** bios; struct bio* master_bio; } ;
struct mddev {scalar_t__ gendisk; int bio_set; struct bitmap* bitmap; struct r1conf* private; } ;
struct md_rdev {int bdev; } ;
struct bitmap {int behind_writes; int behind_wait; } ;
struct TYPE_4__ {scalar_t__ bi_sector; } ;
struct bio {unsigned long bi_opf; TYPE_2__* bi_disk; struct r1bio* bi_private; int bi_end_io; TYPE_1__ bi_iter; } ;
typedef int gfp_t ;
struct TYPE_6__ {int flags; int bdev; scalar_t__ data_offset; } ;
struct TYPE_5__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct r1bio* FUNC_0 (struct mddev*,struct bio*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct bio*,struct bio*) ;
 struct bio* FUNC_4 (struct bio*,int,int *) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*,int ) ;
 int FUNC_8 (struct bio*,int const,unsigned long const) ;
 struct bio* FUNC_9 (struct bio*,int,int,int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct bio*) ;
 int FUNC_12 (struct r1bio*,struct mddev*,struct bio*) ;
 int FUNC_13 (struct mddev*) ;
 int FUNC_14 (char*,int ,char*,unsigned long long) ;
 int FUNC_15 (char*,int ,unsigned long long,int ) ;
 int VAR_8 ;
 int FUNC_16 (struct mddev*,char*) ;
 int FUNC_17 (struct r1bio*) ;
 struct md_rdev* FUNC_18 (TYPE_3__*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (struct r1conf*,struct r1bio*,int*) ;
 int FUNC_22 (char*,char*) ;
 scalar_t__ FUNC_23 (int ,int *) ;
 int FUNC_24 (int ,struct bio*,int ,scalar_t__) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (struct r1conf*,scalar_t__) ;

__attribute__((used)) static void FUNC_27(struct mddev *VAR_9, struct bio *VAR_10,
          int VAR_11, struct r1bio *VAR_12)
{
 struct r1conf *VAR_13 = VAR_9->private;
 struct raid1_info *VAR_14;
 struct bio *VAR_15;
 struct bitmap *VAR_16 = VAR_9->bitmap;
 const int VAR_17 = FUNC_5(VAR_10);
 const unsigned long VAR_18 = (VAR_10->bi_opf & VAR_5);
 int VAR_19;
 int VAR_20;
 bool VAR_21 = !!VAR_12;
 char VAR_22[VAR_0];






 gfp_t VAR_23 = VAR_12 ? (VAR_2 | VAR_7) : VAR_2;

 if (VAR_21) {

  struct md_rdev *VAR_24;
  FUNC_19();
  VAR_24 = FUNC_18(VAR_13->mirrors[VAR_12->read_disk].rdev);
  if (VAR_24)
   FUNC_2(VAR_24->bdev, VAR_22);
  else
   FUNC_22(VAR_22, "???");
  FUNC_20();
 }





 FUNC_26(VAR_13, VAR_10->bi_iter.bi_sector);

 if (!VAR_12)
  VAR_12 = FUNC_0(VAR_9, VAR_10);
 else
  FUNC_12(VAR_12, VAR_9, VAR_10);
 VAR_12->sectors = VAR_11;





 VAR_20 = FUNC_21(VAR_13, VAR_12, &VAR_19);

 if (VAR_20 < 0) {

  if (VAR_21) {
   FUNC_14("md/raid1:%s: %s: unrecoverable I/O read error for block %llu\n",
         FUNC_13(VAR_9),
         VAR_22,
         (unsigned long long)VAR_12->sector);
  }
  FUNC_17(VAR_12);
  return;
 }
 VAR_14 = VAR_13->mirrors + VAR_20;

 if (VAR_21)
  FUNC_15("md/raid1:%s: redirecting sector %llu to other mirror: %s\n",
        FUNC_13(VAR_9),
        (unsigned long long)VAR_12->sector,
        FUNC_2(VAR_14->rdev->bdev, VAR_22));

 if (FUNC_23(VAR_6, &VAR_14->rdev->flags) &&
     VAR_16) {




  FUNC_16(VAR_9, "wait behind writes");
  FUNC_25(VAR_16->behind_wait,
      FUNC_1(&VAR_16->behind_writes) == 0);
 }

 if (VAR_19 < FUNC_6(VAR_10)) {
  struct bio *VAR_25 = FUNC_9(VAR_10, VAR_19,
           VAR_23, &VAR_13->bio_split);
  FUNC_3(VAR_25, VAR_10);
  FUNC_11(VAR_10);
  VAR_10 = VAR_25;
  VAR_12->master_bio = VAR_10;
  VAR_12->sectors = VAR_19;
 }

 VAR_12->read_disk = VAR_20;

 VAR_15 = FUNC_4(VAR_10, VAR_23, &VAR_9->bio_set);

 VAR_12->bios[VAR_20] = VAR_15;

 VAR_15->bi_iter.bi_sector = VAR_12->sector +
  VAR_14->rdev->data_offset;
 FUNC_7(VAR_15, VAR_14->rdev->bdev);
 VAR_15->bi_end_io = VAR_8;
 FUNC_8(VAR_15, VAR_17, VAR_18);
 if (FUNC_23(VAR_1, &VAR_14->rdev->flags) &&
     FUNC_23(VAR_4, &VAR_12->state))
         VAR_15->bi_opf |= VAR_3;
 VAR_15->bi_private = VAR_12;

 if (VAR_9->gendisk)
         FUNC_24(VAR_15->bi_disk->queue, VAR_15,
    FUNC_10(VAR_9->gendisk), VAR_12->sector);

 FUNC_11(VAR_15);
}
