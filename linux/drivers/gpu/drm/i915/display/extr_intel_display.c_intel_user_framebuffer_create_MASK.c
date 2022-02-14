
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 struct drm_i915_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 struct drm_framebuffer* FUNC_3 (struct drm_i915_gem_object*,struct drm_mode_fb_cmd2*) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_4(struct drm_device *VAR_1,
         struct drm_file *VAR_2,
         const struct drm_mode_fb_cmd2 *VAR_3)
{
 struct drm_framebuffer *VAR_4;
 struct drm_i915_gem_object *VAR_5;
 struct drm_mode_fb_cmd2 VAR_6 = *VAR_3;

 VAR_5 = FUNC_1(VAR_2, VAR_6.handles[0]);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(VAR_5, &VAR_6);
 FUNC_2(VAR_5);

 return VAR_4;
}
