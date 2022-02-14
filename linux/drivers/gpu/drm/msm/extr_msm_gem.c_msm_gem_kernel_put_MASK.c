
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_address_space {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_gem_object*,struct msm_gem_address_space*) ;

void FUNC_5(struct drm_gem_object *VAR_0,
  struct msm_gem_address_space *VAR_1, bool VAR_2)
{
 if (FUNC_0(VAR_0))
  return;

 FUNC_3(VAR_0);
 FUNC_4(VAR_0, VAR_1);

 if (VAR_2)
  FUNC_1(VAR_0);
 else
  FUNC_2(VAR_0);
}
