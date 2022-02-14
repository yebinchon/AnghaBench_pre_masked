
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_disk {int bitset_root; int metadata_space_map_root; int target_size; int region_size; } ;
struct dm_clone_metadata {scalar_t__ region_size; scalar_t__ target_size; scalar_t__ bitset_root; int bitset_info; int tm; int sm; int bm; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct superblock_disk* FUNC_1 (struct dm_block*) ;
 int FUNC_2 (struct dm_block*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int,int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct dm_clone_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_7(struct dm_clone_metadata *VAR_2)
{
 int VAR_3;
 struct dm_block *VAR_4;
 struct superblock_disk *VAR_5;

 VAR_3 = FUNC_6(VAR_2, &VAR_4);

 if (VAR_3) {
  FUNC_0("Failed to read_lock superblock");
  return VAR_3;
 }

 VAR_5 = FUNC_1(VAR_4);


 if (VAR_2->region_size != FUNC_5(VAR_5->region_size) ||
     VAR_2->target_size != FUNC_5(VAR_5->target_size)) {
  FUNC_0("Region and/or target size don't match the ones in metadata");
  VAR_3 = -VAR_0;
  goto out_with_lock;
 }

 VAR_3 = FUNC_4(VAR_2->bm, VAR_1,
          VAR_5->metadata_space_map_root,
          sizeof(VAR_5->metadata_space_map_root),
          &VAR_2->tm, &VAR_2->sm);

 if (VAR_3) {
  FUNC_0("dm_tm_open_with_sm failed");
  goto out_with_lock;
 }

 FUNC_3(VAR_2->tm, &VAR_2->bitset_info);
 VAR_2->bitset_root = FUNC_5(VAR_5->bitset_root);

out_with_lock:
 FUNC_2(VAR_4);

 return VAR_3;
}
