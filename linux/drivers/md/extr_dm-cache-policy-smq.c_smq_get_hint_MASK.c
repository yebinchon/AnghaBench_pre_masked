
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smq_policy {int cache_alloc; } ;
struct entry {int level; int allocated; } ;
struct dm_cache_policy {int dummy; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (int ) ;
 struct entry* FUNC_1 (int *,int ) ;
 struct smq_policy* FUNC_2 (struct dm_cache_policy*) ;

__attribute__((used)) static uint32_t FUNC_3(struct dm_cache_policy *VAR_0, dm_cblock_t VAR_1)
{
 struct smq_policy *VAR_2 = FUNC_2(VAR_0);
 struct entry *VAR_3 = FUNC_1(&VAR_2->cache_alloc, FUNC_0(VAR_1));

 if (!VAR_3->allocated)
  return 0;

 return VAR_3->level;
}
