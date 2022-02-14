
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_vram_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (struct drm_gem_vram_object*,int,int *) ;
 struct drm_gem_vram_object* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_vram_object*,int ) ;
 int FUNC_4 (struct drm_gem_vram_object*) ;

__attribute__((used)) static void *FUNC_5(struct drm_gem_object *VAR_0)
{
 struct drm_gem_vram_object *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;
 void *VAR_3;

 VAR_2 = FUNC_3(VAR_1, 0);
 if (VAR_2)
  return ((void*)0);
 VAR_3 = FUNC_1(VAR_1, 1, ((void*)0));
 if (FUNC_0(VAR_3)) {
  FUNC_4(VAR_1);
  return ((void*)0);
 }
 return VAR_3;
}
