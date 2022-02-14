
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct drm_gem_cma_object {void* vaddr; } ;


 struct drm_gem_cma_object* FUNC_0 (struct drm_gem_object*) ;

void *FUNC_1(struct drm_gem_object *VAR_0)
{
 struct drm_gem_cma_object *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->vaddr;
}
