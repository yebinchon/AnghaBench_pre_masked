
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_queue_policy_item_ {int dummy; } ;
struct cache_policy_item_ {int dummy; } ;


 int FUNC_0 (struct cache_policy_item_* (*) ()) ;
 int FUNC_1 (struct cache_policy_item_* (*) ()) ;
 int FUNC_2 (int ) ;
 struct cache_queue_policy_item_* FUNC_3 (int,int) ;

__attribute__((used)) static struct cache_policy_item_ *
FUNC_4(void)
{
 struct cache_queue_policy_item_ *VAR_0;

 FUNC_0(FUNC_4);
 VAR_0 = FUNC_3(1,
  sizeof(*VAR_0));
 FUNC_2(VAR_0 != ((void*)0));

 FUNC_1(FUNC_4);
 return ((struct cache_policy_item_ *)VAR_0);
}
