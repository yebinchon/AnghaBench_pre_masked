
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mm; } ;
struct drm_i915_gem_object {int base; TYPE_1__ userptr; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_file*,int *,unsigned int*) ;
 struct drm_i915_gem_object* FUNC_2 (struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_3(struct drm_framebuffer *VAR_1,
      struct drm_file *VAR_2,
      unsigned int *VAR_3)
{
 struct drm_i915_gem_object *VAR_4 = FUNC_2(VAR_1);

 if (VAR_4->userptr.mm) {
  FUNC_0("attempting to use a userptr for a framebuffer, denied\n");
  return -VAR_0;
 }

 return FUNC_1(VAR_2, &VAR_4->base, VAR_3);
}
