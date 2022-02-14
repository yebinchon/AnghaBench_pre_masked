
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_disk {int metadata_snap; int era_array_root; int writeset_tree_root; int current_era; int nr_blocks; int data_block_size; int metadata_space_map_root; } ;
struct era_metadata {int archived_writesets; void* metadata_snap; void* era_array_root; void* writeset_tree_root; void* current_era; void* nr_blocks; void* block_size; int sm; int tm; int bm; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct superblock_disk* FUNC_1 (struct dm_block*) ;
 int FUNC_2 (struct dm_block*) ;
 int FUNC_3 (int ,int ,int ,int,int *,int *) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct era_metadata*) ;
 int FUNC_7 (struct era_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_8(struct era_metadata *VAR_1)
{
 int VAR_2;
 struct dm_block *VAR_3;
 struct superblock_disk *VAR_4;

 VAR_2 = FUNC_7(VAR_1, &VAR_3);
 if (VAR_2) {
  FUNC_0("couldn't read_lock superblock");
  return VAR_2;
 }

 VAR_4 = FUNC_1(VAR_3);
 VAR_2 = FUNC_3(VAR_1->bm, VAR_0,
          VAR_4->metadata_space_map_root,
          sizeof(VAR_4->metadata_space_map_root),
          &VAR_1->tm, &VAR_1->sm);
 if (VAR_2) {
  FUNC_0("dm_tm_open_with_sm failed");
  goto bad;
 }

 FUNC_6(VAR_1);

 VAR_1->block_size = FUNC_4(VAR_4->data_block_size);
 VAR_1->nr_blocks = FUNC_4(VAR_4->nr_blocks);
 VAR_1->current_era = FUNC_4(VAR_4->current_era);

 VAR_1->writeset_tree_root = FUNC_5(VAR_4->writeset_tree_root);
 VAR_1->era_array_root = FUNC_5(VAR_4->era_array_root);
 VAR_1->metadata_snap = FUNC_5(VAR_4->metadata_snap);
 VAR_1->archived_writesets = 1;

 FUNC_2(VAR_3);

 return 0;

bad:
 FUNC_2(VAR_3);
 return VAR_2;
}
