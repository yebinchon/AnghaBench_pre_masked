
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vc4_exec_info {size_t bo_count; struct drm_gem_cma_object** bo; } ;
struct vc4_bo {scalar_t__ validated_shader; } ;
struct drm_gem_cma_object {int base; } ;


 int FUNC_0 (char*,...) ;
 struct vc4_bo* FUNC_1 (int *) ;

struct drm_gem_cma_object *
FUNC_2(struct vc4_exec_info *VAR_0, uint32_t VAR_1)
{
 struct drm_gem_cma_object *VAR_2;
 struct vc4_bo *VAR_3;

 if (VAR_1 >= VAR_0->bo_count) {
  FUNC_0("BO index %d greater than BO count %d\n",
     VAR_1, VAR_0->bo_count);
  return ((void*)0);
 }
 VAR_2 = VAR_0->bo[VAR_1];
 VAR_3 = FUNC_1(&VAR_2->base);

 if (VAR_3->validated_shader) {
  FUNC_0("Trying to use shader BO as something other than "
     "a shader\n");
  return ((void*)0);
 }

 return VAR_2;
}
