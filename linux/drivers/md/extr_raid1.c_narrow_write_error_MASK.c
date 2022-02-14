
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r1conf {TYPE_1__* mirrors; } ;
struct r1bio {int sectors; int sector; int master_bio; int behind_master_bio; int state; struct mddev* mddev; } ;
struct mddev {int bio_set; struct r1conf* private; } ;
struct TYPE_5__ {int shift; } ;
struct md_rdev {int bdev; scalar_t__ data_offset; TYPE_2__ badblocks; } ;
struct TYPE_6__ {int bi_sector; int bi_size; } ;
struct bio {TYPE_3__ bi_iter; } ;
typedef int sector_t ;
struct TYPE_4__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct bio* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int ,int ) ;
 int FUNC_5 (struct bio*,int,int) ;
 scalar_t__ FUNC_6 (struct md_rdev*,int,int,int ) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (struct bio*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct r1bio *VAR_3, int VAR_4)
{
 struct mddev *VAR_5 = VAR_3->mddev;
 struct r1conf *VAR_6 = VAR_5->private;
 struct md_rdev *VAR_7 = VAR_6->mirrors[VAR_4].rdev;
 int VAR_8;
 sector_t VAR_9;
 int VAR_10;
 int VAR_11 = VAR_3->sectors;
 int VAR_12 = 1;

 if (VAR_7->badblocks.shift < 0)
  return 0;

 VAR_8 = FUNC_7(1 << VAR_7->badblocks.shift,
    FUNC_0(VAR_7->bdev) >> 9);
 VAR_9 = VAR_3->sector;
 VAR_10 = ((VAR_9 + VAR_8)
     & ~(sector_t)(VAR_8 - 1))
  - VAR_9;

 while (VAR_11) {
  struct bio *VAR_13;
  if (VAR_10 > VAR_11)
   VAR_10 = VAR_11;


  if (FUNC_9(VAR_1, &VAR_3->state)) {
   VAR_13 = FUNC_1(VAR_3->behind_master_bio,
           VAR_0,
           &VAR_5->bio_set);
  } else {
   VAR_13 = FUNC_1(VAR_3->master_bio, VAR_0,
           &VAR_5->bio_set);
  }

  FUNC_4(VAR_13, VAR_2, 0);
  VAR_13->bi_iter.bi_sector = VAR_3->sector;
  VAR_13->bi_iter.bi_size = VAR_3->sectors << 9;

  FUNC_5(VAR_13, VAR_9 - VAR_3->sector, VAR_10);
  VAR_13->bi_iter.bi_sector += VAR_7->data_offset;
  FUNC_3(VAR_13, VAR_7->bdev);

  if (FUNC_8(VAR_13) < 0)

   VAR_12 = FUNC_6(VAR_7, VAR_9,
      VAR_10, 0)
    && VAR_12;

  FUNC_2(VAR_13);
  VAR_11 -= VAR_10;
  VAR_9 += VAR_10;
  VAR_10 = VAR_8;
 }
 return VAR_12;
}
