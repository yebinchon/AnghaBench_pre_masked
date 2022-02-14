
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (struct amdgpu_bo**) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 struct amdgpu_bo* FUNC_2 (struct drm_gem_object*) ;

void FUNC_3(struct drm_gem_object *VAR_0)
{
 struct amdgpu_bo *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  FUNC_1(VAR_1);
  FUNC_0(&VAR_1);
 }
}
