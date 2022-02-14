
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dm_target {char* error; unsigned int num_flush_bios; int num_discard_bios; int per_io_data_size; struct dm_snapshot* private; int table; } ;
struct dm_snapshot {int valid; TYPE_4__* origin; TYPE_4__* cow; TYPE_3__* store; int complete; int pending; int kcopyd_client; int pending_pool; scalar_t__ discard_passdown_origin; scalar_t__ discard_zeroes_cow; int tracked_chunk_lock; int * tracked_chunk_hash; int in_progress_wait; int bios_queued_during_merge; scalar_t__ num_merging_chunks; scalar_t__ first_merging_chunk; scalar_t__ merge_failed; scalar_t__ state_bits; int pe_lock; int list; int lock; int out_of_order_tree; scalar_t__ exception_complete_sequence; scalar_t__ exception_start_sequence; int pe_allocation_lock; int pending_exceptions_count; scalar_t__ active; scalar_t__ snapshot_overflowed; struct dm_target* ti; } ;
struct dm_snap_tracked_chunk {int dummy; } ;
struct dm_arg_set {unsigned int argc; char** argv; } ;
typedef int fmode_t ;
typedef scalar_t__ dev_t ;
struct TYPE_11__ {TYPE_2__* bdev; } ;
struct TYPE_10__ {scalar_t__ chunk_size; TYPE_1__* type; } ;
struct TYPE_9__ {scalar_t__ bd_dev; } ;
struct TYPE_8__ {int (* read_metadata ) (TYPE_3__*,int ,void*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int FUNC_7 (struct dm_arg_set*,int) ;
 int FUNC_8 (struct dm_target*,unsigned int,char**,struct dm_snapshot*,unsigned int*,TYPE_3__**) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (struct dm_target*,char*,int ,TYPE_4__**) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int VAR_9 ;
 int FUNC_15 (struct dm_target*,TYPE_4__*) ;
 int FUNC_16 (struct dm_target*,scalar_t__) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (struct dm_target*) ;
 int VAR_10 ;
 scalar_t__ FUNC_19 (struct dm_snapshot*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct dm_snapshot*) ;
 struct dm_snapshot* FUNC_23 (int,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ,int ) ;
 int FUNC_26 (struct dm_arg_set*,struct dm_snapshot*,struct dm_target*) ;
 int VAR_11 ;
 int FUNC_27 (struct dm_snapshot*) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (TYPE_3__*,int ,void*) ;
 int FUNC_30 (struct dm_snapshot*) ;

__attribute__((used)) static int FUNC_31(struct dm_target *VAR_12, unsigned int VAR_13, char **VAR_14)
{
 struct dm_snapshot *VAR_15;
 struct dm_arg_set VAR_16;
 int VAR_17;
 int VAR_18 = -VAR_1;
 char *VAR_19, *VAR_20;
 dev_t VAR_21, VAR_22;
 unsigned VAR_23, VAR_24 = 1;
 fmode_t VAR_25 = VAR_3;

 if (VAR_13 < 4) {
  VAR_12->error = "requires 4 or more arguments";
  VAR_18 = -VAR_1;
  goto bad;
 }

 if (FUNC_18(VAR_12)) {
  VAR_24 = 2;
  VAR_25 = VAR_4;
 }

 VAR_15 = FUNC_23(sizeof(*VAR_15), VAR_5);
 if (!VAR_15) {
  VAR_12->error = "Cannot allocate private snapshot structure";
  VAR_18 = -VAR_2;
  goto bad;
 }

 VAR_16.argc = VAR_13;
 VAR_16.argv = VAR_14;
 FUNC_7(&VAR_16, 4);
 VAR_18 = FUNC_26(&VAR_16, VAR_15, VAR_12);
 if (VAR_18)
  goto bad_features;

 VAR_19 = VAR_14[0];
 VAR_14++;
 VAR_13--;

 VAR_18 = FUNC_12(VAR_12, VAR_19, VAR_25, &VAR_15->origin);
 if (VAR_18) {
  VAR_12->error = "Cannot get origin device";
  goto bad_origin;
 }
 VAR_21 = VAR_15->origin->bdev->bd_dev;

 VAR_20 = VAR_14[0];
 VAR_14++;
 VAR_13--;

 VAR_22 = FUNC_11(VAR_20);
 if (VAR_22 && VAR_22 == VAR_21) {
  VAR_12->error = "COW device cannot be the same as origin device";
  VAR_18 = -VAR_1;
  goto bad_cow;
 }

 VAR_18 = FUNC_12(VAR_12, VAR_20, FUNC_17(VAR_12->table), &VAR_15->cow);
 if (VAR_18) {
  VAR_12->error = "Cannot get COW device";
  goto bad_cow;
 }

 VAR_18 = FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15, &VAR_23, &VAR_15->store);
 if (VAR_18) {
  VAR_12->error = "Couldn't create exception store";
  VAR_18 = -VAR_1;
  goto bad_store;
 }

 VAR_14 += VAR_23;
 VAR_13 -= VAR_23;

 VAR_15->ti = VAR_12;
 VAR_15->valid = 1;
 VAR_15->snapshot_overflowed = 0;
 VAR_15->active = 0;
 FUNC_5(&VAR_15->pending_exceptions_count, 0);
 FUNC_28(&VAR_15->pe_allocation_lock);
 VAR_15->exception_start_sequence = 0;
 VAR_15->exception_complete_sequence = 0;
 VAR_15->out_of_order_tree = VAR_7;
 FUNC_20(&VAR_15->lock);
 FUNC_2(&VAR_15->list);
 FUNC_28(&VAR_15->pe_lock);
 VAR_15->state_bits = 0;
 VAR_15->merge_failed = 0;
 VAR_15->first_merging_chunk = 0;
 VAR_15->num_merging_chunks = 0;
 FUNC_6(&VAR_15->bios_queued_during_merge);


 if (FUNC_19(VAR_15)) {
  VAR_12->error = "Unable to allocate hash table space";
  VAR_18 = -VAR_2;
  goto bad_hash_tables;
 }

 FUNC_21(&VAR_15->in_progress_wait);

 VAR_15->kcopyd_client = FUNC_13(&VAR_9);
 if (FUNC_3(VAR_15->kcopyd_client)) {
  VAR_18 = FUNC_4(VAR_15->kcopyd_client);
  VAR_12->error = "Could not create kcopyd client";
  goto bad_kcopyd;
 }

 VAR_18 = FUNC_25(&VAR_15->pending_pool, VAR_6, VAR_11);
 if (VAR_18) {
  VAR_12->error = "Could not allocate mempool for pending exceptions";
  goto bad_pending_pool;
 }

 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++)
  FUNC_1(&VAR_15->tracked_chunk_hash[VAR_17]);

