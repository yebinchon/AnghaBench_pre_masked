
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_region_hash {void (* dispatch_bios ) (void*,struct bio_list*) ;void (* wakeup_workers ) (void*) ;void (* wakeup_all_recovery_waiters ) (void*) ;unsigned int max_recovery; unsigned int mask; unsigned int nr_buckets; int * buckets; int region_pool; scalar_t__ flush_failure; int failed_recovered_regions; int recovered_regions; int quiesced_regions; int clean_regions; int recovery_in_flight; int recovery_count; int region_lock; int prime; int shift; int hash_lock; int region_shift; int region_size; struct dm_dirty_log* log; int target_begin; void* context; } ;
struct dm_region {int dummy; } ;
struct dm_dirty_log {int dummy; } ;
typedef int sector_t ;
typedef int region_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct dm_region_hash* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct dm_region_hash*) ;
 struct dm_region_hash* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int ) ;

struct dm_region_hash *FUNC_14(
  void *VAR_5, void (*VAR_6)(void *VAR_7,
           struct bio_list *VAR_8),
  void (*VAR_9)(void *VAR_10),
  void (*VAR_11)(void *VAR_12),
  sector_t VAR_13, unsigned VAR_14,
  struct dm_dirty_log *VAR_15, uint32_t VAR_16,
  region_t VAR_17)
{
 struct dm_region_hash *VAR_18;
 unsigned VAR_19, VAR_20;
 size_t VAR_21;
 int VAR_22;





 VAR_20 = VAR_17 >> 6;
 for (VAR_19 = 128u; VAR_19 < VAR_20; VAR_19 <<= 1)
  ;
 VAR_19 >>= 1;

 VAR_18 = FUNC_7(sizeof(*VAR_18), VAR_1);
 if (!VAR_18) {
  FUNC_0("unable to allocate region hash memory");
  return FUNC_1(-VAR_0);
 }

 VAR_18->context = VAR_5;
 VAR_18->dispatch_bios = VAR_6;
 VAR_18->wakeup_workers = VAR_9;
 VAR_18->wakeup_all_recovery_waiters = VAR_11;
 VAR_18->target_begin = VAR_13;
 VAR_18->max_recovery = VAR_14;
 VAR_18->log = VAR_15;
 VAR_18->region_size = VAR_16;
 VAR_18->region_shift = FUNC_3(VAR_16);
 FUNC_9(&VAR_18->hash_lock);
 VAR_18->mask = VAR_19 - 1;
 VAR_18->nr_buckets = VAR_19;

 VAR_18->shift = VAR_4;
 VAR_18->prime = VAR_3;

 VAR_18->buckets = FUNC_13(FUNC_4(VAR_19, sizeof(*VAR_18->buckets)));
 if (!VAR_18->buckets) {
  FUNC_0("unable to allocate region hash bucket memory");
  FUNC_6(VAR_18);
  return FUNC_1(-VAR_0);
 }

 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++)
  FUNC_2(VAR_18->buckets + VAR_21);

 FUNC_11(&VAR_18->region_lock);
 FUNC_10(&VAR_18->recovery_count, 0);
 FUNC_5(&VAR_18->recovery_in_flight, 0);
 FUNC_2(&VAR_18->clean_regions);
 FUNC_2(&VAR_18->quiesced_regions);
 FUNC_2(&VAR_18->recovered_regions);
 FUNC_2(&VAR_18->failed_recovered_regions);
 VAR_18->flush_failure = 0;

 VAR_22 = FUNC_8(&VAR_18->region_pool, VAR_2,
     sizeof(struct dm_region));
 if (VAR_22) {
  FUNC_12(VAR_18->buckets);
  FUNC_6(VAR_18);
  VAR_18 = FUNC_1(-VAR_0);
 }

 return VAR_18;
}
