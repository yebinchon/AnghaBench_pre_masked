
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int hangs; int reset_status; } ;
union drm_amdgpu_ctx_out {TYPE_1__ state; } ;
typedef int uint32_t ;
struct amdgpu_ctx_mgr {int lock; int ctx_handles; } ;
struct amdgpu_fpriv {struct amdgpu_ctx_mgr ctx_mgr; } ;
struct amdgpu_device {int gpu_reset_counter; } ;
struct amdgpu_ctx {unsigned int reset_counter_query; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int *) ;
 struct amdgpu_ctx* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_3,
       struct amdgpu_fpriv *VAR_4, uint32_t VAR_5,
       union drm_amdgpu_ctx_out *VAR_6)
{
 struct amdgpu_ctx *VAR_7;
 struct amdgpu_ctx_mgr *VAR_8;
 unsigned VAR_9;

 if (!VAR_4)
  return -VAR_2;

 VAR_8 = &VAR_4->ctx_mgr;
 FUNC_2(&VAR_8->lock);
 VAR_7 = FUNC_1(&VAR_8->ctx_handles, VAR_5);
 if (!VAR_7) {
  FUNC_3(&VAR_8->lock);
  return -VAR_2;
 }


 VAR_6->state.flags = 0x0;
 VAR_6->state.hangs = 0x0;


 VAR_9 = FUNC_0(&VAR_3->gpu_reset_counter);

 if (VAR_7->reset_counter_query == VAR_9)
  VAR_6->state.reset_status = VAR_0;
 else
  VAR_6->state.reset_status = VAR_1;
 VAR_7->reset_counter_query = VAR_9;

 FUNC_3(&VAR_8->lock);
 return 0;
}
