
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_bo {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 struct radeon_bo* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct radeon_bo**) ;
 int FUNC_2 (struct radeon_bo*) ;

void FUNC_3(struct drm_gem_object *VAR_0)
{
 struct radeon_bo *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1) {
  FUNC_2(VAR_1);
  FUNC_1(&VAR_1);
 }
}
