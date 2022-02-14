
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msm_fence_context {int event; int spinlock; int completed_fence; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct msm_fence_context *VAR_0, uint32_t VAR_1)
{
 FUNC_1(&VAR_0->spinlock);
 VAR_0->completed_fence = FUNC_0(VAR_1, VAR_0->completed_fence);
 FUNC_2(&VAR_0->spinlock);

 FUNC_3(&VAR_0->event);
}
