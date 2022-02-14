
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
 int FUNC_2 (struct cache_policy_item_* (*) (struct cache_policy_*)) ;
 int FUNC_3 (struct cache_policy_item_* (*) (struct cache_policy_*)) ;

__attribute__((used)) static struct cache_policy_item_ *
FUNC_4(struct cache_policy_ *VAR_1)
{
 struct cache_lfu_policy_ *VAR_2;
 struct cache_lfu_policy_item_ *VAR_3;
 int VAR_4;

 FUNC_2(FUNC_4);
 VAR_3 = ((void*)0);
 VAR_2 = (struct cache_lfu_policy_ *)VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  if (!FUNC_0(&(VAR_2->groups[VAR_4]))) {
   VAR_3 = FUNC_1(&(VAR_2->groups[VAR_4]));
   break;
  }

 FUNC_3(FUNC_4);
 return ((struct cache_policy_item_ *)VAR_3);
}
