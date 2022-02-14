
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_policy_item_ {int dummy; } ;
struct cache_policy_ {int dummy; } ;
struct cache_lfu_policy_item_ {int frequency; } ;
struct cache_lfu_policy_ {int * groups; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct cache_lfu_policy_item_* FUNC_1 (int *) ;
 struct cache_lfu_policy_item_* FUNC_2 (struct cache_lfu_policy_item_*,int ) ;
 int FUNC_3 (struct cache_policy_item_* (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int FUNC_4 (struct cache_policy_item_* (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int VAR_1 ;

__attribute__((used)) static struct cache_policy_item_ *
FUNC_5(struct cache_policy_ *VAR_2,
 struct cache_policy_item_ *VAR_3)
{
 struct cache_lfu_policy_ *VAR_4;
 struct cache_lfu_policy_item_ *VAR_5;
 int VAR_6;

 FUNC_3(FUNC_5);
 VAR_4 = (struct cache_lfu_policy_ *)VAR_2;
 VAR_5 = FUNC_2((struct cache_lfu_policy_item_ *)VAR_3, VAR_1);
 if (VAR_5 == ((void*)0))
 {
  for (VAR_6 = ((struct cache_lfu_policy_item_ *)VAR_3)->frequency + 1;
   VAR_6 < VAR_0; ++VAR_6) {
   if (!FUNC_0(&(VAR_4->groups[VAR_6]))) {
       VAR_5 = FUNC_1(&(VAR_4->groups[VAR_6]));
       break;
   }
  }
 }

 FUNC_4(FUNC_5);
 return ((struct cache_policy_item_ *)VAR_5);
}
