
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_plane {int base; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
struct decon_context {scalar_t__ encoder; int crtc; struct exynos_drm_plane* planes; TYPE_1__* configs; } ;
struct TYPE_2__ {unsigned int zpos; int type; int num_pixel_formats; int pixel_formats; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct decon_context*,struct drm_device*) ;
 int FUNC_5 (struct decon_context*) ;
 int VAR_4 ;
 int * VAR_5 ;
 struct decon_context* FUNC_6 (struct device*) ;
 int FUNC_7 (struct drm_device*,scalar_t__) ;
 int FUNC_8 (struct drm_device*,int *,int ,int *,struct decon_context*) ;
 int FUNC_9 (struct drm_device*,struct exynos_drm_plane*,unsigned int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_6, struct device *VAR_7, void *VAR_8)
{
 struct decon_context *VAR_9 = FUNC_6(VAR_6);
 struct drm_device *VAR_10 = VAR_8;
 struct exynos_drm_plane *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_9, VAR_10);
 if (VAR_13) {
  FUNC_1(VAR_6, "decon_ctx_initialize failed.\n");
  return VAR_13;
 }

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_9->configs[VAR_12].pixel_formats = VAR_4;
  VAR_9->configs[VAR_12].num_pixel_formats = FUNC_0(VAR_4);
  VAR_9->configs[VAR_12].zpos = VAR_12;
  VAR_9->configs[VAR_12].type = VAR_5[VAR_12];

  VAR_13 = FUNC_9(VAR_10, &VAR_9->planes[VAR_12], VAR_12,
     &VAR_9->configs[VAR_12]);
  if (VAR_13)
   return VAR_13;
 }

 VAR_11 = &VAR_9->planes[VAR_0];
 VAR_9->crtc = FUNC_8(VAR_10, &VAR_11->base,
   VAR_1, &VAR_3, VAR_9);
 if (FUNC_2(VAR_9->crtc)) {
  FUNC_5(VAR_9);
  return FUNC_3(VAR_9->crtc);
 }

 if (VAR_9->encoder)
  FUNC_7(VAR_10, VAR_9->encoder);

 return 0;

}
