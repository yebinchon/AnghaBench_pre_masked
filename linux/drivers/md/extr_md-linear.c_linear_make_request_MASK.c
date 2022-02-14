
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mddev {scalar_t__ gendisk; int bio_set; } ;
struct dev_info {scalar_t__ end_sector; TYPE_3__* rdev; } ;
struct TYPE_5__ {scalar_t__ bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; TYPE_1__* bi_disk; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {scalar_t__ sectors; scalar_t__ data_offset; int bdev; } ;
struct TYPE_4__ {int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct bio*,struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,int ) ;
 struct bio* FUNC_7 (struct bio*,scalar_t__,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct bio*) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (struct mddev*,struct bio*) ;
 int FUNC_13 (struct mddev*,struct bio*) ;
 int FUNC_14 (struct mddev*,struct bio*) ;
 int FUNC_15 (struct mddev*) ;
 int FUNC_16 (char*,int ,unsigned long long,int ,unsigned long long,unsigned long long) ;
 int FUNC_17 (int ,struct bio*,int ,scalar_t__) ;
 scalar_t__ FUNC_18 (int) ;
 struct dev_info* FUNC_19 (struct mddev*,scalar_t__) ;

__attribute__((used)) static bool FUNC_20(struct mddev *VAR_4, struct bio *VAR_5)
{
 char VAR_6[VAR_0];
 struct dev_info *VAR_7;
 sector_t VAR_8, VAR_9, VAR_10;
 sector_t VAR_11 = VAR_5->bi_iter.bi_sector;

 if (FUNC_18(VAR_5->bi_opf & VAR_3)) {
  FUNC_12(VAR_4, VAR_5);
  return 1;
 }

 VAR_7 = FUNC_19(VAR_4, VAR_11);
 VAR_8 = VAR_7->end_sector - VAR_7->rdev->sectors;
 VAR_9 = VAR_7->end_sector;
 VAR_10 = VAR_7->rdev->data_offset;

 if (FUNC_18(VAR_11 >= VAR_9 ||
       VAR_11 < VAR_8))
  goto out_of_bounds;

 if (FUNC_18(FUNC_11(VAR_7->rdev, "linear"))) {
  FUNC_4(VAR_5);
  return 1;
 }

 if (FUNC_18(FUNC_2(VAR_5) > VAR_9)) {

  struct bio *VAR_12 = FUNC_7(VAR_5, VAR_9 - VAR_11,
           VAR_1, &VAR_4->bio_set);
  FUNC_1(VAR_12, VAR_5);
  FUNC_10(VAR_5);
  VAR_5 = VAR_12;
 }

 FUNC_6(VAR_5, VAR_7->rdev->bdev);
 VAR_5->bi_iter.bi_sector = VAR_5->bi_iter.bi_sector -
  VAR_8 + VAR_10;

 if (FUNC_18((FUNC_5(VAR_5) == VAR_2) &&
       !FUNC_8(VAR_5->bi_disk->queue))) {

  FUNC_3(VAR_5);
 } else {
  if (VAR_4->gendisk)
   FUNC_17(VAR_5->bi_disk->queue,
           VAR_5, FUNC_9(VAR_4->gendisk),
           VAR_11);
  FUNC_14(VAR_4, VAR_5);
  FUNC_13(VAR_4, VAR_5);
  FUNC_10(VAR_5);
 }
 return 1;

out_of_bounds:
 FUNC_16("md/linear:%s: make_request: Sector %llu out of bounds on dev %s: %llu sectors, offset %llu\n",
        FUNC_15(VAR_4),
        (unsigned long long)VAR_5->bi_iter.bi_sector,
        FUNC_0(VAR_7->rdev->bdev, VAR_6),
        (unsigned long long)VAR_7->rdev->sectors,
        (unsigned long long)VAR_8);
 FUNC_4(VAR_5);
 return 1;
}
