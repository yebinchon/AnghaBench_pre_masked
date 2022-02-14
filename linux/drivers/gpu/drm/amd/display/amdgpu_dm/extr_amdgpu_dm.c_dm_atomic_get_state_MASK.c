
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_private_state {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_atomic_state {struct drm_device* dev; } ;
struct dm_atomic_state {int dummy; } ;
struct amdgpu_display_manager {int atomic_obj; } ;
struct amdgpu_device {struct amdgpu_display_manager dm; } ;


 scalar_t__ FUNC_0 (struct drm_private_state*) ;
 int FUNC_1 (struct drm_private_state*) ;
 struct drm_private_state* FUNC_2 (struct drm_atomic_state*,int *) ;
 struct dm_atomic_state* FUNC_3 (struct drm_private_state*) ;

__attribute__((used)) static int FUNC_4(struct drm_atomic_state *VAR_0,
          struct dm_atomic_state **VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct amdgpu_device *VAR_3 = VAR_2->dev_private;
 struct amdgpu_display_manager *VAR_4 = &VAR_3->dm;
 struct drm_private_state *VAR_5;

 if (*VAR_1)
  return 0;

 VAR_5 = FUNC_2(VAR_0, &VAR_4->atomic_obj);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 *VAR_1 = FUNC_3(VAR_5);

 return 0;
}
