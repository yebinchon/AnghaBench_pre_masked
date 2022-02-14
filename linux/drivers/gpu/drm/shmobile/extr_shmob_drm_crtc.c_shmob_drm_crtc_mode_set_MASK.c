
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct shmob_drm_format_info {int dummy; } ;
struct shmob_drm_device {int dev; } ;
struct shmob_drm_crtc {int line_size; struct shmob_drm_format_info const* format; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_4__* primary; TYPE_1__* dev; } ;
struct TYPE_8__ {TYPE_3__* fb; } ;
struct TYPE_7__ {int * pitches; TYPE_2__* format; } ;
struct TYPE_6__ {int format; } ;
struct TYPE_5__ {struct shmob_drm_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct shmob_drm_crtc*,int,int) ;
 struct shmob_drm_format_info* FUNC_2 (int ) ;
 struct shmob_drm_crtc* FUNC_3 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_4(struct drm_crtc *VAR_1,
       struct drm_display_mode *VAR_2,
       struct drm_display_mode *VAR_3,
       int VAR_4, int VAR_5,
       struct drm_framebuffer *VAR_6)
{
 struct shmob_drm_crtc *VAR_7 = FUNC_3(VAR_1);
 struct shmob_drm_device *VAR_8 = VAR_1->dev->dev_private;
 const struct shmob_drm_format_info *VAR_9;

 VAR_9 = FUNC_2(VAR_1->primary->fb->format->format);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_8->dev, "mode_set: unsupported format %08x\n",
   VAR_1->primary->fb->format->format);
  return -VAR_0;
 }

 VAR_7->format = VAR_9;
 VAR_7->line_size = VAR_1->primary->fb->pitches[0];

 FUNC_1(VAR_7, VAR_4, VAR_5);

 return 0;
}
