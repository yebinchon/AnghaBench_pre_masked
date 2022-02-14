
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {scalar_t__ first_merging_chunk; scalar_t__ num_merging_chunks; int lock; TYPE_3__* origin; int bios_queued_during_merge; int complete; int valid; int store; TYPE_1__* cow; } ;
struct dm_exception {int dummy; } ;
struct TYPE_5__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; } ;
typedef scalar_t__ chunk_t ;
struct TYPE_6__ {int bdev; } ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*) ;
 struct dm_exception* FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,struct bio*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (struct dm_snapshot*,struct dm_exception*,struct bio*,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (struct dm_snapshot*,struct bio*,scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct dm_target *VAR_5, struct bio *VAR_6)
{
 struct dm_exception *VAR_7;
 struct dm_snapshot *VAR_8 = VAR_5->private;
 int VAR_9 = VAR_0;
 chunk_t VAR_10;

 FUNC_9(VAR_6);

 if (VAR_6->bi_opf & VAR_3) {
  if (!FUNC_5(VAR_6))
   FUNC_4(VAR_6, VAR_8->origin->bdev);
  else
   FUNC_4(VAR_6, VAR_8->cow->bdev);
  return VAR_0;
 }

 if (FUNC_13(FUNC_3(VAR_6) == VAR_2)) {

  FUNC_1(VAR_6);
  return VAR_1;
 }

 VAR_10 = FUNC_11(VAR_8->store, VAR_6->bi_iter.bi_sector);

 FUNC_8(&VAR_8->lock);


 if (!VAR_8->valid)
  goto redirect_to_origin;


 VAR_7 = FUNC_6(&VAR_8->complete, VAR_10);
 if (VAR_7) {

  if (FUNC_0(VAR_6) == VAR_4 &&
      VAR_10 >= VAR_8->first_merging_chunk &&
      VAR_10 < (VAR_8->first_merging_chunk +
        VAR_8->num_merging_chunks)) {
   FUNC_4(VAR_6, VAR_8->origin->bdev);
   FUNC_2(&VAR_8->bios_queued_during_merge, VAR_6);
   VAR_9 = VAR_1;
   goto out_unlock;
  }

  FUNC_10(VAR_8, VAR_7, VAR_6, VAR_10);

  if (FUNC_0(VAR_6) == VAR_4)
   FUNC_12(VAR_8, VAR_6, VAR_10);
  goto out_unlock;
 }

redirect_to_origin:
 FUNC_4(VAR_6, VAR_8->origin->bdev);

 if (FUNC_0(VAR_6) == VAR_4) {
  FUNC_14(&VAR_8->lock);
  return FUNC_7(VAR_8->origin, VAR_6, 0);
 }

out_unlock:
 FUNC_14(&VAR_8->lock);

 return VAR_9;
}
