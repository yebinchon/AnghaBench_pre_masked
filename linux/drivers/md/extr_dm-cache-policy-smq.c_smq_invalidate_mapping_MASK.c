
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int cache_alloc; int table; } ;
struct entry {int allocated; } ;
struct dm_cache_policy {int dummy; } ;
typedef int dm_cblock_t ;


 int VAR_0 ;
 int FUNC_0 (struct smq_policy*,struct entry*) ;
 int FUNC_1 (int *,struct entry*) ;
 int FUNC_2 (int ) ;
 struct entry* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct entry*) ;
 struct smq_policy* FUNC_5 (struct dm_cache_policy*) ;

__attribute__((used)) static int FUNC_6(struct dm_cache_policy *VAR_1, dm_cblock_t VAR_2)
{
 struct smq_policy *VAR_3 = FUNC_5(VAR_1);
 struct entry *VAR_4 = FUNC_3(&VAR_3->cache_alloc, FUNC_2(VAR_2));

 if (!VAR_4->allocated)
  return -VAR_0;


 FUNC_0(VAR_3, VAR_4);
 FUNC_4(&VAR_3->table, VAR_4);
 FUNC_1(&VAR_3->cache_alloc, VAR_4);
 return 0;
}
