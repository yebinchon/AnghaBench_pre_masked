
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct policy_work {int oblock; int cblock; int op; } ;
struct dm_cache_migration {int k; struct policy_work* op; struct cache* cache; } ;
struct cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_cache_migration*,int) ;
 int FUNC_1 (int *,int (*) (struct work_struct*)) ;
 int FUNC_2 (struct cache*,int ) ;
 scalar_t__ FUNC_3 (struct cache*,int ) ;
 int FUNC_4 (struct work_struct*) ;
 struct dm_cache_migration* FUNC_5 (struct work_struct*) ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_1)
{
 struct dm_cache_migration *VAR_2 = FUNC_5(VAR_1);
 struct cache *VAR_3 = VAR_2->cache;
 struct policy_work *VAR_4 = VAR_2->op;
 bool VAR_5 = (VAR_4->op == VAR_0);

 if ((!VAR_5 && !FUNC_2(VAR_3, VAR_4->cblock)) ||
     FUNC_3(VAR_3, VAR_4->oblock)) {
  FUNC_4(VAR_1);
  return;
 }

 FUNC_1(&VAR_2->k, FUNC_4);
 FUNC_0(VAR_2, VAR_5);
}
