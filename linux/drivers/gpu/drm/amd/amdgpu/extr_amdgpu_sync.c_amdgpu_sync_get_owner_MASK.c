
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_fence {void* owner; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_amdkfd_fence {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 struct amdgpu_amdkfd_fence* FUNC_0 (struct dma_fence*) ;
 struct drm_sched_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static void *FUNC_2(struct dma_fence *VAR_2)
{
 struct drm_sched_fence *VAR_3;
 struct amdgpu_amdkfd_fence *VAR_4;

 if (!VAR_2)
  return VAR_1;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3->owner;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_0;

 return VAR_1;
}
