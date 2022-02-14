
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snap_tracked_chunk {int node; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int *) ;
 struct dm_snap_tracked_chunk* FUNC_1 (struct bio*,int) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0)
{
 struct dm_snap_tracked_chunk *VAR_1 = FUNC_1(VAR_0, sizeof(struct dm_snap_tracked_chunk));
 FUNC_0(&VAR_1->node);
}
