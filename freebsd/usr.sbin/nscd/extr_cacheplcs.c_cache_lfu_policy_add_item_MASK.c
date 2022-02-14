
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_policy_item_ {int dummy; } ;
struct cache_policy_ {int dummy; } ;
struct cache_lfu_policy_item_ {int frequency; } ;
struct cache_lfu_policy_ {int * groups; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct cache_lfu_policy_item_*,int ) ;
 int FUNC_1 (void (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int FUNC_2 (void (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct cache_policy_ *VAR_2,
 struct cache_policy_item_ *VAR_3)
{
 struct cache_lfu_policy_ *VAR_4;
 struct cache_lfu_policy_item_ *VAR_5;

 FUNC_1(FUNC_3);
 VAR_4 = (struct cache_lfu_policy_ *)VAR_2;
 VAR_5 = (struct cache_lfu_policy_item_ *)VAR_3;

 VAR_5->frequency = VAR_0 - 1;
 FUNC_0(&(VAR_4->groups[VAR_0 - 1]),
  VAR_5, VAR_1);
 FUNC_2(FUNC_3);
}
