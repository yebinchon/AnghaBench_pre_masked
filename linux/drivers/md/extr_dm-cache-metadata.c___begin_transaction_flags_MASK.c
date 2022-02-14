
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int bm; } ;
struct dm_block {int dummy; } ;
struct cache_disk_superblock {int dummy; } ;
typedef int flags_mutator ;


 struct cache_disk_superblock* FUNC_0 (struct dm_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dm_block*) ;
 int FUNC_3 (struct dm_cache_metadata*,struct cache_disk_superblock*) ;
 int FUNC_4 (struct dm_cache_metadata*,struct dm_block**) ;
 int FUNC_5 (struct cache_disk_superblock*,int ) ;

__attribute__((used)) static int FUNC_6(struct dm_cache_metadata *VAR_0,
         flags_mutator VAR_1)
{
 int VAR_2;
 struct cache_disk_superblock *VAR_3;
 struct dm_block *VAR_4;

 VAR_2 = FUNC_4(VAR_0, &VAR_4);
 if (VAR_2)
  return VAR_2;

 VAR_3 = FUNC_0(VAR_4);
 FUNC_5(VAR_3, VAR_1);
 FUNC_3(VAR_0, VAR_3);
 FUNC_2(VAR_4);

 return FUNC_1(VAR_0->bm);
}
