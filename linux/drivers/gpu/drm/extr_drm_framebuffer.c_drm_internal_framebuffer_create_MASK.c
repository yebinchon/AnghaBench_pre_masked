
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_fb_cmd2 {int flags; scalar_t__ width; scalar_t__ height; } ;
struct drm_mode_config {scalar_t__ min_width; scalar_t__ max_width; scalar_t__ min_height; scalar_t__ max_height; TYPE_1__* funcs; int allow_fb_modifiers; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct TYPE_2__ {struct drm_framebuffer* (* fb_create ) (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_framebuffer* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;
 struct drm_framebuffer* FUNC_4 (struct drm_device*,struct drm_file*,struct drm_mode_fb_cmd2 const*) ;

struct drm_framebuffer *
FUNC_5(struct drm_device *VAR_3,
    const struct drm_mode_fb_cmd2 *VAR_4,
    struct drm_file *VAR_5)
{
 struct drm_mode_config *VAR_6 = &VAR_3->mode_config;
 struct drm_framebuffer *VAR_7;
 int VAR_8;

 if (VAR_4->flags & ~(VAR_0 | VAR_1)) {
  FUNC_0("bad framebuffer flags 0x%08x\n", VAR_4->flags);
  return FUNC_1(-VAR_2);
 }

 if ((VAR_6->min_width > VAR_4->width) || (VAR_4->width > VAR_6->max_width)) {
  FUNC_0("bad framebuffer width %d, should be >= %d && <= %d\n",
     VAR_4->width, VAR_6->min_width, VAR_6->max_width);
  return FUNC_1(-VAR_2);
 }
 if ((VAR_6->min_height > VAR_4->height) || (VAR_4->height > VAR_6->max_height)) {
  FUNC_0("bad framebuffer height %d, should be >= %d && <= %d\n",
     VAR_4->height, VAR_6->min_height, VAR_6->max_height);
  return FUNC_1(-VAR_2);
 }

 if (VAR_4->flags & VAR_1 &&
     !VAR_3->mode_config.allow_fb_modifiers) {
  FUNC_0("driver does not support fb modifiers\n");
  return FUNC_1(-VAR_2);
 }

 VAR_8 = FUNC_3(VAR_3, VAR_4);
 if (VAR_8)
  return FUNC_1(VAR_8);

 VAR_7 = VAR_3->mode_config.funcs->fb_create(VAR_3, VAR_5, VAR_4);
 if (FUNC_2(VAR_7)) {
  FUNC_0("could not create framebuffer\n");
  return VAR_7;
 }

 return VAR_7;
}
