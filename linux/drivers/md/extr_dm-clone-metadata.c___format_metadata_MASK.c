
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct superblock_disk {int dummy; } ;
struct dm_clone_metadata {int tm; int sm; int nr_regions; int bitset_root; int bitset_info; int bm; } ;
struct dm_block {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct dm_clone_metadata*) ;
 int FUNC_2 (struct dm_clone_metadata*,struct superblock_disk*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int,int *) ;
 struct superblock_disk* FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct dm_block*) ;
 int FUNC_9 (int ,int ,int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct dm_clone_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_13(struct dm_clone_metadata *VAR_1)
{
 int VAR_2;
 struct dm_block *VAR_3;
 struct superblock_disk *VAR_4;

 VAR_2 = FUNC_9(VAR_1->bm, VAR_0, &VAR_1->tm, &VAR_1->sm);
 if (VAR_2) {
  FUNC_0("Failed to create transaction manager");
  return VAR_2;
 }

 FUNC_6(VAR_1->tm, &VAR_1->bitset_info);

 VAR_2 = FUNC_3(&VAR_1->bitset_info, &VAR_1->bitset_root);
 if (VAR_2) {
  FUNC_0("Failed to create empty on-disk bitset");
  goto err_with_tm;
 }

 VAR_2 = FUNC_4(&VAR_1->bitset_info, VAR_1->bitset_root, 0,
        VAR_1->nr_regions, 0, &VAR_1->bitset_root);
 if (VAR_2) {
  FUNC_0("Failed to resize on-disk bitset to %lu entries", VAR_1->nr_regions);
  goto err_with_tm;
 }


 VAR_2 = FUNC_11(VAR_1->tm);
 if (VAR_2) {
  FUNC_0("dm_tm_pre_commit failed");
  goto err_with_tm;
 }

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0("__copy_sm_root failed");
  goto err_with_tm;
 }

 VAR_2 = FUNC_12(VAR_1, &VAR_3);
 if (VAR_2) {
  FUNC_0("Failed to write_lock superblock");
  goto err_with_tm;
 }

 VAR_4 = FUNC_5(VAR_3);
 FUNC_2(VAR_1, VAR_4);
 VAR_2 = FUNC_8(VAR_1->tm, VAR_3);
 if (VAR_2) {
  FUNC_0("Failed to commit superblock");
  goto err_with_tm;
 }

 return 0;

err_with_tm:
 FUNC_7(VAR_1->sm);
 FUNC_10(VAR_1->tm);

 return VAR_2;
}
