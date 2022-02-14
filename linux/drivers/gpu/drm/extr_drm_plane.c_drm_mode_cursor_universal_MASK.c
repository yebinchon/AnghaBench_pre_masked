
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_plane {struct drm_framebuffer* fb; TYPE_1__* state; struct drm_crtc* crtc; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_mode_fb_cmd2 {int handles; int pitches; int pixel_format; int height; int width; } ;
struct drm_mode_cursor2 {int flags; int y; int x; int hot_y; int hot_x; scalar_t__ handle; int height; int width; } ;
struct drm_framebuffer {int width; int height; int hot_y; int hot_x; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int cursor_y; int cursor_x; struct drm_plane* cursor; struct drm_device* dev; } ;
typedef int int32_t ;
struct TYPE_2__ {struct drm_framebuffer* fb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct drm_framebuffer*) ;
 int FUNC_3 (struct drm_framebuffer*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int ,int ,int,int,int ,int ,int,int,struct drm_modeset_acquire_ctx*) ;
 int FUNC_6 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int ,int ,int,int,int ,int ,int,int,struct drm_modeset_acquire_ctx*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_framebuffer*) ;
 int FUNC_9 (struct drm_framebuffer*) ;
 struct drm_framebuffer* FUNC_10 (struct drm_device*,struct drm_mode_fb_cmd2*,struct drm_file*) ;

__attribute__((used)) static int FUNC_11(struct drm_crtc *VAR_3,
         struct drm_mode_cursor2 *VAR_4,
         struct drm_file *VAR_5,
         struct drm_modeset_acquire_ctx *VAR_6)
{
 struct drm_device *VAR_7 = VAR_3->dev;
 struct drm_plane *VAR_8 = VAR_3->cursor;
 struct drm_framebuffer *VAR_9 = ((void*)0);
 struct drm_mode_fb_cmd2 VAR_10 = {
  .width = VAR_4->width,
  .height = VAR_4->height,
  .pixel_format = VAR_0,
  .pitches = VAR_4->width * 4 ,
  .handles = VAR_4->handle ,
 };
 int32_t VAR_11, VAR_12;
 uint32_t VAR_13 = 0, VAR_14 = 0;
 uint32_t VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_0(!VAR_8);
 FUNC_4(VAR_8->crtc != VAR_3 && VAR_8->crtc != ((void*)0));






 if (VAR_4->flags & VAR_1) {
  if (VAR_4->handle) {
   VAR_9 = FUNC_10(VAR_7, &VAR_10, VAR_5);
   if (FUNC_2(VAR_9)) {
    FUNC_1("failed to wrap cursor buffer in drm framebuffer\n");
    return FUNC_3(VAR_9);
   }

   VAR_9->hot_x = VAR_4->hot_x;
   VAR_9->hot_y = VAR_4->hot_y;
  } else {
   VAR_9 = ((void*)0);
  }
 } else {
  if (VAR_8->state)
   VAR_9 = VAR_8->state->fb;
  else
   VAR_9 = VAR_8->fb;

  if (VAR_9)
   FUNC_8(VAR_9);
 }

 if (VAR_4->flags & VAR_2) {
  VAR_11 = VAR_4->x;
  VAR_12 = VAR_4->y;
 } else {
  VAR_11 = VAR_3->cursor_x;
  VAR_12 = VAR_3->cursor_y;
 }

 if (VAR_9) {
  VAR_13 = VAR_9->width;
  VAR_14 = VAR_9->height;
  VAR_15 = VAR_9->width << 16;
  VAR_16 = VAR_9->height << 16;
 }

 if (FUNC_7(VAR_7))
  VAR_17 = FUNC_5(VAR_8, VAR_3, VAR_9,
     VAR_11, VAR_12, VAR_13, VAR_14,
     0, 0, VAR_15, VAR_16, VAR_6);
 else
  VAR_17 = FUNC_6(VAR_8, VAR_3, VAR_9,
       VAR_11, VAR_12, VAR_13, VAR_14,
       0, 0, VAR_15, VAR_16, VAR_6);

 if (VAR_9)
  FUNC_9(VAR_9);


 if (VAR_17 == 0 && VAR_4->flags & VAR_2) {
  VAR_3->cursor_x = VAR_4->x;
  VAR_3->cursor_y = VAR_4->y;
 }

 return VAR_17;
}
