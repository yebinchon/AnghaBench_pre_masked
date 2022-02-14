
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_file {int dummy; } ;
struct amdgpu_ctx_mgr {int lock; int ctx_handles; } ;
struct amdgpu_fpriv {struct amdgpu_ctx_mgr ctx_mgr; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_ctx {int dummy; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int,struct drm_file*,struct amdgpu_ctx*) ;
 int FUNC_1 (int *,struct amdgpu_ctx*,int,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct amdgpu_ctx*) ;
 struct amdgpu_ctx* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_3,
       struct amdgpu_fpriv *VAR_4,
       struct drm_file *VAR_5,
       enum drm_sched_priority VAR_6,
       uint32_t *VAR_7)
{
 struct amdgpu_ctx_mgr *VAR_8 = &VAR_4->ctx_mgr;
 struct amdgpu_ctx *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_5(&VAR_8->lock);
 VAR_10 = FUNC_1(&VAR_8->ctx_handles, VAR_9, 1, VAR_0, VAR_2);
 if (VAR_10 < 0) {
  FUNC_6(&VAR_8->lock);
  FUNC_3(VAR_9);
  return VAR_10;
 }

 *VAR_7 = (uint32_t)VAR_10;
 VAR_10 = FUNC_0(VAR_3, VAR_6, VAR_5, VAR_9);
 if (VAR_10) {
  FUNC_2(&VAR_8->ctx_handles, *VAR_7);
  *VAR_7 = 0;
  FUNC_3(VAR_9);
 }
 FUNC_6(&VAR_8->lock);
 return VAR_10;
}
