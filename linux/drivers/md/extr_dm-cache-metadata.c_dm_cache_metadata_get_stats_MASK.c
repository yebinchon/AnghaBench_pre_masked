
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_statistics {int dummy; } ;
struct dm_cache_metadata {struct dm_cache_statistics stats; } ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;

void FUNC_2(struct dm_cache_metadata *VAR_0,
     struct dm_cache_statistics *VAR_1)
{
 FUNC_0(VAR_0);
 *VAR_1 = VAR_0->stats;
 FUNC_1(VAR_0);
}
