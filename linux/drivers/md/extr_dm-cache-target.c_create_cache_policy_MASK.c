
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int dummy; } ;
struct cache_args {int policy_name; } ;
struct cache {struct dm_cache_policy* policy; int sectors_per_block; int origin_sectors; int cache_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dm_cache_policy*) ;
 int FUNC_2 (struct dm_cache_policy*) ;
 struct dm_cache_policy* FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct cache *VAR_0, struct cache_args *VAR_1,
          char **VAR_2)
{
 struct dm_cache_policy *VAR_3 = FUNC_3(VAR_1->policy_name,
          VAR_0->cache_size,
          VAR_0->origin_sectors,
          VAR_0->sectors_per_block);
 if (FUNC_1(VAR_3)) {
  *VAR_2 = "Error creating cache's policy";
  return FUNC_2(VAR_3);
 }
 VAR_0->policy = VAR_3;
 FUNC_0(!VAR_0->policy);

 return 0;
}
