
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_entity {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_ctx_entity {int sequence; int * fences; } ;
struct amdgpu_ctx {int ring_lock; } ;


 int FUNC_0 (char*,long) ;
 long VAR_0 ;
 int VAR_1 ;
 struct dma_fence* FUNC_1 (int ) ;
 int FUNC_2 (struct dma_fence*) ;
 long FUNC_3 (struct dma_fence*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct amdgpu_ctx_entity* FUNC_6 (struct drm_sched_entity*) ;

int FUNC_7(struct amdgpu_ctx *VAR_2,
          struct drm_sched_entity *VAR_3)
{
 struct amdgpu_ctx_entity *VAR_4 = FUNC_6(VAR_3);
 struct dma_fence *VAR_5;
 unsigned VAR_6;
 long VAR_7;

 FUNC_4(&VAR_2->ring_lock);
 VAR_6 = VAR_4->sequence & (VAR_1 - 1);
 VAR_5 = FUNC_1(VAR_4->fences[VAR_6]);
 FUNC_5(&VAR_2->ring_lock);

 if (!VAR_5)
  return 0;

 VAR_7 = FUNC_3(VAR_5, 1);
 if (VAR_7 < 0 && VAR_7 != -VAR_0)
  FUNC_0("Error (%ld) waiting for fence!\n", VAR_7);

 FUNC_2(VAR_5);
 return VAR_7;
}
