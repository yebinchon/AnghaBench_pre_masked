
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_cache_policy {int dummy; } ;
struct TYPE_3__ {int nr_top_levels; int nr_in_top_levels; } ;
struct smq_policy {unsigned int nr_hotspot_blocks; int cache_blocks_per_hotspot_block; unsigned int hotspot_level_jump; unsigned int write_promote_level; unsigned int read_promote_level; int migrations_allowed; int es; int * hotspot_hit_bits; int * cache_hit_bits; int table; int hotspot_table; struct dm_cache_policy policy; int bg_work; void* next_cache_period; void* next_hotspot_period; int cache_stats; int hotspot_stats; TYPE_1__ dirty; TYPE_1__ clean; int cache_size; TYPE_1__ hotspot; int lock; scalar_t__ tick; int cache_alloc; int hotspot_alloc; int demote_sentinel_alloc; int writeback_sentinel_alloc; int cache_block_size; int hotspot_block_size; } ;
typedef int sector_t ;
typedef int dm_cblock_t ;
struct TYPE_4__ {int sentinel; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int *,unsigned int*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int *,unsigned int,unsigned int) ;
 int FUNC_12 (struct smq_policy*,int) ;
 void* VAR_3 ;
 int FUNC_13 (struct smq_policy*) ;
 struct smq_policy* FUNC_14 (int,int ) ;
 int FUNC_15 (unsigned int,int) ;
 int FUNC_16 (TYPE_1__*,int *,unsigned int) ;
 int FUNC_17 (struct smq_policy*) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *,unsigned int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,unsigned int) ;

__attribute__((used)) static struct dm_cache_policy *FUNC_22(dm_cblock_t VAR_4,
         sector_t VAR_5,
         sector_t VAR_6,
         bool VAR_7,
         bool VAR_8)
{
 unsigned VAR_9;
 unsigned VAR_10 = 2u * VAR_1;
 unsigned VAR_11 = 2u * VAR_10;
 struct smq_policy *VAR_12 = FUNC_14(sizeof(*VAR_12), VAR_0);

 if (!VAR_12)
  return ((void*)0);

 FUNC_12(VAR_12, VAR_7);
 VAR_12->cache_size = VAR_4;
 VAR_12->cache_block_size = VAR_6;

 FUNC_3(VAR_5, VAR_6, FUNC_7(VAR_4),
       &VAR_12->hotspot_block_size, &VAR_12->nr_hotspot_blocks);

 VAR_12->cache_blocks_per_hotspot_block = FUNC_5(VAR_12->hotspot_block_size, VAR_12->cache_block_size);
 VAR_12->hotspot_level_jump = 1u;
 if (FUNC_19(&VAR_12->es, VAR_11 + VAR_12->nr_hotspot_blocks + FUNC_7(VAR_4))) {
  FUNC_0("couldn't initialize entry space");
  goto bad_pool_init;
 }

 FUNC_11(&VAR_12->writeback_sentinel_alloc, &VAR_12->es, 0, VAR_10);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_8(&VAR_12->writeback_sentinel_alloc, VAR_9)->sentinel = 1;

 FUNC_11(&VAR_12->demote_sentinel_alloc, &VAR_12->es, VAR_10, VAR_11);
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  FUNC_8(&VAR_12->demote_sentinel_alloc, VAR_9)->sentinel = 1;

 FUNC_11(&VAR_12->hotspot_alloc, &VAR_12->es, VAR_11,
         VAR_11 + VAR_12->nr_hotspot_blocks);

 FUNC_11(&VAR_12->cache_alloc, &VAR_12->es,
         VAR_11 + VAR_12->nr_hotspot_blocks,
         VAR_11 + VAR_12->nr_hotspot_blocks + FUNC_7(VAR_4));

 VAR_12->hotspot_hit_bits = FUNC_1(VAR_12->nr_hotspot_blocks);
 if (!VAR_12->hotspot_hit_bits) {
  FUNC_0("couldn't allocate hotspot hit bitset");
  goto bad_hotspot_hit_bits;
 }
 FUNC_4(VAR_12->hotspot_hit_bits, VAR_12->nr_hotspot_blocks);

 if (FUNC_7(VAR_4)) {
  VAR_12->cache_hit_bits = FUNC_1(FUNC_7(VAR_4));
  if (!VAR_12->cache_hit_bits) {
   FUNC_0("couldn't allocate cache hit bitset");
   goto bad_cache_hit_bits;
  }
  FUNC_4(VAR_12->cache_hit_bits, FUNC_7(VAR_12->cache_size));
 } else
  VAR_12->cache_hit_bits = ((void*)0);

 VAR_12->tick = 0;
 FUNC_20(&VAR_12->lock);

 FUNC_16(&VAR_12->hotspot, &VAR_12->es, VAR_2);
 VAR_12->hotspot.nr_top_levels = 8;
 VAR_12->hotspot.nr_in_top_levels = FUNC_15(VAR_12->nr_hotspot_blocks / VAR_2,
        FUNC_7(VAR_12->cache_size) / VAR_12->cache_blocks_per_hotspot_block);

 FUNC_16(&VAR_12->clean, &VAR_12->es, VAR_1);
 FUNC_16(&VAR_12->dirty, &VAR_12->es, VAR_1);

 FUNC_21(&VAR_12->hotspot_stats, VAR_2);
 FUNC_21(&VAR_12->cache_stats, VAR_1);

 if (FUNC_10(&VAR_12->table, &VAR_12->es, FUNC_7(VAR_4)))
  goto bad_alloc_table;

 if (FUNC_10(&VAR_12->hotspot_table, &VAR_12->es, VAR_12->nr_hotspot_blocks))
  goto bad_alloc_hotspot_table;

 FUNC_17(VAR_12);
 VAR_12->write_promote_level = VAR_12->read_promote_level = VAR_2;

 VAR_12->next_hotspot_period = VAR_3;
 VAR_12->next_cache_period = VAR_3;

 VAR_12->bg_work = FUNC_2(4096);
 if (!VAR_12->bg_work)
  goto bad_btracker;

 VAR_12->migrations_allowed = VAR_8;

 return &VAR_12->policy;

bad_btracker:
 FUNC_9(&VAR_12->hotspot_table);
bad_alloc_hotspot_table:
 FUNC_9(&VAR_12->table);
bad_alloc_table:
 FUNC_6(VAR_12->cache_hit_bits);
bad_cache_hit_bits:
 FUNC_6(VAR_12->hotspot_hit_bits);
bad_hotspot_hit_bits:
 FUNC_18(&VAR_12->es);
bad_pool_init:
 FUNC_13(VAR_12);

 return ((void*)0);
}
