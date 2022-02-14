
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int dummy; } ;
struct dm_cache_metadata {scalar_t__ clean_when_opened; } ;


 scalar_t__ FUNC_0 (struct dm_cache_metadata*) ;
 scalar_t__ FUNC_1 (struct dm_cache_metadata*,struct dm_cache_policy*) ;

__attribute__((used)) static bool FUNC_2(struct dm_cache_metadata *VAR_0,
      struct dm_cache_policy *VAR_1)
{
 return VAR_0->clean_when_opened && FUNC_1(VAR_0, VAR_1) &&
  FUNC_0(VAR_0);
}
