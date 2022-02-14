
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {scalar_t__* modifier; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 struct drm_framebuffer* FUNC_1 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;
 int FUNC_2 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;

struct drm_framebuffer *
FUNC_3(struct drm_device *VAR_1, struct drm_file *VAR_2,
   const struct drm_mode_fb_cmd2 *VAR_3)
{
 if (VAR_3->modifier[0]) {
  if (!FUNC_2(VAR_1, VAR_2, VAR_3))
   return FUNC_0(-VAR_0);
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
