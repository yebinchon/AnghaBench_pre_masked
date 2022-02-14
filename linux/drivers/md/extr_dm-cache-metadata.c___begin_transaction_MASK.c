
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int dummy; } ;
struct dm_block {int dummy; } ;
struct cache_disk_superblock {int dummy; } ;


 struct cache_disk_superblock* FUNC_0 (struct dm_block*) ;
 int FUNC_1 (struct dm_block*) ;
 int FUNC_2 (struct dm_cache_metadata*,struct cache_disk_superblock*) ;
 int FUNC_3 (struct dm_cache_metadata*,struct dm_block**) ;

__attribute__((used)) static int FUNC_4(struct dm_cache_metadata *VAR_0)
{
 int VAR_1;
 struct cache_disk_superblock *VAR_2;
 struct dm_block *VAR_3;





 VAR_1 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_1)
  return VAR_1;

 VAR_2 = FUNC_0(VAR_3);
 FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_3);

 return 0;
}
