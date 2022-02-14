
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; int width; } ;
struct udl_framebuffer {int active_16; TYPE_2__ base; } ;
struct udl_device {int mode_buf_len; scalar_t__ mode_buf; struct drm_crtc* crtc; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_device {struct udl_device* dev_private; } ;
struct drm_crtc {TYPE_1__* primary; struct drm_device* dev; } ;
struct TYPE_3__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 struct udl_framebuffer* FUNC_0 (struct drm_framebuffer*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (struct udl_framebuffer*,int ,int ,int ,int ) ;
 char* FUNC_3 (char*,int ) ;
 char* FUNC_4 (char*,int) ;
 char* FUNC_5 (char*,int ) ;
 char* FUNC_6 (char*,int) ;
 char* FUNC_7 (char*,struct drm_display_mode*) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct drm_crtc *VAR_1,
          struct drm_display_mode *VAR_2,
          struct drm_display_mode *VAR_3,
          int VAR_4, int VAR_5,
          struct drm_framebuffer *VAR_6)

{
 struct drm_device *VAR_7 = VAR_1->dev;
 struct udl_framebuffer *VAR_8 = FUNC_0(VAR_1->primary->fb);
 struct udl_device *VAR_9 = VAR_7->dev_private;
 char *VAR_10;
 char *VAR_11;
 int VAR_12 = 0;

 VAR_9->crtc = VAR_1;

 VAR_10 = (char *)VAR_9->mode_buf;
 VAR_11 = FUNC_8(VAR_10);
 VAR_11 = FUNC_6(VAR_11, VAR_12);

 VAR_11 = FUNC_3(VAR_11, 0);

 VAR_11 = FUNC_4(VAR_11, 2 * VAR_2->vdisplay * VAR_2->hdisplay);

 VAR_11 = FUNC_7(VAR_11, VAR_3);
 VAR_11 = FUNC_5(VAR_11, VAR_0);
 VAR_11 = FUNC_9(VAR_11);

 VAR_11 = FUNC_1(VAR_11);

 if (VAR_6) {
  struct udl_framebuffer *VAR_13 = FUNC_0(VAR_6);
  VAR_13->active_16 = 0;
 }
 VAR_8->active_16 = 1;
 VAR_9->mode_buf_len = VAR_11 - VAR_10;


 FUNC_2(VAR_8, 0, 0, VAR_8->base.width, VAR_8->base.height);
 return 0;
}
