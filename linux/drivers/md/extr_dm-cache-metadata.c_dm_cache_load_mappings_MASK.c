
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int dummy; } ;
struct dm_cache_metadata {int dummy; } ;
typedef int load_mapping_fn ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*,struct dm_cache_policy*,int ,void*) ;

int FUNC_3(struct dm_cache_metadata *VAR_0,
      struct dm_cache_policy *VAR_1,
      load_mapping_fn VAR_2, void *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0);

 return VAR_4;
}
