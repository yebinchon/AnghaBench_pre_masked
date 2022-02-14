
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int flags; } ;
struct dm_block {int dummy; } ;
struct cache_disk_superblock {int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*) ;
 int FUNC_3 (int ) ;
 struct cache_disk_superblock* FUNC_4 (struct dm_block*) ;
 int FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct dm_cache_metadata*,struct dm_block**) ;

int FUNC_8(struct dm_cache_metadata *VAR_1)
{
 int VAR_2;
 struct dm_block *VAR_3;
 struct cache_disk_superblock *VAR_4;

 FUNC_1(VAR_1);
 FUNC_6(VAR_0, &VAR_1->flags);

 VAR_2 = FUNC_7(VAR_1, &VAR_3);
 if (VAR_2) {
  FUNC_0("couldn't read superblock");
  goto out;
 }

 VAR_4 = FUNC_4(VAR_3);
 VAR_4->flags = FUNC_3(VAR_1->flags);

 FUNC_5(VAR_3);

out:
 FUNC_2(VAR_1);
 return VAR_2;
}
