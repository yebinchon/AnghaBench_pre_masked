
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_fence_manager {int fifo_down; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vmw_fence_manager *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->fifo_down = 0;
 FUNC_1(&VAR_0->lock);
}
