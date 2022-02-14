
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_exception_table {int dummy; } ;
struct dm_snapshot {scalar_t__ valid; int snapshot_overflowed; struct dm_exception_store* store; TYPE_1__* ti; struct dm_exception_table complete; } ;
struct dm_exception_store {int chunk_size; struct dm_snapshot* snap; int userspace_supports_overflow; } ;
struct TYPE_2__ {int max_io_len; } ;



__attribute__((used)) static void FUNC_0(struct dm_snapshot *VAR_0,
      struct dm_snapshot *VAR_1)
{
 union {
  struct dm_exception_table table_swap;
  struct dm_exception_store *store_swap;
 } VAR_2;




 VAR_2.table_swap = VAR_1->complete;
 VAR_1->complete = VAR_0->complete;
 VAR_0->complete = VAR_2.table_swap;

 VAR_2.store_swap = VAR_1->store;
 VAR_1->store = VAR_0->store;
 VAR_1->store->userspace_supports_overflow = VAR_2.store_swap->userspace_supports_overflow;
 VAR_0->store = VAR_2.store_swap;

 VAR_1->store->snap = VAR_1;
 VAR_0->store->snap = VAR_0;

 VAR_1->ti->max_io_len = VAR_1->store->chunk_size;
 VAR_1->valid = VAR_0->valid;
 VAR_1->snapshot_overflowed = VAR_0->snapshot_overflowed;




 VAR_0->valid = 0;
}
