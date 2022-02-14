
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int dummy; } ;
struct dm_snap_pending_exception {int dummy; } ;
typedef int chunk_t ;


 struct dm_snap_pending_exception* FUNC_0 (struct dm_snapshot*,struct dm_snap_pending_exception*,int ) ;
 struct dm_snap_pending_exception* FUNC_1 (struct dm_snapshot*,int ) ;
 int FUNC_2 (struct dm_snap_pending_exception*) ;

__attribute__((used)) static struct dm_snap_pending_exception *
FUNC_3(struct dm_snapshot *VAR_0,
    struct dm_snap_pending_exception *VAR_1, chunk_t VAR_2)
{
 struct dm_snap_pending_exception *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_1);
  return VAR_3;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
