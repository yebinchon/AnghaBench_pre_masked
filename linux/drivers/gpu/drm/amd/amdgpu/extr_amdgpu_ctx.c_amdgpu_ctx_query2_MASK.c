
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int hangs; } ;
union drm_amdgpu_ctx_out {TYPE_1__ state; } ;
typedef int uint32_t ;
struct amdgpu_ctx_mgr {int lock; int ctx_handles; } ;
struct amdgpu_fpriv {struct amdgpu_ctx_mgr ctx_mgr; } ;
struct amdgpu_device {int vram_lost_counter; int gpu_reset_counter; } ;
struct amdgpu_ctx {scalar_t__ reset_counter; scalar_t__ vram_lost_counter; unsigned long ras_counter_ue; unsigned long ras_counter_ce; int guilty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 struct amdgpu_ctx* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_6,
 struct amdgpu_fpriv *VAR_7, uint32_t VAR_8,
 union drm_amdgpu_ctx_out *VAR_9)
{
 struct amdgpu_ctx *VAR_10;
 struct amdgpu_ctx_mgr *VAR_11;
 unsigned long VAR_12;

 if (!VAR_7)
  return -VAR_5;

 VAR_11 = &VAR_7->ctx_mgr;
 FUNC_3(&VAR_11->lock);
 VAR_10 = FUNC_2(&VAR_11->ctx_handles, VAR_8);
 if (!VAR_10) {
  FUNC_4(&VAR_11->lock);
  return -VAR_5;
 }

 VAR_9->state.flags = 0x0;
 VAR_9->state.hangs = 0x0;

 if (VAR_10->reset_counter != FUNC_1(&VAR_6->gpu_reset_counter))
  VAR_9->state.flags |= VAR_3;

 if (VAR_10->vram_lost_counter != FUNC_1(&VAR_6->vram_lost_counter))
  VAR_9->state.flags |= VAR_4;

 if (FUNC_1(&VAR_10->guilty))
  VAR_9->state.flags |= VAR_0;


 VAR_12 = FUNC_0(VAR_6, 0);

 if (VAR_12 != VAR_10->ras_counter_ue) {
  VAR_9->state.flags |= VAR_2;
  VAR_10->ras_counter_ue = VAR_12;
 }


 VAR_12 = FUNC_0(VAR_6, 1);
 if (VAR_12 != VAR_10->ras_counter_ce) {
  VAR_9->state.flags |= VAR_1;
  VAR_10->ras_counter_ce = VAR_12;
 }

 FUNC_4(&VAR_11->lock);
 return 0;
}
