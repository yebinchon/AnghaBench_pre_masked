
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {unsigned long data_block_size; int clean_when_opened; int discard_info; int tm; int dirty_info; int metadata_sm; int bm; } ;
struct dm_block {int dummy; } ;
struct cache_disk_superblock {int flags; int metadata_space_map_root; int data_block_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (struct cache_disk_superblock*,struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*) ;
 struct cache_disk_superblock* FUNC_3 (struct dm_block*) ;
 int FUNC_4 (struct dm_block*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int ,int,int *,int *) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (struct dm_cache_metadata*,struct dm_block**) ;
 int FUNC_9 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_10(struct dm_cache_metadata *VAR_3)
{
 int VAR_4;
 struct dm_block *VAR_5;
 struct cache_disk_superblock *VAR_6;
 unsigned long VAR_7;

 VAR_4 = FUNC_8(VAR_3, &VAR_5);
 if (VAR_4 < 0) {
  FUNC_0("couldn't read lock superblock");
  return VAR_4;
 }

 VAR_6 = FUNC_3(VAR_5);


 if (FUNC_7(VAR_6->data_block_size) != VAR_3->data_block_size) {
  FUNC_0("changing the data block size (from %u to %llu) is not supported",
        FUNC_7(VAR_6->data_block_size),
        (unsigned long long)VAR_3->data_block_size);
  VAR_4 = -VAR_2;
  goto bad;
 }

 VAR_4 = FUNC_1(VAR_6, VAR_3);
 if (VAR_4 < 0)
  goto bad;

 VAR_4 = FUNC_6(VAR_3->bm, VAR_0,
          VAR_6->metadata_space_map_root,
          sizeof(VAR_6->metadata_space_map_root),
          &VAR_3->tm, &VAR_3->metadata_sm);
 if (VAR_4 < 0) {
  FUNC_0("tm_open_with_sm failed");
  goto bad;
 }

 FUNC_2(VAR_3);
 FUNC_5(VAR_3->tm, &VAR_3->dirty_info);
 FUNC_5(VAR_3->tm, &VAR_3->discard_info);
 VAR_7 = FUNC_7(VAR_6->flags);
 VAR_3->clean_when_opened = FUNC_9(VAR_1, &VAR_7);
 FUNC_4(VAR_5);

 return 0;

bad:
 FUNC_4(VAR_5);
 return VAR_4;
}
