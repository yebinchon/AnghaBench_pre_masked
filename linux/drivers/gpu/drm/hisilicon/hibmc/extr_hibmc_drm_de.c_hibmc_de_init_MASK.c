
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_drm_private {struct drm_device* dev; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dev; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct drm_plane*) ;
 struct drm_crtc* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct drm_crtc*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_crtc*,struct drm_plane*,int *,int *,int *) ;
 int FUNC_6 (struct drm_crtc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_plane* FUNC_7 (struct hibmc_drm_private*) ;

int FUNC_8(struct hibmc_drm_private *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->dev;
 struct drm_crtc *VAR_6;
 struct drm_plane *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(VAR_4);
 if (FUNC_1(VAR_7)) {
  FUNC_0("failed to create plane: %ld\n", FUNC_2(VAR_7));
  return FUNC_2(VAR_7);
 }

 VAR_6 = FUNC_3(VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_0("failed to alloc memory when init crtc\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_5, VAR_6, VAR_7,
     ((void*)0), &VAR_2, ((void*)0));
 if (VAR_8) {
  FUNC_0("failed to init crtc: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_6(VAR_6, 256);
 if (VAR_8) {
  FUNC_0("failed to set gamma size: %d\n", VAR_8);
  return VAR_8;
 }
 FUNC_4(VAR_6, &VAR_3);

 return 0;
}
