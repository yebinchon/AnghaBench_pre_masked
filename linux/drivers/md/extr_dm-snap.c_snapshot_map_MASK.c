
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {int snapshot_overflowed; int lock; TYPE_3__* origin; scalar_t__ valid; TYPE_4__* store; int complete; scalar_t__ discard_passdown_origin; TYPE_1__* cow; } ;
struct dm_exception {int dummy; } ;
struct dm_snap_pending_exception {int started; int snapshot_bios; struct dm_exception e; } ;
struct dm_exception_table_lock {int dummy; } ;
struct TYPE_6__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; } ;
typedef int chunk_t ;
struct TYPE_8__ {scalar_t__ userspace_supports_overflow; } ;
struct TYPE_7__ {int bdev; } ;
struct TYPE_5__ {int bdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct dm_snap_pending_exception* FUNC_1 (struct dm_snapshot*,struct dm_snap_pending_exception*,int ) ;
 int FUNC_2 (struct dm_snapshot*,int ) ;
 struct dm_snap_pending_exception* FUNC_3 (struct dm_snapshot*,int ) ;
 struct dm_snap_pending_exception* FUNC_4 (struct dm_snapshot*) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (int *,struct bio*) ;
 scalar_t__ FUNC_8 (struct bio*) ;
 int FUNC_9 (struct bio*,int ) ;
 scalar_t__ FUNC_10 (struct bio*) ;
 int FUNC_11 (struct dm_exception_table_lock*) ;
 int FUNC_12 (struct dm_snapshot*,int ,struct dm_exception_table_lock*) ;
 int FUNC_13 (struct dm_exception_table_lock*) ;
 struct dm_exception* FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct dm_snap_pending_exception*) ;
 int FUNC_18 (struct bio*) ;
 scalar_t__ FUNC_19 (struct dm_snapshot*,struct bio*) ;
 int FUNC_20 (struct dm_snapshot*,struct dm_exception*,struct bio*,int ) ;
 int FUNC_21 (TYPE_4__*,int ) ;
 int FUNC_22 (struct dm_snap_pending_exception*) ;
 int FUNC_23 (struct dm_snap_pending_exception*,struct bio*) ;
 int FUNC_24 (struct dm_snapshot*,struct bio*,int ) ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct dm_snapshot*,int) ;
 int FUNC_29 (struct dm_snapshot*,struct dm_exception*,struct bio*,int ) ;

__attribute__((used)) static int FUNC_30(struct dm_target *VAR_7, struct bio *VAR_8)
{
 struct dm_exception *VAR_9;
 struct dm_snapshot *VAR_10 = VAR_7->private;
 int VAR_11 = VAR_1;
 chunk_t VAR_12;
 struct dm_snap_pending_exception *VAR_13 = ((void*)0);
 struct dm_exception_table_lock VAR_14;

 FUNC_18(VAR_8);

 if (VAR_8->bi_opf & VAR_5) {
  FUNC_9(VAR_8, VAR_10->cow->bdev);
  return VAR_1;
 }

 VAR_12 = FUNC_21(VAR_10->store, VAR_8->bi_iter.bi_sector);
 FUNC_12(VAR_10, VAR_12, &VAR_14);



 if (!VAR_10->valid)
  return VAR_0;

 if (FUNC_5(VAR_8) == VAR_6) {
  while (FUNC_25(!FUNC_28(VAR_10, 0)))
   ;
 }

 FUNC_15(&VAR_10->lock);
 FUNC_11(&VAR_14);

 if (!VAR_10->valid || (FUNC_25(VAR_10->snapshot_overflowed) &&
     FUNC_5(VAR_8) == VAR_6)) {
  VAR_11 = VAR_0;
  goto out_unlock;
 }

 if (FUNC_25(FUNC_8(VAR_8) == VAR_4)) {
  if (VAR_10->discard_passdown_origin && FUNC_10(VAR_8)) {






   FUNC_9(VAR_8, VAR_10->origin->bdev);
   FUNC_24(VAR_10, VAR_8, VAR_12);
   goto out_unlock;
  }

 }


 VAR_9 = FUNC_14(&VAR_10->complete, VAR_12);
 if (VAR_9) {
  FUNC_20(VAR_10, VAR_9, VAR_8, VAR_12);
  if (FUNC_25(FUNC_8(VAR_8) == VAR_4) &&
      FUNC_19(VAR_10, VAR_8)) {
   FUNC_13(&VAR_14);
   FUNC_26(&VAR_10->lock);
   FUNC_29(VAR_10, VAR_9, VAR_8, VAR_12);
   VAR_11 = VAR_2;
   goto out;
  }
  goto out_unlock;
 }

 if (FUNC_25(FUNC_8(VAR_8) == VAR_4)) {




  FUNC_6(VAR_8);
  VAR_11 = VAR_2;
  goto out_unlock;
 }






 if (FUNC_5(VAR_8) == VAR_6) {
  VAR_13 = FUNC_3(VAR_10, VAR_12);
  if (!VAR_13) {
   FUNC_13(&VAR_14);
   VAR_13 = FUNC_4(VAR_10);
   FUNC_11(&VAR_14);

   VAR_9 = FUNC_14(&VAR_10->complete, VAR_12);
   if (VAR_9) {
    FUNC_17(VAR_13);
    FUNC_20(VAR_10, VAR_9, VAR_8, VAR_12);
    goto out_unlock;
   }

   VAR_13 = FUNC_1(VAR_10, VAR_13, VAR_12);
   if (!VAR_13) {
    FUNC_13(&VAR_14);
    FUNC_26(&VAR_10->lock);

    FUNC_16(&VAR_10->lock);

    if (VAR_10->store->userspace_supports_overflow) {
     if (VAR_10->valid && !VAR_10->snapshot_overflowed) {
      VAR_10->snapshot_overflowed = 1;
      FUNC_0("Snapshot overflowed: Unable to allocate exception.");
     }
    } else
     FUNC_2(VAR_10, -VAR_3);
    FUNC_27(&VAR_10->lock);

    VAR_11 = VAR_0;
    goto out;
   }
  }

  FUNC_20(VAR_10, &VAR_13->e, VAR_8, VAR_12);

  VAR_11 = VAR_2;

  if (!VAR_13->started && FUNC_19(VAR_10, VAR_8)) {
   VAR_13->started = 1;

   FUNC_13(&VAR_14);
   FUNC_26(&VAR_10->lock);

   FUNC_23(VAR_13, VAR_8);
   goto out;
  }

  FUNC_7(&VAR_13->snapshot_bios, VAR_8);

  if (!VAR_13->started) {

   VAR_13->started = 1;

   FUNC_13(&VAR_14);
   FUNC_26(&VAR_10->lock);

   FUNC_22(VAR_13);
   goto out;
  }
 } else {
  FUNC_9(VAR_8, VAR_10->origin->bdev);
  FUNC_24(VAR_10, VAR_8, VAR_12);
 }

out_unlock:
 FUNC_13(&VAR_14);
 FUNC_26(&VAR_10->lock);
out:
 return VAR_11;
}
