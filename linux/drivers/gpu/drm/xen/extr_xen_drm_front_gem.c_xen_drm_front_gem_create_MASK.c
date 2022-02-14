
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct xen_gem_object {struct drm_gem_object base; } ;
struct drm_device {int dummy; } ;


 struct drm_gem_object* FUNC_0 (struct xen_gem_object*) ;
 scalar_t__ FUNC_1 (struct xen_gem_object*) ;
 struct xen_gem_object* FUNC_2 (struct drm_device*,size_t) ;

struct drm_gem_object *FUNC_3(struct drm_device *VAR_0,
      size_t VAR_1)
{
 struct xen_gem_object *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_1(VAR_2))
  return FUNC_0(VAR_2);

 return &VAR_2->base;
}
