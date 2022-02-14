
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_policy_item_ {int dummy; } ;
struct cache_policy_ {int dummy; } ;
struct cache_lfu_policy_item_ {size_t frequency; } ;
struct cache_lfu_policy_ {int * groups; } ;


 int FUNC_0 (int *,struct cache_lfu_policy_item_*,int ) ;
 int FUNC_1 (void (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int FUNC_2 (void (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct cache_policy_ *VAR_1,
 struct cache_policy_item_ *VAR_2)
{
 struct cache_lfu_policy_ *VAR_3;
 struct cache_lfu_policy_item_ *VAR_4;

 FUNC_1(FUNC_3);
 VAR_3 = (struct cache_lfu_policy_ *)VAR_1;
 VAR_4 = (struct cache_lfu_policy_item_ *)VAR_2;

 FUNC_0(&(VAR_3->groups[VAR_4->frequency]), VAR_4,
  VAR_0);
 FUNC_2(FUNC_3);
}
