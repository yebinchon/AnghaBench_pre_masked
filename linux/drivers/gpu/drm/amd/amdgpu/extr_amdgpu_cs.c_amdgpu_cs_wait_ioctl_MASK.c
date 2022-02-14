
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
struct TYPE_3__ {int handle; int ring; int ip_instance; int ip_type; int ctx_id; int timeout; } ;
union drm_amdgpu_wait_cs {TYPE_2__ out; TYPE_1__ in; } ;
struct drm_sched_entity {int dummy; } ;
struct drm_file {int driver_priv; } ;
struct drm_device {int dummy; } ;
struct dma_fence {long error; } ;
struct amdgpu_ctx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dma_fence*) ;
 long FUNC_1 (struct dma_fence*) ;
 struct amdgpu_ctx* FUNC_2 (int ,int ) ;
 long FUNC_3 (struct amdgpu_ctx*,int ,int ,int ,struct drm_sched_entity**) ;
 struct dma_fence* FUNC_4 (struct amdgpu_ctx*,struct drm_sched_entity*,int ) ;
 int FUNC_5 (struct amdgpu_ctx*) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (struct dma_fence*) ;
 long FUNC_8 (struct dma_fence*,int,unsigned long) ;
 int FUNC_9 (union drm_amdgpu_wait_cs*,int ,int) ;

int FUNC_10(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 union drm_amdgpu_wait_cs *VAR_4 = VAR_2;
 unsigned long VAR_5 = FUNC_6(VAR_4->in.timeout);
 struct drm_sched_entity *VAR_6;
 struct amdgpu_ctx *VAR_7;
 struct dma_fence *VAR_8;
 long VAR_9;

 VAR_7 = FUNC_2(VAR_3->driver_priv, VAR_4->in.ctx_id);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_7, VAR_4->in.ip_type, VAR_4->in.ip_instance,
      VAR_4->in.ring, &VAR_6);
 if (VAR_9) {
  FUNC_5(VAR_7);
  return VAR_9;
 }

 VAR_8 = FUNC_4(VAR_7, VAR_6, VAR_4->in.handle);
 if (FUNC_0(VAR_8))
  VAR_9 = FUNC_1(VAR_8);
 else if (VAR_8) {
  VAR_9 = FUNC_8(VAR_8, 1, VAR_5);
  if (VAR_9 > 0 && VAR_8->error)
   VAR_9 = VAR_8->error;
  FUNC_7(VAR_8);
 } else
  VAR_9 = 1;

 FUNC_5(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_9(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->out.status = (VAR_9 == 0);

 return 0;
}
