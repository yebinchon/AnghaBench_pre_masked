
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct vmw_fence_obj {struct list_head seq_passed_actions; int base; } ;
struct vmw_fence_manager {int goal_irq_on; int goal_irq_mutex; int dev_priv; int lock; int * pending_actions; } ;
struct vmw_fence_action {size_t type; int head; } ;


 int FUNC_0 (struct list_head*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct vmw_fence_manager* FUNC_2 (struct vmw_fence_obj*) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vmw_fence_obj*) ;
 int FUNC_9 (struct vmw_fence_manager*,struct list_head*) ;
 int FUNC_10 (struct vmw_fence_manager*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct vmw_fence_obj *VAR_0,
         struct vmw_fence_action *VAR_1)
{
 struct vmw_fence_manager *VAR_2 = FUNC_2(VAR_0);
 bool VAR_3 = 0;

 FUNC_4(&VAR_2->goal_irq_mutex);
 FUNC_6(&VAR_2->lock);

 VAR_2->pending_actions[VAR_1->type]++;
 if (FUNC_1(&VAR_0->base)) {
  struct list_head VAR_4;

  FUNC_0(&VAR_4);
  FUNC_3(&VAR_1->head, &VAR_4);
  FUNC_9(VAR_2, &VAR_4);
 } else {
  FUNC_3(&VAR_1->head, &VAR_0->seq_passed_actions);





  VAR_3 = FUNC_8(VAR_0);
 }

 FUNC_7(&VAR_2->lock);

 if (VAR_3) {
  if (!VAR_2->goal_irq_on) {
   VAR_2->goal_irq_on = 1;
   FUNC_11(VAR_2->dev_priv);
  }
  FUNC_10(VAR_2);
 }
 FUNC_5(&VAR_2->goal_irq_mutex);

}
