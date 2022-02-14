
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int update_item_func; } ;
struct cache_queue_policy_ {TYPE_1__ parent_data; } ;
struct cache_policy_ {int dummy; } ;


 int FUNC_0 (struct cache_policy_* (*) ()) ;
 int FUNC_1 (struct cache_policy_* (*) ()) ;
 int VAR_0 ;
 struct cache_queue_policy_* FUNC_2 () ;

struct cache_policy_ *
FUNC_3(void)
{
 struct cache_queue_policy_ *VAR_1;

 FUNC_0(FUNC_3);
 VAR_1 = FUNC_2();
 VAR_1->parent_data.update_item_func = VAR_0;

 FUNC_1(FUNC_3);
 return ((struct cache_policy_ *)VAR_1);
}
