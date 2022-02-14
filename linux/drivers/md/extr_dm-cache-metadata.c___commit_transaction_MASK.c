
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_misses; int write_hits; int read_misses; int read_hits; } ;
struct dm_cache_metadata {int tm; TYPE_1__ stats; int policy_hint_size; int * policy_version; int policy_name; int cache_blocks; int discard_nr_blocks; int discard_block_size; int discard_root; int hint_root; int dirty_root; int root; int flags; int discard_info; int dirty_info; } ;
struct dm_block {int dummy; } ;
struct cache_disk_superblock {void* write_misses; void* write_hits; void* read_misses; void* read_hits; void* policy_hint_size; void** policy_version; int policy_name; void* cache_blocks; void* discard_nr_blocks; void* discard_block_size; void* discard_root; void* hint_root; void* dirty_root; void* mapping_root; void* flags; } ;
typedef int flags_mutator ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dm_cache_metadata*,struct cache_disk_superblock*) ;
 int FUNC_2 (struct dm_cache_metadata*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int *) ;
 struct cache_disk_superblock* FUNC_6 (struct dm_block*) ;
 int FUNC_7 (int ,struct dm_block*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct dm_cache_metadata*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct dm_cache_metadata*,struct dm_block**) ;
 int FUNC_14 (struct cache_disk_superblock*,int ) ;

__attribute__((used)) static int FUNC_15(struct dm_cache_metadata *VAR_0,
    flags_mutator VAR_1)
{
 int VAR_2;
 struct cache_disk_superblock *VAR_3;
 struct dm_block *VAR_4;




 FUNC_0(sizeof(struct cache_disk_superblock) > 512);

 if (FUNC_11(VAR_0)) {
  VAR_2 = FUNC_5(&VAR_0->dirty_info, VAR_0->dirty_root,
        &VAR_0->dirty_root);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_5(&VAR_0->discard_info, VAR_0->discard_root,
       &VAR_0->discard_root);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_8(VAR_0->tm);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_13(VAR_0, &VAR_4);
 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_6(VAR_4);

 VAR_3->flags = FUNC_3(VAR_0->flags);
 if (VAR_1)
  FUNC_14(VAR_3, VAR_1);

 VAR_3->mapping_root = FUNC_4(VAR_0->root);
 if (FUNC_11(VAR_0))
  VAR_3->dirty_root = FUNC_4(VAR_0->dirty_root);
 VAR_3->hint_root = FUNC_4(VAR_0->hint_root);
 VAR_3->discard_root = FUNC_4(VAR_0->discard_root);
 VAR_3->discard_block_size = FUNC_4(VAR_0->discard_block_size);
 VAR_3->discard_nr_blocks = FUNC_4(FUNC_10(VAR_0->discard_nr_blocks));
 VAR_3->cache_blocks = FUNC_3(FUNC_9(VAR_0->cache_blocks));
 FUNC_12(VAR_3->policy_name, VAR_0->policy_name, sizeof(VAR_3->policy_name));
 VAR_3->policy_version[0] = FUNC_3(VAR_0->policy_version[0]);
 VAR_3->policy_version[1] = FUNC_3(VAR_0->policy_version[1]);
 VAR_3->policy_version[2] = FUNC_3(VAR_0->policy_version[2]);
 VAR_3->policy_hint_size = FUNC_3(VAR_0->policy_hint_size);

 VAR_3->read_hits = FUNC_3(VAR_0->stats.read_hits);
 VAR_3->read_misses = FUNC_3(VAR_0->stats.read_misses);
 VAR_3->write_hits = FUNC_3(VAR_0->stats.write_hits);
 VAR_3->write_misses = FUNC_3(VAR_0->stats.write_misses);
 FUNC_1(VAR_0, VAR_3);

 return FUNC_7(VAR_0->tm, VAR_4);
}
