
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {scalar_t__ pixel_format; int height; int width; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 struct drm_framebuffer* FUNC_2 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;

__attribute__((used)) static struct drm_framebuffer*
FUNC_3(struct drm_device *VAR_4, struct drm_file *VAR_5,
   const struct drm_mode_fb_cmd2 *VAR_6)
{
 if (VAR_6->pixel_format != VAR_0 &&
     VAR_6->pixel_format != VAR_1 &&
     VAR_6->pixel_format != VAR_2)
  return FUNC_0(-VAR_3);
 if (FUNC_1(VAR_6->width, VAR_6->height, ((void*)0)) < 0)
  return FUNC_0(-VAR_3);
 return FUNC_2(VAR_4, VAR_5, VAR_6);
}
