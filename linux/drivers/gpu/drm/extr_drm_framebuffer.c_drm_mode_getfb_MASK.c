
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_mode_fb_cmd {int bpp; scalar_t__ handle; int pitch; int depth; int width; int height; int fb_id; } ;
struct drm_framebuffer {TYPE_2__* funcs; int * pitches; TYPE_1__* format; int width; int height; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {int (* create_handle ) (struct drm_framebuffer*,struct drm_file*,scalar_t__*) ;} ;
struct TYPE_3__ {int num_planes; int* cpp; int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,int ) ;
 struct drm_framebuffer* FUNC_2 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_3 (struct drm_framebuffer*) ;
 int FUNC_4 (struct drm_file*) ;
 int FUNC_5 (struct drm_framebuffer*,struct drm_file*,scalar_t__*) ;

int FUNC_6(struct drm_device *VAR_6,
     void *VAR_7, struct drm_file *VAR_8)
{
 struct drm_mode_fb_cmd *VAR_9 = VAR_7;
 struct drm_framebuffer *VAR_10;
 int VAR_11;

 if (!FUNC_1(VAR_6, VAR_1))
  return -VAR_5;

 VAR_10 = FUNC_2(VAR_6, VAR_8, VAR_9->fb_id);
 if (!VAR_10)
  return -VAR_4;


 if (VAR_10->format->num_planes > 1) {
  VAR_11 = -VAR_2;
  goto out;
 }

 if (!VAR_10->funcs->create_handle) {
  VAR_11 = -VAR_3;
  goto out;
 }

 VAR_9->height = VAR_10->height;
 VAR_9->width = VAR_10->width;
 VAR_9->depth = VAR_10->format->depth;
 VAR_9->bpp = VAR_10->format->cpp[0] * 8;
 VAR_9->pitch = VAR_10->pitches[0];






 if (!FUNC_4(VAR_8) && !FUNC_0(VAR_0)) {
  VAR_9->handle = 0;
  VAR_11 = 0;
  goto out;
 }

 VAR_11 = VAR_10->funcs->create_handle(VAR_10, VAR_8, &VAR_9->handle);

out:
 FUNC_3(VAR_10);

 return VAR_11;
}
