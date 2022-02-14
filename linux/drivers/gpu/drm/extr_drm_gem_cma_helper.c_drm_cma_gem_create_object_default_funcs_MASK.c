
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int * funcs; } ;
struct drm_gem_cma_object {struct drm_gem_object base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_cma_object* FUNC_0 (int,int ) ;

struct drm_gem_object *
FUNC_1(struct drm_device *VAR_2, size_t VAR_3)
{
 struct drm_gem_cma_object *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->base.funcs = &VAR_1;

 return &VAR_4->base;
}
