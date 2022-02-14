
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_snapshot {TYPE_2__* store; } ;
struct dm_snap_pending_exception {int copy_error; int e; struct dm_snapshot* snap; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* commit_exception ) (TYPE_2__*,int *,int,int ,struct dm_snap_pending_exception*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int,int ,struct dm_snap_pending_exception*) ;

__attribute__((used)) static void FUNC_1(struct dm_snap_pending_exception *VAR_1)
{
 struct dm_snapshot *VAR_2 = VAR_1->snap;


 VAR_2->store->type->commit_exception(VAR_2->store, &VAR_1->e, !VAR_1->copy_error,
      VAR_0, VAR_1);
}
