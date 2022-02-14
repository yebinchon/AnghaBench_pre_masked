
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strip_zone {unsigned int dev_start; } ;
struct r0conf {int layout; } ;
struct mddev {unsigned int chunk_sectors; scalar_t__ gendisk; struct r0conf* private; int bio_set; } ;
struct md_rdev {unsigned int data_offset; int bdev; } ;
struct TYPE_3__ {unsigned int bi_sector; } ;
struct bio {int bi_opf; TYPE_2__* bi_disk; TYPE_1__ bi_iter; } ;
typedef unsigned int sector_t ;
struct TYPE_4__ {int queue; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bio*,struct bio*) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 unsigned int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,int ) ;
 struct bio* FUNC_6 (struct bio*,unsigned int,int ,int *) ;
 int FUNC_7 (scalar_t__) ;
 struct strip_zone* FUNC_8 (struct r0conf*,unsigned int*) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (struct md_rdev*,char*) ;
 int FUNC_11 (unsigned int) ;
 scalar_t__ FUNC_12 (int ) ;
 struct md_rdev* FUNC_13 (struct mddev*,struct strip_zone*,unsigned int,unsigned int*) ;
 int FUNC_14 (struct mddev*,struct bio*) ;
 int FUNC_15 (struct mddev*,struct bio*) ;
 int FUNC_16 (struct mddev*,struct bio*) ;
 int FUNC_17 (struct mddev*) ;
 int FUNC_18 (struct mddev*,struct bio*) ;
 unsigned int FUNC_19 (unsigned int,unsigned int) ;
 int FUNC_20 (int ,struct bio*,int ,unsigned int) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static bool FUNC_22(struct mddev *VAR_3, struct bio *VAR_4)
{
 struct r0conf *VAR_5 = VAR_3->private;
 struct strip_zone *VAR_6;
 struct md_rdev *VAR_7;
 sector_t VAR_8;
 sector_t VAR_9;
 sector_t VAR_10;
 unsigned VAR_11;
 unsigned VAR_12;

 if (FUNC_21(VAR_4->bi_opf & VAR_2)) {
  FUNC_14(VAR_3, VAR_4);
  return 1;
 }

 if (FUNC_21((FUNC_3(VAR_4) == VAR_1))) {
  FUNC_18(VAR_3, VAR_4);
  return 1;
 }

 VAR_8 = VAR_4->bi_iter.bi_sector;
 VAR_9 = VAR_8;
 VAR_11 = VAR_3->chunk_sectors;

 VAR_12 = VAR_11 -
  (FUNC_12(FUNC_11(VAR_11))
   ? (VAR_9 & (VAR_11-1))
   : FUNC_19(VAR_9, VAR_11));


 VAR_9 = VAR_8;

 if (VAR_12 < FUNC_4(VAR_4)) {
  struct bio *VAR_13 = FUNC_6(VAR_4, VAR_12, VAR_0,
           &VAR_3->bio_set);
  FUNC_1(VAR_13, VAR_4);
  FUNC_9(VAR_4);
  VAR_4 = VAR_13;
 }

 VAR_10 = VAR_9;
 VAR_6 = FUNC_8(VAR_3->private, &VAR_9);
 switch (VAR_5->layout) {
 case 128:
  VAR_7 = FUNC_13(VAR_3, VAR_6, VAR_10, &VAR_9);
  break;
 case 129:
  VAR_7 = FUNC_13(VAR_3, VAR_6, VAR_9, &VAR_9);
  break;
 default:
  FUNC_0("md/raid0:%s: Invalid layout\n", FUNC_17(VAR_3));
  FUNC_2(VAR_4);
  return 1;
 }

 if (FUNC_21(FUNC_10(VAR_7, "raid0"))) {
  FUNC_2(VAR_4);
  return 1;
 }

 FUNC_5(VAR_4, VAR_7->bdev);
 VAR_4->bi_iter.bi_sector = VAR_9 + VAR_6->dev_start +
  VAR_7->data_offset;

 if (VAR_3->gendisk)
  FUNC_20(VAR_4->bi_disk->queue, VAR_4,
    FUNC_7(VAR_3->gendisk), VAR_8);
 FUNC_16(VAR_3, VAR_4);
 FUNC_15(VAR_3, VAR_4);
 FUNC_9(VAR_4);
 return 1;
}
