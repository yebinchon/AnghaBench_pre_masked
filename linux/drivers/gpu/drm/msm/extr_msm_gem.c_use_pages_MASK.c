
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_object {int vram_node; } ;
struct drm_gem_object {int dummy; } ;


 struct msm_gem_object* FUNC_0 (struct drm_gem_object*) ;

__attribute__((used)) static bool FUNC_1(struct drm_gem_object *VAR_0)
{
 struct msm_gem_object *VAR_1 = FUNC_0(VAR_0);
 return !VAR_1->vram_node;
}
