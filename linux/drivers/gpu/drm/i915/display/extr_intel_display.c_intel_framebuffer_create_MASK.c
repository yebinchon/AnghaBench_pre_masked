
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct intel_framebuffer {struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct intel_framebuffer*,struct drm_i915_gem_object*,struct drm_mode_fb_cmd2*) ;
 int FUNC_2 (struct intel_framebuffer*) ;
 struct intel_framebuffer* FUNC_3 (int,int ) ;

struct drm_framebuffer *
FUNC_4(struct drm_i915_gem_object *VAR_2,
    struct drm_mode_fb_cmd2 *VAR_3)
{
 struct intel_framebuffer *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
 if (VAR_5)
  goto err;

 return &VAR_4->base;

err:
 FUNC_2(VAR_4);
 return FUNC_0(VAR_5);
}
