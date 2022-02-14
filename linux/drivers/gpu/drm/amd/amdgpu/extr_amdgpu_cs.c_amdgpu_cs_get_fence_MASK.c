
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_entity {int dummy; } ;
struct drm_file {int driver_priv; } ;
struct drm_amdgpu_fence {int seq_no; int ring; int ip_instance; int ip_type; int ctx_id; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_ctx {int dummy; } ;


 int VAR_0 ;
 struct dma_fence* FUNC_0 (int) ;
 struct amdgpu_ctx* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct amdgpu_ctx*,int ,int ,int ,struct drm_sched_entity**) ;
 struct dma_fence* FUNC_3 (struct amdgpu_ctx*,struct drm_sched_entity*,int ) ;
 int FUNC_4 (struct amdgpu_ctx*) ;

__attribute__((used)) static struct dma_fence *FUNC_5(struct amdgpu_device *VAR_1,
          struct drm_file *VAR_2,
          struct drm_amdgpu_fence *VAR_3)
{
 struct drm_sched_entity *VAR_4;
 struct amdgpu_ctx *VAR_5;
 struct dma_fence *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_2->driver_priv, VAR_3->ctx_id);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_2(VAR_5, VAR_3->ip_type, VAR_3->ip_instance,
      VAR_3->ring, &VAR_4);
 if (VAR_7) {
  FUNC_4(VAR_5);
  return FUNC_0(VAR_7);
 }

 VAR_6 = FUNC_3(VAR_5, VAR_4, VAR_3->seq_no);
 FUNC_4(VAR_5);

 return VAR_6;
}
