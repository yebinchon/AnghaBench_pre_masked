
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
 struct cache_lfu_policy_item_* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cache_policy_item_* (*) (struct cache_policy_*)) ;
 int FUNC_3 (struct cache_policy_item_* (*) (struct cache_policy_*)) ;
 int VAR_1 ;

__attribute__((used)) static struct cache_policy_item_ *
FUNC_4(struct cache_policy_ *VAR_2)
{
 struct cache_lfu_policy_ *VAR_3;
 struct cache_lfu_policy_item_ *VAR_4;
 int VAR_5;

 FUNC_2(FUNC_4);
 VAR_4 = ((void*)0);
 VAR_3 = (struct cache_lfu_policy_ *)VAR_2;
 for (VAR_5 = VAR_0 - 1; VAR_5 >= 0; --VAR_5)
  if (!FUNC_0(&(VAR_3->groups[VAR_5]))) {
   VAR_4 = FUNC_1(&(VAR_3->groups[VAR_5]),
    VAR_1);
   break;
  }

 FUNC_3(FUNC_4);
 return ((struct cache_policy_item_ *)VAR_4);
}
