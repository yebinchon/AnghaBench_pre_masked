
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* write_misses; void* write_hits; void* read_misses; void* read_hits; } ;
struct dm_cache_metadata {int changed; void* dirty_root; TYPE_1__ stats; void* policy_hint_size; void** policy_version; int policy_name; int cache_blocks; void* data_block_size; int discard_nr_blocks; void* discard_block_size; void* discard_root; void* hint_root; void* root; void* flags; void* version; } ;
struct cache_disk_superblock {int dirty_root; int write_misses; int write_hits; int read_misses; int read_hits; int policy_hint_size; int * policy_version; int policy_name; int cache_blocks; int data_block_size; int discard_nr_blocks; int discard_block_size; int discard_root; int hint_root; int mapping_root; int flags; int version; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dm_cache_metadata*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(struct dm_cache_metadata *VAR_0,
       struct cache_disk_superblock *VAR_1)
{
 VAR_0->version = FUNC_0(VAR_1->version);
 VAR_0->flags = FUNC_0(VAR_1->flags);
 VAR_0->root = FUNC_1(VAR_1->mapping_root);
 VAR_0->hint_root = FUNC_1(VAR_1->hint_root);
 VAR_0->discard_root = FUNC_1(VAR_1->discard_root);
 VAR_0->discard_block_size = FUNC_1(VAR_1->discard_block_size);
 VAR_0->discard_nr_blocks = FUNC_5(FUNC_1(VAR_1->discard_nr_blocks));
 VAR_0->data_block_size = FUNC_0(VAR_1->data_block_size);
 VAR_0->cache_blocks = FUNC_4(FUNC_0(VAR_1->cache_blocks));
 FUNC_3(VAR_0->policy_name, VAR_1->policy_name, sizeof(VAR_0->policy_name));
 VAR_0->policy_version[0] = FUNC_0(VAR_1->policy_version[0]);
 VAR_0->policy_version[1] = FUNC_0(VAR_1->policy_version[1]);
 VAR_0->policy_version[2] = FUNC_0(VAR_1->policy_version[2]);
 VAR_0->policy_hint_size = FUNC_0(VAR_1->policy_hint_size);

 VAR_0->stats.read_hits = FUNC_0(VAR_1->read_hits);
 VAR_0->stats.read_misses = FUNC_0(VAR_1->read_misses);
 VAR_0->stats.write_hits = FUNC_0(VAR_1->write_hits);
 VAR_0->stats.write_misses = FUNC_0(VAR_1->write_misses);

 if (FUNC_2(VAR_0))
  VAR_0->dirty_root = FUNC_1(VAR_1->dirty_root);

 VAR_0->changed = 0;
}
