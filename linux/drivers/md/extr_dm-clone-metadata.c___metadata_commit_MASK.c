
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_disk {int dummy; } ;
struct dm_clone_metadata {int hydration_done; int nr_regions; int region_map; int tm; int bitset_root; int bitset_info; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dm_clone_metadata*) ;
 int FUNC_2 (struct dm_clone_metadata*,struct superblock_disk*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 struct superblock_disk* FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int ,struct dm_block*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct dm_clone_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_9(struct dm_clone_metadata *VAR_0)
{
 int VAR_1;
 struct dm_block *VAR_2;
 struct superblock_disk *VAR_3;


 VAR_1 = FUNC_4(&VAR_0->bitset_info, VAR_0->bitset_root, &VAR_0->bitset_root);
 if (VAR_1) {
  FUNC_0("dm_bitset_flush failed");
  return VAR_1;
 }


 VAR_1 = FUNC_7(VAR_0->tm);
 if (VAR_1) {
  FUNC_0("dm_tm_pre_commit failed");
  return VAR_1;
 }


 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1) {
  FUNC_0("__copy_sm_root failed");
  return VAR_1;
 }


 VAR_1 = FUNC_8(VAR_0, &VAR_2);
 if (VAR_1) {
  FUNC_0("Failed to write_lock superblock");
  return VAR_1;
 }


 VAR_3 = FUNC_5(VAR_2);
 FUNC_2(VAR_0, VAR_3);


 VAR_1 = FUNC_6(VAR_0->tm, VAR_2);
 if (VAR_1) {
  FUNC_0("Failed to commit superblock");
  return VAR_1;
 }




 if (FUNC_3(VAR_0->region_map, VAR_0->nr_regions))
  VAR_0->hydration_done = 1;

 return 0;
}
