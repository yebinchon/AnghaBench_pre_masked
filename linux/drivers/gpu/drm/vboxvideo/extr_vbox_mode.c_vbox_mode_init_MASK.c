
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preferred_depth; int max_height; int max_width; scalar_t__ min_height; scalar_t__ min_width; void* funcs; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct vbox_private {unsigned int num_crtcs; struct drm_device ddev; } ;
struct vbox_crtc {int dummy; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vbox_crtc*) ;
 int FUNC_1 (struct vbox_crtc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,struct vbox_crtc*,struct drm_encoder*) ;
 struct vbox_crtc* FUNC_6 (struct drm_device*,unsigned int) ;
 struct drm_encoder* FUNC_7 (struct drm_device*,unsigned int) ;
 int VAR_3 ;

int FUNC_8(struct vbox_private *VAR_4)
{
 struct drm_device *VAR_5 = &VAR_4->ddev;
 struct drm_encoder *VAR_6;
 struct vbox_crtc *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 FUNC_3(VAR_5);

 VAR_5->mode_config.funcs = (void *)&VAR_3;
 VAR_5->mode_config.min_width = 0;
 VAR_5->mode_config.min_height = 0;
 VAR_5->mode_config.preferred_depth = 24;
 VAR_5->mode_config.max_width = VAR_1;
 VAR_5->mode_config.max_height = VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_4->num_crtcs; ++VAR_8) {
  VAR_7 = FUNC_6(VAR_5, VAR_8);
  if (FUNC_0(VAR_7)) {
   VAR_9 = FUNC_1(VAR_7);
   goto err_drm_mode_cleanup;
  }
  VAR_6 = FUNC_7(VAR_5, VAR_8);
  if (!VAR_6) {
   VAR_9 = -VAR_0;
   goto err_drm_mode_cleanup;
  }
  VAR_9 = FUNC_5(VAR_5, VAR_7, VAR_6);
  if (VAR_9)
   goto err_drm_mode_cleanup;
 }

 FUNC_4(VAR_5);
 return 0;

err_drm_mode_cleanup:
 FUNC_2(VAR_5);
 return VAR_9;
}
