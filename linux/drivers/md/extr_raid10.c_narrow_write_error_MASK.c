
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r10conf {TYPE_1__* mirrors; } ;
struct r10bio {int sectors; int sector; TYPE_3__* devs; struct mddev* mddev; struct bio* master_bio; } ;
struct mddev {int bio_set; struct r10conf* private; } ;
struct TYPE_6__ {int shift; } ;
struct md_rdev {int bdev; TYPE_2__ badblocks; } ;
struct TYPE_8__ {int bi_sector; } ;
struct bio {TYPE_4__ bi_iter; } ;
typedef int sector_t ;
struct TYPE_7__ {size_t devnum; int addr; } ;
struct TYPE_5__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct bio* FUNC_1 (struct bio*,int ,int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int ,int ) ;
 int FUNC_5 (struct bio*,int,int) ;
 int FUNC_6 (struct r10bio*,struct md_rdev*) ;
 scalar_t__ FUNC_7 (struct md_rdev*,int,int,int ) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (struct bio*) ;

__attribute__((used)) static int FUNC_10(struct r10bio *VAR_2, int VAR_3)
{
 struct bio *VAR_4 = VAR_2->master_bio;
 struct mddev *VAR_5 = VAR_2->mddev;
 struct r10conf *VAR_6 = VAR_5->private;
 struct md_rdev *VAR_7 = VAR_6->mirrors[VAR_2->devs[VAR_3].devnum].rdev;
 int VAR_8;
 sector_t VAR_9;
 int VAR_10;
 int VAR_11 = VAR_2->sectors;
 int VAR_12 = 1;

 if (VAR_7->badblocks.shift < 0)
  return 0;

 VAR_8 = FUNC_8(1 << VAR_7->badblocks.shift,
    FUNC_0(VAR_7->bdev) >> 9);
 VAR_9 = VAR_2->sector;
 VAR_10 = ((VAR_2->sector + VAR_8)
     & ~(sector_t)(VAR_8 - 1))
  - VAR_9;

 while (VAR_11) {
  struct bio *VAR_13;
  sector_t VAR_14;
  if (VAR_10 > VAR_11)
   VAR_10 = VAR_11;

  VAR_13 = FUNC_1(VAR_4, VAR_0, &VAR_5->bio_set);
  FUNC_5(VAR_13, VAR_9 - VAR_4->bi_iter.bi_sector, VAR_10);
  VAR_14 = VAR_2->devs[VAR_3].addr + (VAR_9 - VAR_2->sector);
  VAR_13->bi_iter.bi_sector = VAR_14 +
       FUNC_6(VAR_2, VAR_7);
  FUNC_3(VAR_13, VAR_7->bdev);
  FUNC_4(VAR_13, VAR_1, 0);

  if (FUNC_9(VAR_13) < 0)

   VAR_12 = FUNC_7(VAR_7, VAR_14,
      VAR_10, 0)
    && VAR_12;

  FUNC_2(VAR_13);
  VAR_11 -= VAR_10;
  VAR_9 += VAR_10;
  VAR_10 = VAR_8;
 }
 return VAR_12;
}
