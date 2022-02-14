
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fence_count; scalar_t__ wait_all; int fences; } ;
union drm_amdgpu_wait_fences {TYPE_1__ in; } ;
typedef int uint32_t ;
struct drm_file {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_amdgpu_fence {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,struct drm_file*,union drm_amdgpu_wait_fences*,struct drm_amdgpu_fence*) ;
 int FUNC_1 (struct amdgpu_device*,struct drm_file*,union drm_amdgpu_wait_fences*,struct drm_amdgpu_fence*) ;
 scalar_t__ FUNC_2 (struct drm_amdgpu_fence*,struct drm_amdgpu_fence*,int) ;
 int FUNC_3 (struct drm_amdgpu_fence*) ;
 struct drm_amdgpu_fence* FUNC_4 (int,int,int ) ;
 struct drm_amdgpu_fence* FUNC_5 (int ) ;

int FUNC_6(struct drm_device *VAR_3, void *VAR_4,
    struct drm_file *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->dev_private;
 union drm_amdgpu_wait_fences *VAR_7 = VAR_4;
 uint32_t VAR_8 = VAR_7->in.fence_count;
 struct drm_amdgpu_fence *VAR_9;
 struct drm_amdgpu_fence *VAR_10;
 int VAR_11;


 VAR_10 = FUNC_4(VAR_8, sizeof(struct drm_amdgpu_fence),
   VAR_2);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_7->in.fences);
 if (FUNC_2(VAR_10, VAR_9,
  sizeof(struct drm_amdgpu_fence) * VAR_8)) {
  VAR_11 = -VAR_0;
  goto err_free_fences;
 }

 if (VAR_7->in.wait_all)
  VAR_11 = FUNC_0(VAR_6, VAR_5, VAR_7, VAR_10);
 else
  VAR_11 = FUNC_1(VAR_6, VAR_5, VAR_7, VAR_10);

err_free_fences:
 FUNC_3(VAR_10);

 return VAR_11;
}
