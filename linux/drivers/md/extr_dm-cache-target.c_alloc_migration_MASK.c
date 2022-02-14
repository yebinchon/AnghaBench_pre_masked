
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_migration {struct cache* cache; } ;
struct cache {int nr_allocated_migrations; int migration_pool; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct dm_cache_migration* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct dm_cache_migration*,int ,int) ;

__attribute__((used)) static struct dm_cache_migration *FUNC_3(struct cache *VAR_1)
{
 struct dm_cache_migration *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->migration_pool, VAR_0);

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->cache = VAR_1;
 FUNC_0(&VAR_1->nr_allocated_migrations);

 return VAR_2;
}
