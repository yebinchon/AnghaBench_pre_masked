
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dm_snapshot {int pending; int pe_allocation_lock; int exception_start_sequence; TYPE_2__* store; } ;
struct TYPE_7__ {int old_chunk; } ;
struct dm_snap_pending_exception {TYPE_3__ e; scalar_t__ exception_sequence; int * full_bio; scalar_t__ started; int snapshot_bios; int origin_bios; } ;
typedef int chunk_t ;
struct TYPE_6__ {TYPE_1__* type; } ;
struct TYPE_5__ {scalar_t__ (* prepare_exception ) (TYPE_2__*,TYPE_3__*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (struct dm_snap_pending_exception*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static struct dm_snap_pending_exception *
FUNC_6(struct dm_snapshot *VAR_0,
      struct dm_snap_pending_exception *VAR_1, chunk_t VAR_2)
{
 VAR_1->e.old_chunk = VAR_2;
 FUNC_0(&VAR_1->origin_bios);
 FUNC_0(&VAR_1->snapshot_bios);
 VAR_1->started = 0;
 VAR_1->full_bio = ((void*)0);

 FUNC_3(&VAR_0->pe_allocation_lock);
 if (VAR_0->store->type->prepare_exception(VAR_0->store, &VAR_1->e)) {
  FUNC_4(&VAR_0->pe_allocation_lock);
  FUNC_2(VAR_1);
  return ((void*)0);
 }

 VAR_1->exception_sequence = VAR_0->exception_start_sequence++;
 FUNC_4(&VAR_0->pe_allocation_lock);

 FUNC_1(&VAR_0->pending, &VAR_1->e);

 return VAR_1;
}
