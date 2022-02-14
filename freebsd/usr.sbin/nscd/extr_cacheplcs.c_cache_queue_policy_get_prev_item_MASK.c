
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_queue_policy_item_ {int dummy; } ;
struct cache_queue_policy_ {int dummy; } ;
struct cache_policy_item_ {int dummy; } ;
struct cache_policy_ {int dummy; } ;


 scalar_t__ FUNC_0 (struct cache_queue_policy_item_*,int ,int ) ;
 int FUNC_1 (struct cache_policy_item_* (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int FUNC_2 (struct cache_policy_item_* (*) (struct cache_policy_*,struct cache_policy_item_*)) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct cache_policy_item_ *
FUNC_3(struct cache_policy_ *VAR_2,
 struct cache_policy_item_ *VAR_3)
{
 struct cache_queue_policy_ *VAR_4;
 struct cache_queue_policy_item_ *VAR_5;

 FUNC_1(FUNC_3);
 VAR_4 = (struct cache_queue_policy_ *)VAR_2;
 VAR_5 = (struct cache_queue_policy_item_ *)VAR_3;

 FUNC_2(FUNC_3);
 return ((struct cache_policy_item_ *)FUNC_0(VAR_5,
  VAR_0, VAR_1));
}
