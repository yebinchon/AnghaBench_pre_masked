
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_work {int dummy; } ;
struct dm_cache_migration {struct bio* overwrite_bio; struct policy_work* op; } ;
struct cache {int policy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 struct dm_cache_migration* FUNC_0 (struct cache*) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (struct cache*) ;
 int FUNC_3 (struct dm_cache_migration*) ;
 int FUNC_4 (int ,struct policy_work*,int) ;

__attribute__((used)) static int FUNC_5(struct cache *VAR_1, struct policy_work *VAR_2, struct bio *VAR_3)
{
 struct dm_cache_migration *VAR_4;

 if (!FUNC_1(VAR_1)) {
  FUNC_4(VAR_1->policy, VAR_2, 0);
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_1);

 VAR_4->op = VAR_2;
 VAR_4->overwrite_bio = VAR_3;

 if (!VAR_3)
  FUNC_2(VAR_1);

 return FUNC_3(VAR_4);
}
