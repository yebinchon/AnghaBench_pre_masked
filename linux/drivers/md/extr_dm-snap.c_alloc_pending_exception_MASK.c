
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int pending_exceptions_count; int pending_pool; } ;
struct dm_snap_pending_exception {struct dm_snapshot* snap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dm_snap_pending_exception* FUNC_1 (int *,int ) ;

__attribute__((used)) static struct dm_snap_pending_exception *FUNC_2(struct dm_snapshot *VAR_1)
{
 struct dm_snap_pending_exception *VAR_2 = FUNC_1(&VAR_1->pending_pool,
            VAR_0);

 FUNC_0(&VAR_1->pending_exceptions_count);
 VAR_2->snap = VAR_1;

 return VAR_2;
}
