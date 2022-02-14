
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct vidi_context {int crtc; struct exynos_drm_plane* planes; struct drm_device* drm_dev; struct drm_encoder encoder; } ;
struct exynos_drm_plane_config {unsigned int zpos; int type; int num_pixel_formats; int pixel_formats; int member_0; } ;
struct exynos_drm_plane {int base; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_3 ;
 struct vidi_context* FUNC_4 (struct device*) ;
 int FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,int *) ;
 int FUNC_7 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_8 (struct drm_device*,int *,int ,int *,struct vidi_context*) ;
 int FUNC_9 (struct drm_encoder*,int ) ;
 int FUNC_10 (struct drm_device*,struct exynos_drm_plane*,unsigned int,struct exynos_drm_plane_config*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct drm_encoder*) ;
 int VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static int FUNC_12(struct device *VAR_9, struct device *VAR_10, void *VAR_11)
{
 struct vidi_context *VAR_12 = FUNC_4(VAR_9);
 struct drm_device *VAR_13 = VAR_11;
 struct drm_encoder *VAR_14 = &VAR_12->encoder;
 struct exynos_drm_plane *VAR_15;
 struct exynos_drm_plane_config VAR_16 = { 0 };
 unsigned int VAR_17;
 int VAR_18;

 VAR_12->drm_dev = VAR_13;

 VAR_16.pixel_formats = VAR_6;
 VAR_16.num_pixel_formats = FUNC_0(VAR_6);

 for (VAR_17 = 0; VAR_17 < VAR_3; VAR_17++) {
  VAR_16.zpos = VAR_17;
  VAR_16.type = VAR_8[VAR_17];

  VAR_18 = FUNC_10(VAR_13, &VAR_12->planes[VAR_17], VAR_17,
     &VAR_16);
  if (VAR_18)
   return VAR_18;
 }

 VAR_15 = &VAR_12->planes[VAR_0];
 VAR_12->crtc = FUNC_8(VAR_13, &VAR_15->base,
   VAR_2, &VAR_7, VAR_12);
 if (FUNC_2(VAR_12->crtc)) {
  FUNC_1(VAR_9, "failed to create crtc.\n");
  return FUNC_3(VAR_12->crtc);
 }

 FUNC_7(VAR_13, VAR_14, &VAR_4,
    VAR_1, ((void*)0));

 FUNC_6(VAR_14, &VAR_5);

 VAR_18 = FUNC_9(VAR_14, VAR_2);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_11(VAR_14);
 if (VAR_18) {
  FUNC_1(VAR_9, "failed to create connector ret = %d\n",
         VAR_18);
  FUNC_5(VAR_14);
  return VAR_18;
 }

 return 0;
}
