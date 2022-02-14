
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct hibmc_framebuffer {struct drm_framebuffer fb; } ;
struct drm_mode_fb_cmd2 {int pixel_format; int * handles; int height; int width; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int,int,int,int) ;
 long VAR_0 ;
 struct drm_framebuffer* FUNC_1 (long) ;
 scalar_t__ FUNC_2 (struct hibmc_framebuffer*) ;
 struct drm_gem_object* FUNC_3 (struct drm_file*,int ) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct hibmc_framebuffer* FUNC_5 (struct drm_device*,struct drm_mode_fb_cmd2 const*,struct drm_gem_object*) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_6(struct drm_device *VAR_1,
         struct drm_file *VAR_2,
         const struct drm_mode_fb_cmd2 *VAR_3)
{
 struct drm_gem_object *VAR_4;
 struct hibmc_framebuffer *VAR_5;

 FUNC_0("%dx%d, format %c%c%c%c\n",
    VAR_3->width, VAR_3->height,
    (VAR_3->pixel_format) & 0xff,
    (VAR_3->pixel_format >> 8) & 0xff,
    (VAR_3->pixel_format >> 16) & 0xff,
    (VAR_3->pixel_format >> 24) & 0xff);

 VAR_4 = FUNC_3(VAR_2, VAR_3->handles[0]);
 if (!VAR_4)
  return FUNC_1(-VAR_0);

 VAR_5 = FUNC_5(VAR_1, VAR_3, VAR_4);
 if (FUNC_2(VAR_5)) {
  FUNC_4(VAR_4);
  return FUNC_1((long)VAR_5);
 }
 return &VAR_5->fb;
}
