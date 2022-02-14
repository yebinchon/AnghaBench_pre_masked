
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_disk {int metadata_space_map_root; } ;
struct era_metadata {int metadata_space_map_root; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct era_metadata *VAR_0, struct superblock_disk *VAR_1)
{
 FUNC_0(&VAR_1->metadata_space_map_root,
        &VAR_0->metadata_space_map_root,
        sizeof(VAR_0->metadata_space_map_root));
}
