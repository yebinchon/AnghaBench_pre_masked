
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int cache_blocks; } ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*,int ,int ,int*) ;

int FUNC_3(struct dm_cache_metadata *VAR_0, bool *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0, 0, VAR_0->cache_blocks, VAR_1);
 FUNC_1(VAR_0);

 return VAR_2;
}
