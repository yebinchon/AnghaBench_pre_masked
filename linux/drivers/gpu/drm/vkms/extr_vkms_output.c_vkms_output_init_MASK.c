
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct drm_encoder {int possible_crtcs; } ;
struct drm_connector {int dummy; } ;
struct vkms_output {struct drm_crtc crtc; struct drm_encoder encoder; struct drm_connector connector; } ;
struct drm_device {int dummy; } ;
struct vkms_device {struct drm_device drm; struct vkms_output output; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct drm_connector*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_plane*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct drm_device*,struct drm_crtc*,struct drm_plane*,struct drm_plane*) ;
 int VAR_7 ;
 struct drm_plane* FUNC_13 (struct vkms_device*,int ,int) ;

int FUNC_14(struct vkms_device *VAR_8, int VAR_9)
{
 struct vkms_output *VAR_10 = &VAR_8->output;
 struct drm_device *VAR_11 = &VAR_8->drm;
 struct drm_connector *VAR_12 = &VAR_10->connector;
 struct drm_encoder *VAR_13 = &VAR_10->encoder;
 struct drm_crtc *VAR_14 = &VAR_10->crtc;
 struct drm_plane *VAR_15, *VAR_16 = ((void*)0);
 int VAR_17;

 VAR_15 = FUNC_13(VAR_8, VAR_3, VAR_9);
 if (FUNC_1(VAR_15))
  return FUNC_2(VAR_15);

 if (VAR_4) {
  VAR_16 = FUNC_13(VAR_8, VAR_2, VAR_9);
  if (FUNC_1(VAR_16)) {
   VAR_17 = FUNC_2(VAR_16);
   goto err_cursor;
  }
 }

 VAR_17 = FUNC_12(VAR_11, VAR_14, VAR_15, VAR_16);
 if (VAR_17)
  goto err_crtc;

 VAR_17 = FUNC_6(VAR_11, VAR_12, &VAR_6,
     VAR_0);
 if (VAR_17) {
  FUNC_0("Failed to init connector\n");
  goto err_connector;
 }

 FUNC_5(VAR_12, &VAR_5);

 VAR_17 = FUNC_9(VAR_11, VAR_13, &VAR_7,
          VAR_1, ((void*)0));
 if (VAR_17) {
  FUNC_0("Failed to init encoder\n");
  goto err_encoder;
 }
 VAR_13->possible_crtcs = 1;

 VAR_17 = FUNC_3(VAR_12, VAR_13);
 if (VAR_17) {
  FUNC_0("Failed to attach connector to encoder\n");
  goto err_attach;
 }

 FUNC_10(VAR_11);

 return 0;

err_attach:
 FUNC_8(VAR_13);

err_encoder:
 FUNC_4(VAR_12);

err_connector:
 FUNC_7(VAR_14);

err_crtc:
 if (VAR_4)
  FUNC_11(VAR_16);

err_cursor:
 FUNC_11(VAR_15);

 return VAR_17;
}
