
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int interlace_allowed; } ;
struct drm_encoder {int possible_crtcs; } ;
struct meson_venc_cvbs {struct drm_connector connector; struct drm_encoder encoder; struct meson_drm* priv; } ;
struct meson_drm {int dev; struct drm_device* drm; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct meson_venc_cvbs* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_5 (struct drm_connector*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_7 (struct drm_encoder*,int *) ;
 int FUNC_8 (struct drm_device*,struct drm_encoder*,int *,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct meson_drm*) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_10(struct meson_drm *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8->drm;
 struct meson_venc_cvbs *VAR_10;
 struct drm_connector *VAR_11;
 struct drm_encoder *VAR_12;
 int VAR_13;

 if (!FUNC_9(VAR_8)) {
  FUNC_2(VAR_9->dev, "CVBS Output connector not available\n");
  return 0;
 }

 VAR_10 = FUNC_3(VAR_8->dev, sizeof(*VAR_10),
           VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->priv = VAR_8;
 VAR_12 = &VAR_10->encoder;
 VAR_11 = &VAR_10->connector;



 FUNC_5(VAR_11,
     &VAR_5);

 VAR_13 = FUNC_6(VAR_9, VAR_11, &VAR_4,
     VAR_0);
 if (VAR_13) {
  FUNC_1(VAR_8->dev, "Failed to init CVBS connector\n");
  return VAR_13;
 }

 VAR_11->interlace_allowed = 1;



 FUNC_7(VAR_12, &VAR_7);

 VAR_13 = FUNC_8(VAR_9, VAR_12, &VAR_6,
          VAR_1, "meson_venc_cvbs");
 if (VAR_13) {
  FUNC_1(VAR_8->dev, "Failed to init CVBS encoder\n");
  return VAR_13;
 }

 VAR_12->possible_crtcs = FUNC_0(0);

 FUNC_4(VAR_11, VAR_12);

 return 0;
}
