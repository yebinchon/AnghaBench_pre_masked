
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_disk {void* bitset_root; void* target_size; void* region_size; int metadata_space_map_root; void* version; void* magic; int uuid; void* flags; } ;
struct dm_clone_metadata {int bitset_root; int target_size; int region_size; int metadata_space_map_root; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned long) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct dm_clone_metadata *VAR_2,
     struct superblock_disk *VAR_3)
{
 VAR_3->flags = FUNC_0(0UL);


 FUNC_3(VAR_3->uuid, 0, sizeof(VAR_3->uuid));

 VAR_3->magic = FUNC_1(VAR_1);
 VAR_3->version = FUNC_0(VAR_0);


 FUNC_2(&VAR_3->metadata_space_map_root, &VAR_2->metadata_space_map_root,
        sizeof(VAR_2->metadata_space_map_root));

 VAR_3->region_size = FUNC_1(VAR_2->region_size);
 VAR_3->target_size = FUNC_1(VAR_2->target_size);
 VAR_3->bitset_root = FUNC_1(VAR_2->bitset_root);
}
