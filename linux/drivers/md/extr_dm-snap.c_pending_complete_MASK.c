
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int lock; int complete; int valid; } ;
struct dm_exception {int old_chunk; } ;
struct dm_snap_pending_exception {int full_bio_end_io; struct bio* full_bio; int origin_bios; int snapshot_bios; struct dm_exception e; struct dm_snapshot* snap; } ;
struct dm_exception_table_lock {int dummy; } ;
struct bio {int bi_end_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_snapshot*,int ) ;
 scalar_t__ FUNC_1 (struct dm_snapshot*,int ) ;
 struct dm_exception* FUNC_2 (int ) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 struct bio* FUNC_5 (int *) ;
 int FUNC_6 (struct dm_exception_table_lock*) ;
 int FUNC_7 (struct dm_snapshot*,int ,struct dm_exception_table_lock*) ;
 int FUNC_8 (struct dm_exception_table_lock*) ;
 int FUNC_9 (int *,struct dm_exception*) ;
 int FUNC_10 (struct dm_exception*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct bio*) ;
 int FUNC_13 (struct bio*) ;
 int FUNC_14 (struct dm_exception*) ;
 int FUNC_15 (struct dm_snap_pending_exception*) ;
 int FUNC_16 () ;
 int FUNC_17 (struct dm_snapshot*,int ) ;
 int FUNC_18 (struct dm_snapshot*,struct bio*) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static void FUNC_20(void *VAR_3, int VAR_4)
{
 struct dm_snap_pending_exception *VAR_5 = VAR_3;
 struct dm_exception *VAR_6;
 struct dm_snapshot *VAR_7 = VAR_5->snap;
 struct bio *VAR_8 = ((void*)0);
 struct bio *VAR_9 = ((void*)0);
 struct bio *VAR_10 = ((void*)0);
 struct dm_exception_table_lock VAR_11;
 int VAR_12 = 0;

 FUNC_7(VAR_7, VAR_5->e.old_chunk, &VAR_11);

 if (!VAR_4) {

  FUNC_17(VAR_7, -VAR_0);
  VAR_12 = 1;

  FUNC_6(&VAR_11);
  goto out;
 }

 VAR_6 = FUNC_2(VAR_2);
 if (!VAR_6) {
  FUNC_17(VAR_7, -VAR_1);
  VAR_12 = 1;

  FUNC_6(&VAR_11);
  goto out;
 }
 *VAR_6 = VAR_5->e;

 FUNC_11(&VAR_7->lock);
 FUNC_6(&VAR_11);
 if (!VAR_7->valid) {
  FUNC_19(&VAR_7->lock);
  FUNC_14(VAR_6);
  VAR_12 = 1;

  goto out;
 }
 FUNC_9(&VAR_7->complete, VAR_6);
 FUNC_19(&VAR_7->lock);


 if (FUNC_1(VAR_7, VAR_5->e.old_chunk)) {
  FUNC_8(&VAR_11);
  FUNC_0(VAR_7, VAR_5->e.old_chunk);
  FUNC_6(&VAR_11);
 }

out:

 FUNC_10(&VAR_5->e);

 FUNC_8(&VAR_11);

 VAR_9 = FUNC_5(&VAR_5->snapshot_bios);
 VAR_8 = FUNC_5(&VAR_5->origin_bios);
 VAR_10 = VAR_5->full_bio;
 if (VAR_10)
  VAR_10->bi_end_io = VAR_5->full_bio_end_io;
 FUNC_16();


 if (VAR_12) {
  if (VAR_10)
   FUNC_4(VAR_10);
  FUNC_12(VAR_9);
 } else {
  if (VAR_10)
   FUNC_3(VAR_10);
  FUNC_13(VAR_9);
 }

 FUNC_18(VAR_7, VAR_8);

 FUNC_15(VAR_5);
}