 FUNC_28(&VAR_15->tracked_chunk_lock);

 VAR_12->private = VAR_15;
 VAR_12->num_flush_bios = VAR_24;
 if (VAR_15->discard_zeroes_cow)
  VAR_12->num_discard_bios = (VAR_15->discard_passdown_origin ? 2 : 1);
 VAR_12->per_io_data_size = sizeof(struct dm_snap_tracked_chunk);



 VAR_18 = FUNC_27(VAR_15);
 if (VAR_18 == -VAR_2) {
  VAR_12->error = "Snapshot origin struct allocation failed";
  goto bad_load_and_register;
 } else if (VAR_18 < 0) {

  goto bad_load_and_register;
 }







 if (VAR_18 > 0) {
  VAR_15->store->chunk_size = 0;
  return 0;
 }

 VAR_18 = VAR_15->store->type->read_metadata(VAR_15->store, VAR_8,
       (void *)VAR_15);
 if (VAR_18 < 0) {
  VAR_12->error = "Failed to read snapshot metadata";
  goto bad_read_metadata;
 } else if (VAR_18 > 0) {
  VAR_15->valid = 0;
  FUNC_0("Snapshot is marked invalid.");
 }

 if (!VAR_15->store->chunk_size) {
  VAR_12->error = "Chunk size not set";
  goto bad_read_metadata;
 }

 VAR_18 = FUNC_16(VAR_12, VAR_15->store->chunk_size);
 if (VAR_18)
  goto bad_read_metadata;

 return 0;

bad_read_metadata:
 FUNC_30(VAR_15);
bad_load_and_register:
 FUNC_24(&VAR_15->pending_pool);
bad_pending_pool:
 FUNC_14(VAR_15->kcopyd_client);
bad_kcopyd:
 FUNC_10(&VAR_15->pending, VAR_11);
 FUNC_10(&VAR_15->complete, VAR_10);
bad_hash_tables:
 FUNC_9(VAR_15->store);
bad_store:
 FUNC_15(VAR_12, VAR_15->cow);
bad_cow:
 FUNC_15(VAR_12, VAR_15->origin);
bad_origin:
bad_features:
 FUNC_22(VAR_15);
bad:
 return VAR_18;
}
