
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snap_tracked_chunk {int node; } ;
struct bio {int dummy; } ;


 struct dm_snap_tracked_chunk* FUNC_0 (struct bio*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct bio *VAR_0)
{
 struct dm_snap_tracked_chunk *VAR_1 = FUNC_0(VAR_0, sizeof(struct dm_snap_tracked_chunk));
 return !FUNC_1(&VAR_1->node);
}
