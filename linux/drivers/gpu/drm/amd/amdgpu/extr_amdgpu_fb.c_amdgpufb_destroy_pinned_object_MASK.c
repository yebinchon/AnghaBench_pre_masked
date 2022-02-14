
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (struct amdgpu_bo*,int) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct amdgpu_bo* FUNC_5 (struct drm_gem_object*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct drm_gem_object *VAR_0)
{
 struct amdgpu_bo *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, 1);
 if (FUNC_6(VAR_2 == 0)) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
 }
 FUNC_4(VAR_0);
}
