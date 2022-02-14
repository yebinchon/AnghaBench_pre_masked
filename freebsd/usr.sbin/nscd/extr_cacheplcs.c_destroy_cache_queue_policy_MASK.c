
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_queue_policy_item_ {int dummy; } ;
struct cache_queue_policy_ {int head; } ;
struct cache_policy_item_ {int dummy; } ;


 int FUNC_0 (int *) ;
 struct cache_queue_policy_item_* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cache_queue_policy_item_*,int ) ;
 int FUNC_3 (void (*) (struct cache_queue_policy_*)) ;
 int FUNC_4 (void (*) (struct cache_queue_policy_*)) ;
 int FUNC_5 (struct cache_policy_item_*) ;
 int VAR_0 ;
 int FUNC_6 (struct cache_queue_policy_*) ;

__attribute__((used)) static void
FUNC_7(struct cache_queue_policy_ *VAR_1)
{
 struct cache_queue_policy_item_ *VAR_2;

 FUNC_3(FUNC_7);
 while (!FUNC_0(&VAR_1->head)) {
  VAR_2 = FUNC_1(&VAR_1->head);
  FUNC_2(&VAR_1->head, VAR_2, VAR_0);
  FUNC_5(
   (struct cache_policy_item_ *)VAR_2);
 }
 FUNC_6(VAR_1);
 FUNC_4(FUNC_7);
}
