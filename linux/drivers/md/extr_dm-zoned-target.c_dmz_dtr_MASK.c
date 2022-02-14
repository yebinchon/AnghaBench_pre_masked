
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int chunk_lock; int bio_set; int metadata; int flush_wq; int flush_work; int reclaim; int chunk_wq; } ;
struct dm_target {struct dmz_target* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dm_target*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dmz_target*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct dm_target *VAR_0)
{
 struct dmz_target *VAR_1 = VAR_0->private;

 FUNC_7(VAR_1->chunk_wq);
 FUNC_2(VAR_1->chunk_wq);

 FUNC_4(VAR_1->reclaim);

 FUNC_1(&VAR_1->flush_work);
 FUNC_2(VAR_1->flush_wq);

 (void) FUNC_5(VAR_1->metadata);

 FUNC_3(VAR_1->metadata);

 FUNC_0(&VAR_1->bio_set);

 FUNC_6(VAR_0);

 FUNC_9(&VAR_1->chunk_lock);

 FUNC_8(VAR_1);
}
