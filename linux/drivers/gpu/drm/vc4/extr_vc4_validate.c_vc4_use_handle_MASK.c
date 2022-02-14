
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct vc4_exec_info {int * bo_index; } ;
struct drm_gem_cma_object {int dummy; } ;


 struct drm_gem_cma_object* FUNC_0 (struct vc4_exec_info*,int ) ;

__attribute__((used)) static struct drm_gem_cma_object *
FUNC_1(struct vc4_exec_info *VAR_0, uint32_t VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->bo_index[VAR_1]);
}
