
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int tracked_chunk_lock; int * tracked_chunk_hash; } ;
struct dm_snap_tracked_chunk {int node; int chunk; } ;
struct bio {int dummy; } ;
typedef int chunk_t ;


 size_t FUNC_0 (int ) ;
 struct dm_snap_tracked_chunk* FUNC_1 (struct bio*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dm_snapshot *VAR_0, struct bio *VAR_1, chunk_t VAR_2)
{
 struct dm_snap_tracked_chunk *VAR_3 = FUNC_1(VAR_1, sizeof(struct dm_snap_tracked_chunk));

 VAR_3->chunk = VAR_2;

 FUNC_3(&VAR_0->tracked_chunk_lock);
 FUNC_2(&VAR_3->node,
         &VAR_0->tracked_chunk_hash[FUNC_0(VAR_2)]);
 FUNC_4(&VAR_0->tracked_chunk_lock);
}
