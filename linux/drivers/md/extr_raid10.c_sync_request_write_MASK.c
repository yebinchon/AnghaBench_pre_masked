
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resync_pages {struct r10bio* raid_bio; struct page** pages; } ;
struct r10conf {int copies; TYPE_3__* mirrors; } ;
struct r10bio {int sectors; int remaining; TYPE_4__* devs; } ;
struct page {int dummy; } ;
struct mddev {int recovery; int resync_mismatches; struct r10conf* private; } ;
struct md_rdev {int bdev; scalar_t__ data_offset; int flags; int nr_pending; int mddev; } ;
struct TYPE_6__ {int bi_size; int bi_sector; scalar_t__ bi_idx; } ;
struct bio {scalar_t__ bi_end_io; TYPE_2__ bi_iter; int bi_opf; struct resync_pages* bi_private; int bi_status; } ;
struct TYPE_8__ {int devnum; struct bio* bio; struct bio* repl_bio; int addr; } ;
struct TYPE_7__ {TYPE_1__* replacement; struct md_rdev* rdev; } ;
struct TYPE_5__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct bio*,struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*,int ) ;
 int FUNC_8 (struct bio*,int ,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (struct bio*) ;
 struct resync_pages* FUNC_10 (struct bio*) ;
 int FUNC_11 (struct bio*,struct resync_pages*,int) ;
 int FUNC_12 (struct mddev*,int,int) ;
 int FUNC_13 (int ,struct md_rdev*) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ,int) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (struct r10bio*) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static void FUNC_19(struct mddev *VAR_8, struct r10bio *VAR_9)
{
 struct r10conf *VAR_10 = VAR_8->private;
 int VAR_11, VAR_12;
 struct bio *VAR_13, *VAR_14;
 int VAR_15;
 struct page **VAR_16, **VAR_17;

 FUNC_3(&VAR_9->remaining, 1);


 for (VAR_11=0; VAR_11<VAR_10->copies; VAR_11++)
  if (!VAR_9->devs[VAR_11].bio->bi_status)
   break;

 if (VAR_11 == VAR_10->copies)
  goto done;

 VAR_12 = VAR_11;
 VAR_14 = VAR_9->devs[VAR_11].bio;
 VAR_14->bi_iter.bi_size = VAR_9->sectors << 9;
 VAR_14->bi_iter.bi_idx = 0;
 VAR_17 = FUNC_10(VAR_14)->pages;

 VAR_15 = (VAR_9->sectors + (VAR_4 >> 9) - 1) >> (VAR_3 - 9);

 for (VAR_11=0 ; VAR_11 < VAR_10->copies ; VAR_11++) {
  int VAR_18, VAR_19;
  struct md_rdev *VAR_20;
  struct resync_pages *VAR_21;

  VAR_13 = VAR_9->devs[VAR_11].bio;

  if (VAR_13->bi_end_io != VAR_6)
   continue;
  if (VAR_11 == VAR_12)
   continue;

  VAR_16 = FUNC_10(VAR_13)->pages;
  VAR_19 = VAR_9->devs[VAR_11].devnum;
  VAR_20 = VAR_10->mirrors[VAR_19].rdev;
  if (!VAR_9->devs[VAR_11].bio->bi_status) {




   int VAR_22 = VAR_9->sectors;
   for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
    int VAR_23 = VAR_4;
    if (VAR_22 < (VAR_23 / 512))
     VAR_23 = VAR_22 * 512;
    if (FUNC_15(FUNC_16(VAR_17[VAR_18]),
        FUNC_16(VAR_16[VAR_18]),
        VAR_23))
     break;
    VAR_22 -= VAR_23/512;
   }
   if (VAR_18 == VAR_15)
    continue;
   FUNC_0(VAR_9->sectors, &VAR_8->resync_mismatches);
   if (FUNC_18(VAR_2, &VAR_8->recovery))

    continue;
  } else if (FUNC_18(VAR_0, &VAR_20->flags)) {

   FUNC_13(VAR_20->mddev, VAR_20);
   continue;
  }





  VAR_21 = FUNC_10(VAR_13);
  FUNC_5(VAR_13);

  FUNC_11(VAR_13, VAR_21, VAR_14->bi_iter.bi_size);

  VAR_21->raid_bio = VAR_9;
  VAR_13->bi_private = VAR_21;
  VAR_13->bi_iter.bi_sector = VAR_9->devs[VAR_11].addr;
  VAR_13->bi_end_io = VAR_7;
  FUNC_8(VAR_13, VAR_5, 0);

  FUNC_4(VAR_13, VAR_14);

  FUNC_2(&VAR_10->mirrors[VAR_19].rdev->nr_pending);
  FUNC_2(&VAR_9->remaining);
  FUNC_14(VAR_10->mirrors[VAR_19].rdev->bdev, FUNC_6(VAR_13));

  if (FUNC_18(VAR_0, &VAR_10->mirrors[VAR_19].rdev->flags))
   VAR_13->bi_opf |= VAR_1;
  VAR_13->bi_iter.bi_sector += VAR_10->mirrors[VAR_19].rdev->data_offset;
  FUNC_7(VAR_13, VAR_10->mirrors[VAR_19].rdev->bdev);
  FUNC_9(VAR_13);
 }




 for (VAR_11 = 0; VAR_11 < VAR_10->copies; VAR_11++) {
  int VAR_24;

  VAR_13 = VAR_9->devs[VAR_11].repl_bio;
  if (!VAR_13 || !VAR_13->bi_end_io)
   continue;
  if (VAR_9->devs[VAR_11].bio->bi_end_io != VAR_7
      && VAR_9->devs[VAR_11].bio != VAR_14)
   FUNC_4(VAR_13, VAR_14);
  VAR_24 = VAR_9->devs[VAR_11].devnum;
  FUNC_2(&VAR_9->remaining);
  FUNC_14(VAR_10->mirrors[VAR_24].replacement->bdev,
        FUNC_6(VAR_13));
  FUNC_9(VAR_13);
 }

done:
 if (FUNC_1(&VAR_9->remaining)) {
  FUNC_12(VAR_8, VAR_9->sectors, 1);
  FUNC_17(VAR_9);
 }
}
