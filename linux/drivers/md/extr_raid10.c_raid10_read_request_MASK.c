
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r10conf {int bio_split; TYPE_1__* mirrors; } ;
struct r10bio {int read_slot; int sectors; scalar_t__ sector; int state; TYPE_3__* devs; struct bio* master_bio; } ;
struct mddev {scalar_t__ gendisk; int bio_set; struct r10conf* private; } ;
struct md_rdev {int flags; int bdev; } ;
struct TYPE_6__ {scalar_t__ bi_sector; } ;
struct bio {unsigned long bi_opf; TYPE_4__* bi_disk; struct r10bio* bi_private; int bi_end_io; TYPE_2__ bi_iter; } ;
typedef int gfp_t ;
struct TYPE_8__ {int queue; } ;
struct TYPE_7__ {int devnum; scalar_t__ addr; struct md_rdev* rdev; struct bio* bio; } ;
struct TYPE_5__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct r10conf*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bio*,struct bio*) ;
 struct bio* FUNC_3 (struct bio*,int,int *) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,int ) ;
 int FUNC_7 (struct bio*,int const,unsigned long const) ;
 struct bio* FUNC_8 (struct bio*,int,int,int *) ;
 scalar_t__ FUNC_9 (struct r10bio*,struct md_rdev*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct bio*) ;
 int FUNC_12 (struct mddev*) ;
 int FUNC_13 (char*,int ,char*,unsigned long long) ;
 int FUNC_14 (char*,int ,int ,unsigned long long) ;
 int VAR_7 ;
 int FUNC_15 (struct r10bio*) ;
 struct md_rdev* FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 struct md_rdev* FUNC_19 (struct r10conf*,struct r10bio*,int*) ;
 int FUNC_20 (struct mddev*,struct r10conf*,struct bio*,int) ;
 int FUNC_21 (char*,char*) ;
 scalar_t__ FUNC_22 (int ,int *) ;
 int FUNC_23 (int ,struct bio*,int ,scalar_t__) ;
 int FUNC_24 (struct r10conf*) ;

__attribute__((used)) static void FUNC_25(struct mddev *VAR_8, struct bio *VAR_9,
    struct r10bio *VAR_10)
{
 struct r10conf *VAR_11 = VAR_8->private;
 struct bio *VAR_12;
 const int VAR_13 = FUNC_4(VAR_9);
 const unsigned long VAR_14 = (VAR_9->bi_opf & VAR_5);
 int VAR_15;
 struct md_rdev *VAR_16;
 char VAR_17[VAR_0];
 int VAR_18 = VAR_10->read_slot;
 struct md_rdev *VAR_19 = ((void*)0);
 gfp_t VAR_20 = VAR_2;

 if (VAR_10->devs[VAR_18].rdev) {







  int VAR_21;




  VAR_20 = VAR_2 | VAR_6;

  FUNC_17();
  VAR_21 = VAR_10->devs[VAR_18].devnum;
  VAR_19 = FUNC_16(VAR_11->mirrors[VAR_21].rdev);
  if (VAR_19)
   FUNC_1(VAR_19->bdev, VAR_17);
  else {
   FUNC_21(VAR_17, "???");

   VAR_19 = VAR_10->devs[VAR_18].rdev;
  }
  FUNC_18();
 }

 FUNC_20(VAR_8, VAR_11, VAR_9, VAR_10->sectors);
 VAR_16 = FUNC_19(VAR_11, VAR_10, &VAR_15);
 if (!VAR_16) {
  if (VAR_19) {
   FUNC_13("md/raid10:%s: %s: unrecoverable I/O read error for block %llu\n",
         FUNC_12(VAR_8), VAR_17,
         (unsigned long long)VAR_10->sector);
  }
  FUNC_15(VAR_10);
  return;
 }
 if (VAR_19)
  FUNC_14("md/raid10:%s: %s: redirecting sector %llu to another mirror\n",
       FUNC_12(VAR_8),
       FUNC_1(VAR_16->bdev, VAR_17),
       (unsigned long long)VAR_10->sector);
 if (VAR_15 < FUNC_5(VAR_9)) {
  struct bio *VAR_22 = FUNC_8(VAR_9, VAR_15,
           VAR_20, &VAR_11->bio_split);
  FUNC_2(VAR_22, VAR_9);
  FUNC_0(VAR_11);
  FUNC_11(VAR_9);
  FUNC_24(VAR_11);
  VAR_9 = VAR_22;
  VAR_10->master_bio = VAR_9;
  VAR_10->sectors = VAR_15;
 }
 VAR_18 = VAR_10->read_slot;

 VAR_12 = FUNC_3(VAR_9, VAR_20, &VAR_8->bio_set);

 VAR_10->devs[VAR_18].bio = VAR_12;
 VAR_10->devs[VAR_18].rdev = VAR_16;

 VAR_12->bi_iter.bi_sector = VAR_10->devs[VAR_18].addr +
  FUNC_9(VAR_10, VAR_16);
 FUNC_6(VAR_12, VAR_16->bdev);
 VAR_12->bi_end_io = VAR_7;
 FUNC_7(VAR_12, VAR_13, VAR_14);
 if (FUNC_22(VAR_1, &VAR_16->flags) &&
     FUNC_22(VAR_4, &VAR_10->state))
         VAR_12->bi_opf |= VAR_3;
 VAR_12->bi_private = VAR_10;

 if (VAR_8->gendisk)
         FUNC_23(VAR_12->bi_disk->queue,
                               VAR_12, FUNC_10(VAR_8->gendisk),
                               VAR_10->sector);
 FUNC_11(VAR_12);
 return;
}
