
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gpu_scheduler {int ready; scalar_t__ thread; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct drm_gpu_scheduler *VAR_0)
{
 if (VAR_0->thread)
  FUNC_0(VAR_0->thread);

 VAR_0->ready = 0;
}
