
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_migration {scalar_t__ overwrite_bio; int cell; struct cache* cache; } ;
struct cache {int prison; } ;
struct bio_list {int dummy; } ;


 int FUNC_0 (struct cache*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct cache*,struct bio_list*) ;
 scalar_t__ FUNC_4 (int ,int ,struct bio_list*) ;
 int FUNC_5 (struct dm_cache_migration*) ;
 int FUNC_6 (struct cache*,int ) ;

__attribute__((used)) static void FUNC_7(struct dm_cache_migration *VAR_0, bool VAR_1)
{
 struct bio_list VAR_2;
 struct cache *VAR_3 = VAR_0->cache;

 FUNC_2(&VAR_2);
 if (FUNC_4(VAR_3->prison, VAR_0->cell, &VAR_2))
  FUNC_6(VAR_3, VAR_0->cell);

 if (!VAR_1 && VAR_0->overwrite_bio)
  FUNC_1(VAR_0->overwrite_bio);

 FUNC_5(VAR_0);
 FUNC_3(VAR_3, &VAR_2);

 FUNC_0(VAR_3);
}
