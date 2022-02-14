
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_fence_manager {int lock; int cleanup_list; int fence_list; int work; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vmw_fence_manager*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct vmw_fence_manager *VAR_0)
{
 bool VAR_1;

 (void) FUNC_1(&VAR_0->work);

 FUNC_4(&VAR_0->lock);
 VAR_1 = FUNC_3(&VAR_0->fence_list) &&
  FUNC_3(&VAR_0->cleanup_list);
 FUNC_5(&VAR_0->lock);

 FUNC_0(!VAR_1);
 FUNC_2(VAR_0);
}
