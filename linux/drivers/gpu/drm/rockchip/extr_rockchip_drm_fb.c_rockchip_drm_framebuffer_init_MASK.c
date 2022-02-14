
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int dummy; } ;


 struct drm_framebuffer* FUNC_0 (struct drm_framebuffer*) ;
 scalar_t__ FUNC_1 (struct drm_framebuffer*) ;
 struct drm_framebuffer* FUNC_2 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct drm_gem_object**,int) ;

struct drm_framebuffer *
FUNC_3(struct drm_device *VAR_0,
         const struct drm_mode_fb_cmd2 *VAR_1,
         struct drm_gem_object *VAR_2)
{
 struct drm_framebuffer *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_2, 1);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);

 return VAR_3;
}
