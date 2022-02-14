
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gpu_scheduler {scalar_t__ hw_submission_limit; int hw_rq_count; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct drm_gpu_scheduler *VAR_0)
{
 return FUNC_0(&VAR_0->hw_rq_count) <
  VAR_0->hw_submission_limit;
}
