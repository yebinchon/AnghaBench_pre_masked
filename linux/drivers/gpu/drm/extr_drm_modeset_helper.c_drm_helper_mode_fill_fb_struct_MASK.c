
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int flags; int * modifier; int * offsets; int * pitches; int height; int width; } ;
struct drm_framebuffer {int flags; int modifier; int * offsets; int * pitches; int height; int width; int format; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,struct drm_mode_fb_cmd2 const*) ;

void FUNC_1(struct drm_device *VAR_0,
        struct drm_framebuffer *VAR_1,
        const struct drm_mode_fb_cmd2 *VAR_2)
{
 int VAR_3;

 VAR_1->dev = VAR_0;
 VAR_1->format = FUNC_0(VAR_0, VAR_2);
 VAR_1->width = VAR_2->width;
 VAR_1->height = VAR_2->height;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_1->pitches[VAR_3] = VAR_2->pitches[VAR_3];
  VAR_1->offsets[VAR_3] = VAR_2->offsets[VAR_3];
 }
 VAR_1->modifier = VAR_2->modifier[0];
 VAR_1->flags = VAR_2->flags;
}
