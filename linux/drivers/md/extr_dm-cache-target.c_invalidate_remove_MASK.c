
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct dm_cache_migration {int * overwrite_bio; int invalidate_oblock; int k; int invalidate_cblock; struct cache* cache; } ;
struct cache {int committer; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cache*,int ) ;
 int FUNC_3 (struct dm_cache_migration*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct cache*,int *,int ) ;
 int FUNC_5 (int *) ;
 struct dm_cache_migration* FUNC_6 (struct work_struct*) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_1)
{
 int VAR_2;
 struct dm_cache_migration *VAR_3 = FUNC_6(VAR_1);
 struct cache *VAR_4 = VAR_3->cache;

 VAR_2 = FUNC_2(VAR_4, VAR_3->invalidate_cblock);
 if (VAR_2) {
  FUNC_3(VAR_3, 0);
  return;
 }

 FUNC_1(&VAR_3->k, VAR_0);
 FUNC_0(&VAR_4->committer, &VAR_3->k);
 FUNC_4(VAR_4, VAR_3->overwrite_bio, VAR_3->invalidate_oblock);
 VAR_3->overwrite_bio = ((void*)0);
 FUNC_5(&VAR_4->committer);
}
