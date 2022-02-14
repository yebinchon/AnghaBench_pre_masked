
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct superblock_disk {void* metadata_snap; void* era_array_root; void* writeset_tree_root; int current_writeset; void* current_era; void* nr_blocks; void* metadata_block_size; void* data_block_size; void* version; int uuid; void* flags; void* magic; } ;
struct era_metadata {unsigned long block_size; unsigned long nr_blocks; unsigned long current_era; int metadata_snap; int era_array_root; int writeset_tree_root; TYPE_1__* current_writeset; } ;
struct TYPE_2__ {int md; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct era_metadata*,struct superblock_disk*) ;
 void* FUNC_1 (unsigned long) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct era_metadata *VAR_4, struct superblock_disk *VAR_5)
{
 VAR_5->magic = FUNC_2(VAR_3);
 VAR_5->flags = FUNC_1(0ul);


 FUNC_3(VAR_5->uuid, 0, sizeof(VAR_5->uuid));
 VAR_5->version = FUNC_1(VAR_1);

 FUNC_0(VAR_4, VAR_5);

 VAR_5->data_block_size = FUNC_1(VAR_4->block_size);
 VAR_5->metadata_block_size = FUNC_1(VAR_0 >> VAR_2);
 VAR_5->nr_blocks = FUNC_1(VAR_4->nr_blocks);
 VAR_5->current_era = FUNC_1(VAR_4->current_era);

 FUNC_4(&VAR_4->current_writeset->md, &VAR_5->current_writeset);
 VAR_5->writeset_tree_root = FUNC_2(VAR_4->writeset_tree_root);
 VAR_5->era_array_root = FUNC_2(VAR_4->era_array_root);
 VAR_5->metadata_snap = FUNC_2(VAR_4->metadata_snap);
}
