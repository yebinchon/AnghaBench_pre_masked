
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stripe_head {size_t pd_idx; int qd_idx; int state; scalar_t__ bm_seq; int sector; int stripe_lock; scalar_t__ overwrite_disks; TYPE_2__* dev; } ;
struct r5conf {int chunk_sectors; int raid_disks; int max_degraded; int preread_active_stripes; scalar_t__ seq_flush; TYPE_3__* mddev; int wait_for_overlap; } ;
struct mddev {scalar_t__ reshape_position; int bitmap; struct r5conf* private; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {int * bi_next; TYPE_1__ bi_iter; } ;
typedef int sector_t ;
struct TYPE_6__ {scalar_t__ bitmap; } ;
struct TYPE_5__ {int flags; struct bio* towrite; scalar_t__ toread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 (struct mddev*,struct bio*) ;
 int FUNC_10 (int *,int *,int ) ;
 struct stripe_head* FUNC_11 (struct r5conf*,int,int ,int ,int ) ;
 int FUNC_12 (struct stripe_head*) ;
 int FUNC_13 (struct mddev*,struct stripe_head*) ;
 int FUNC_14 () ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_21(struct mddev *VAR_12, struct bio *VAR_13)
{
 struct r5conf *VAR_14 = VAR_12->private;
 sector_t VAR_15, VAR_16;
 struct stripe_head *VAR_17;
 int VAR_18;

 if (VAR_12->reshape_position != VAR_0)

  return;

 VAR_15 = VAR_13->bi_iter.bi_sector & ~((sector_t)VAR_8-1);
 VAR_16 = FUNC_3(VAR_13);

 VAR_13->bi_next = ((void*)0);

 VAR_18 = VAR_14->chunk_sectors *
  (VAR_14->raid_disks - VAR_14->max_degraded);
 VAR_15 = FUNC_1(VAR_15,
            VAR_18);
 FUNC_15(VAR_16, VAR_18);

 VAR_15 *= VAR_14->chunk_sectors;
 VAR_16 *= VAR_14->chunk_sectors;

 for (; VAR_15 < VAR_16;
      VAR_15 += VAR_8) {
  FUNC_0(VAR_11);
  int VAR_19;
 again:
  VAR_17 = FUNC_11(VAR_14, VAR_15, 0, 0, 0);
  FUNC_10(&VAR_14->wait_for_overlap, &VAR_11,
    VAR_10);
  FUNC_16(VAR_2, &VAR_17->dev[VAR_17->pd_idx].flags);
  if (FUNC_20(VAR_9, &VAR_17->state)) {
   FUNC_12(VAR_17);
   FUNC_14();
   goto again;
  }
  FUNC_6(VAR_2, &VAR_17->dev[VAR_17->pd_idx].flags);
  FUNC_17(&VAR_17->stripe_lock);
  for (VAR_19 = 0; VAR_19 < VAR_14->raid_disks; VAR_19++) {
   if (VAR_19 == VAR_17->pd_idx || VAR_19 == VAR_17->qd_idx)
    continue;
   if (VAR_17->dev[VAR_19].towrite || VAR_17->dev[VAR_19].toread) {
    FUNC_16(VAR_2, &VAR_17->dev[VAR_19].flags);
    FUNC_18(&VAR_17->stripe_lock);
    FUNC_12(VAR_17);
    FUNC_14();
    goto again;
   }
  }
  FUNC_16(VAR_5, &VAR_17->state);
  FUNC_7(&VAR_14->wait_for_overlap, &VAR_11);
  VAR_17->overwrite_disks = 0;
  for (VAR_19 = 0; VAR_19 < VAR_14->raid_disks; VAR_19++) {
   if (VAR_19 == VAR_17->pd_idx || VAR_19 == VAR_17->qd_idx)
    continue;
   VAR_17->dev[VAR_19].towrite = VAR_13;
   FUNC_16(VAR_1, &VAR_17->dev[VAR_19].flags);
   FUNC_5(VAR_13);
   FUNC_9(VAR_12, VAR_13);
   VAR_17->overwrite_disks++;
  }
  FUNC_18(&VAR_17->stripe_lock);
  if (VAR_14->mddev->bitmap) {
   for (VAR_19 = 0;
        VAR_19 < VAR_14->raid_disks - VAR_14->max_degraded;
        VAR_19++)
    FUNC_8(VAR_12->bitmap,
           VAR_17->sector,
           VAR_8,
           0);
   VAR_17->bm_seq = VAR_14->seq_flush + 1;
   FUNC_16(VAR_3, &VAR_17->state);
  }

  FUNC_16(VAR_6, &VAR_17->state);
  FUNC_6(VAR_4, &VAR_17->state);
  if (!FUNC_19(VAR_7, &VAR_17->state))
   FUNC_2(&VAR_14->preread_active_stripes);
  FUNC_13(VAR_12, VAR_17);
 }

 FUNC_4(VAR_13);
}
