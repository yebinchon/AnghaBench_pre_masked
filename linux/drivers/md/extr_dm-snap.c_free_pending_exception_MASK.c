
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int pending_exceptions_count; int pending_pool; } ;
struct dm_snap_pending_exception {struct dm_snapshot* snap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dm_snap_pending_exception*,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct dm_snap_pending_exception *VAR_0)
{
 struct dm_snapshot *VAR_1 = VAR_0->snap;

 FUNC_1(VAR_0, &VAR_1->pending_pool);
 FUNC_2();
 FUNC_0(&VAR_1->pending_exceptions_count);
}
