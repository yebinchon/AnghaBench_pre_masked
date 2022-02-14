
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_migration {struct cache* cache; } ;
struct cache {int migration_pool; int migration_wait; int nr_allocated_migrations; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct dm_cache_migration*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dm_cache_migration *VAR_0)
{
 struct cache *VAR_1 = VAR_0->cache;

 if (FUNC_0(&VAR_1->nr_allocated_migrations))
  FUNC_2(&VAR_1->migration_wait);

 FUNC_1(VAR_0, &VAR_1->migration_pool);
}
