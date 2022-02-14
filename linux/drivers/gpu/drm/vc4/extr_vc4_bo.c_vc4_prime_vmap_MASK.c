
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_bo {scalar_t__ validated_shader; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (struct drm_gem_object*) ;
 struct vc4_bo* FUNC_3 (struct drm_gem_object*) ;

void *FUNC_4(struct drm_gem_object *VAR_1)
{
 struct vc4_bo *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->validated_shader) {
  FUNC_0("mmaping of shader BOs not allowed.\n");
  return FUNC_1(-VAR_0);
 }

 return FUNC_2(VAR_1);
}
