
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_cache_metadata {int tm; int dirty_root; int data_block_size; int discard_nr_blocks; int discard_block_size; int discard_root; int hint_root; int root; int version; TYPE_1__* bdev; } ;
struct dm_block {int dummy; } ;
struct cache_disk_superblock {void* dirty_root; void* write_misses; void* write_hits; void* read_misses; void* read_hits; void* cache_blocks; void* data_block_size; void* metadata_block_size; void* discard_nr_blocks; void* discard_block_size; void* discard_root; void* hint_root; void* mapping_root; void* policy_hint_size; int policy_version; int policy_name; void* version; void* magic; int uuid; scalar_t__ flags; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int bd_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dm_cache_metadata*,struct cache_disk_superblock*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 struct cache_disk_superblock* FUNC_4 (struct dm_block*) ;
 int FUNC_5 (int ,struct dm_block*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (struct dm_cache_metadata*) ;
 int FUNC_11 (struct dm_cache_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_12(struct dm_cache_metadata *VAR_4)
{
 int VAR_5;
 struct dm_block *VAR_6;
 struct cache_disk_superblock *VAR_7;
 sector_t VAR_8 = FUNC_8(VAR_4->bdev->bd_inode) >> VAR_3;


 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;

 VAR_5 = FUNC_6(VAR_4->tm);
 if (VAR_5 < 0)
  return VAR_5;





 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_11(VAR_4, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_7 = FUNC_4(VAR_6);
 VAR_7->flags = 0;
 FUNC_9(VAR_7->uuid, 0, sizeof(VAR_7->uuid));
 VAR_7->magic = FUNC_3(VAR_0);
 VAR_7->version = FUNC_2(VAR_4->version);
 FUNC_9(VAR_7->policy_name, 0, sizeof(VAR_7->policy_name));
 FUNC_9(VAR_7->policy_version, 0, sizeof(VAR_7->policy_version));
 VAR_7->policy_hint_size = FUNC_2(0);

 FUNC_0(VAR_4, VAR_7);

 VAR_7->mapping_root = FUNC_3(VAR_4->root);
 VAR_7->hint_root = FUNC_3(VAR_4->hint_root);
 VAR_7->discard_root = FUNC_3(VAR_4->discard_root);
 VAR_7->discard_block_size = FUNC_3(VAR_4->discard_block_size);
 VAR_7->discard_nr_blocks = FUNC_3(FUNC_7(VAR_4->discard_nr_blocks));
 VAR_7->metadata_block_size = FUNC_2(VAR_1);
 VAR_7->data_block_size = FUNC_2(VAR_4->data_block_size);
 VAR_7->cache_blocks = FUNC_2(0);

 VAR_7->read_hits = FUNC_2(0);
 VAR_7->read_misses = FUNC_2(0);
 VAR_7->write_hits = FUNC_2(0);
 VAR_7->write_misses = FUNC_2(0);

 if (FUNC_10(VAR_4))
  VAR_7->dirty_root = FUNC_3(VAR_4->dirty_root);

 return FUNC_5(VAR_4->tm, VAR_6);
}
