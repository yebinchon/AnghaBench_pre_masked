
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmw_fence_obj {void (* destroy ) (struct vmw_fence_obj*) ;int head; int seq_passed_actions; int base; } ;
struct vmw_fence_manager {int lock; int num_fence_objects; int fence_list; int fifo_down; int ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct vmw_fence_manager *VAR_2,
         struct vmw_fence_obj *VAR_3, u32 VAR_4,
         void (*VAR_5) (struct vmw_fence_obj *VAR_6))
{
 int VAR_7 = 0;

 FUNC_1(&VAR_3->base, &VAR_1, &VAR_2->lock,
         VAR_2->ctx, VAR_4);
 FUNC_0(&VAR_3->seq_passed_actions);
 VAR_3->destroy = VAR_5;

 FUNC_3(&VAR_2->lock);
 if (FUNC_5(VAR_2->fifo_down)) {
  VAR_7 = -VAR_0;
  goto out_unlock;
 }
 FUNC_2(&VAR_3->head, &VAR_2->fence_list);
 ++VAR_2->num_fence_objects;

out_unlock:
 FUNC_4(&VAR_2->lock);
 return VAR_7;

}
