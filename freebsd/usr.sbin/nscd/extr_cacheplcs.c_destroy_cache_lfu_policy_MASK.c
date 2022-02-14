
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_policy_item_ {int dummy; } ;
struct cache_policy_ {int dummy; } ;
struct cache_lfu_policy_item_ {int dummy; } ;
struct cache_lfu_policy_ {int * groups; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cache_lfu_policy_item_* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cache_lfu_policy_item_*,int ) ;
 int FUNC_3 (void (*) (struct cache_policy_*)) ;
 int FUNC_4 (void (*) (struct cache_policy_*)) ;
 int FUNC_5 (struct cache_policy_item_*) ;
 int VAR_1 ;
 int FUNC_6 (struct cache_policy_*) ;

void
FUNC_7(struct cache_policy_ *VAR_2)
{
 int VAR_3;
 struct cache_lfu_policy_ *VAR_4;
 struct cache_lfu_policy_item_ *VAR_5;

 FUNC_3(FUNC_7);
 VAR_4 = (struct cache_lfu_policy_ *)VAR_2;
 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  while (!FUNC_0(&(VAR_4->groups[VAR_3]))) {
   VAR_5 = FUNC_1(&(VAR_4->groups[VAR_3]));
   FUNC_2(&(VAR_4->groups[VAR_3]), VAR_5,
    VAR_1);
   FUNC_5(
    (struct cache_policy_item_ *)VAR_5);
  }
 }
 FUNC_6(VAR_2);
 FUNC_4(FUNC_7);
}
