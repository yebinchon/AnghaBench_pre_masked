
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {scalar_t__ pixel_format; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 struct drm_framebuffer* FUNC_1 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_2(struct drm_device *VAR_3, struct drm_file *VAR_4,
      const struct drm_mode_fb_cmd2 *VAR_5)
{
 if (VAR_5->pixel_format != VAR_1 &&
     VAR_5->pixel_format != VAR_0)
  return FUNC_0(-VAR_2);

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
