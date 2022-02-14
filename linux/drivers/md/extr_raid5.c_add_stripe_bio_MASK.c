
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_head {int disks; int pd_idx; int stripe_lock; TYPE_2__* dev; int state; scalar_t__ bm_seq; scalar_t__ batch_head; scalar_t__ sector; int overwrite_disks; struct r5conf* raid_conf; } ;
struct r5conf {int chunk_sectors; scalar_t__ seq_flush; TYPE_3__* mddev; } ;
struct TYPE_4__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; struct bio* bi_next; int bi_write_hint; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {scalar_t__ bitmap; } ;
struct TYPE_5__ {scalar_t__ sector; int flags; struct bio* towrite; struct bio* toread; int write_hint; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (TYPE_3__*,struct bio*) ;
 int FUNC_6 (char*,unsigned long long,unsigned long long,...) ;
 struct bio* FUNC_7 (struct bio*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct r5conf*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct r5conf*,struct stripe_head*) ;
 scalar_t__ FUNC_13 (struct stripe_head*) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct stripe_head *VAR_6, struct bio *VAR_7, int VAR_8,
     int VAR_9, int VAR_10)
{
 struct bio **VAR_11;
 struct r5conf *VAR_12 = VAR_6->raid_conf;
 int VAR_13=0;

 FUNC_6("adding bi b#%llu to stripe s#%llu\n",
  (unsigned long long)VAR_7->bi_iter.bi_sector,
  (unsigned long long)VAR_6->sector);

 FUNC_10(&VAR_6->stripe_lock);
 VAR_6->dev[VAR_8].write_hint = VAR_7->bi_write_hint;

 if (VAR_6->batch_head)
  goto overlap;
 if (VAR_9) {
  VAR_11 = &VAR_6->dev[VAR_8].towrite;
  if (*VAR_11 == ((void*)0))
   VAR_13 = 1;
 } else
  VAR_11 = &VAR_6->dev[VAR_8].toread;
 while (*VAR_11 && (*VAR_11)->bi_iter.bi_sector < VAR_7->bi_iter.bi_sector) {
  if (FUNC_1(*VAR_11) > VAR_7->bi_iter.bi_sector)
   goto overlap;
  VAR_11 = & (*VAR_11)->bi_next;
 }
 if (*VAR_11 && (*VAR_11)->bi_iter.bi_sector < FUNC_1(VAR_7))
  goto overlap;

 if (VAR_9 && FUNC_8(VAR_12)) {







  sector_t VAR_14;
  sector_t VAR_15 = 0;
  sector_t VAR_16 = 0;
  int VAR_17 = 0;
  int VAR_18;

  for (VAR_18 = 0; VAR_18 < VAR_6->disks; VAR_18++) {
   if (VAR_18 != VAR_6->pd_idx &&
       (VAR_18 == VAR_8 || VAR_6->dev[VAR_18].towrite)) {
    VAR_14 = VAR_6->dev[VAR_18].sector;
    if (VAR_17 == 0 || VAR_14 < VAR_15)
     VAR_15 = VAR_14;
    if (VAR_14 > VAR_16)
     VAR_16 = VAR_14;
    VAR_17++;
   }
  }

  if (VAR_15 + VAR_12->chunk_sectors * (VAR_17 - 1) != VAR_16)
   goto overlap;
 }

 if (!VAR_9 || VAR_10)
  FUNC_3(VAR_2, &VAR_6->state);

 FUNC_0(*VAR_11 && VAR_7->bi_next && (*VAR_11) != VAR_7->bi_next);
 if (*VAR_11)
  VAR_7->bi_next = *VAR_11;
 *VAR_11 = VAR_7;
 FUNC_2(VAR_7);
 FUNC_5(VAR_12->mddev, VAR_7);

 if (VAR_9) {

  sector_t VAR_19 = VAR_6->dev[VAR_8].sector;
  for (VAR_7=VAR_6->dev[VAR_8].towrite;
       VAR_19 < VAR_6->dev[VAR_8].sector + VAR_5 &&
        VAR_7 && VAR_7->bi_iter.bi_sector <= VAR_19;
       VAR_7 = FUNC_7(VAR_7, VAR_6->dev[VAR_8].sector)) {
   if (FUNC_1(VAR_7) >= VAR_19)
    VAR_19 = FUNC_1(VAR_7);
  }
  if (VAR_19 >= VAR_6->dev[VAR_8].sector + VAR_5)
   if (!FUNC_14(VAR_0, &VAR_6->dev[VAR_8].flags))
    VAR_6->overwrite_disks++;
 }

 FUNC_6("added bi b#%llu to stripe s#%llu, disk %d.\n",
  (unsigned long long)(*VAR_11)->bi_iter.bi_sector,
  (unsigned long long)VAR_6->sector, VAR_8);

 if (VAR_12->mddev->bitmap && VAR_13) {
  FUNC_9(VAR_3, &VAR_6->state);
  FUNC_11(&VAR_6->stripe_lock);
  FUNC_4(VAR_12->mddev->bitmap, VAR_6->sector,
         VAR_5, 0);
  FUNC_10(&VAR_6->stripe_lock);
  FUNC_3(VAR_3, &VAR_6->state);
  if (!VAR_6->batch_head) {
   VAR_6->bm_seq = VAR_12->seq_flush+1;
   FUNC_9(VAR_4, &VAR_6->state);
  }
 }
 FUNC_11(&VAR_6->stripe_lock);

 if (FUNC_13(VAR_6))
  FUNC_12(VAR_12, VAR_6);
 return 1;

 overlap:
 FUNC_9(VAR_1, &VAR_6->dev[VAR_8].flags);
 FUNC_11(&VAR_6->stripe_lock);
 return 0;
}
