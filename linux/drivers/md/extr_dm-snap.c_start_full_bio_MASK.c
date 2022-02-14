
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int kcopyd_client; } ;
struct dm_snap_pending_exception {int full_bio_end_io; struct bio* full_bio; struct dm_snapshot* snap; } ;
struct bio {void* bi_private; int bi_end_io; } ;


 int FUNC_0 (struct dm_snapshot*) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,struct dm_snap_pending_exception*) ;
 int VAR_1 ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static void FUNC_3(struct dm_snap_pending_exception *VAR_2,
      struct bio *VAR_3)
{
 struct dm_snapshot *VAR_4 = VAR_2->snap;
 void *VAR_5;

 VAR_2->full_bio = VAR_3;
 VAR_2->full_bio_end_io = VAR_3->bi_end_io;

 FUNC_0(VAR_4);
 VAR_5 = FUNC_1(VAR_4->kcopyd_client,
         VAR_0, VAR_2);

 VAR_3->bi_end_io = VAR_1;
 VAR_3->bi_private = VAR_5;

 FUNC_2(VAR_3);
}
