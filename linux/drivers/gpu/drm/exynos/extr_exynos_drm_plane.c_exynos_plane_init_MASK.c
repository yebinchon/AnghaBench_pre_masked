
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_plane_config {int capabilities; int zpos; int type; int num_pixel_formats; int pixel_formats; } ;
struct drm_plane {int dummy; } ;
struct exynos_drm_plane {unsigned int index; struct drm_plane base; struct exynos_drm_plane_config const* config; } ;
struct TYPE_2__ {int num_crtc; } ;
struct drm_device {int dev; TYPE_1__ mode_config; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (struct drm_plane*,unsigned int) ;
 int FUNC_4 (struct drm_plane*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_plane*,int,int *,int ,int ,int *,int ,int *) ;
 int FUNC_6 (struct drm_plane*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_7(struct drm_device *VAR_8,
        struct exynos_drm_plane *VAR_9, unsigned int VAR_10,
        const struct exynos_drm_plane_config *VAR_11)
{
 int VAR_12;
 unsigned int VAR_13 = FUNC_0(VAR_1) |
           FUNC_0(VAR_2) |
           FUNC_0(VAR_0);
 struct drm_plane *VAR_14 = &VAR_9->base;

 VAR_12 = FUNC_5(VAR_8, &VAR_9->base,
           1 << VAR_8->mode_config.num_crtc,
           &VAR_6,
           VAR_11->pixel_formats,
           VAR_11->num_pixel_formats,
           ((void*)0), VAR_11->type, ((void*)0));
 if (VAR_12) {
  FUNC_1(VAR_8->dev, "failed to initialize plane\n");
  return VAR_12;
 }

 FUNC_4(&VAR_9->base, &VAR_7);

 VAR_9->index = VAR_10;
 VAR_9->config = VAR_11;

 FUNC_6(&VAR_9->base, VAR_11->zpos,
      !(VAR_11->capabilities & VAR_5));

 if (VAR_11->capabilities & VAR_3)
  FUNC_3(VAR_14, VAR_13);

 if (VAR_11->capabilities & VAR_4)
  FUNC_2(VAR_14);

 return 0;
}
