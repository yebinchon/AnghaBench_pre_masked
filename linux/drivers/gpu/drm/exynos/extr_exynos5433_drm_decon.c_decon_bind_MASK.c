
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_plane {int base; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
struct decon_context {unsigned int first_win; int out_type; int crtc; struct exynos_drm_plane* planes; TYPE_1__* configs; struct drm_device* drm_dev; } ;
typedef enum exynos_drm_output_type { ____Placeholder_exynos_drm_output_type } exynos_drm_output_type ;
struct TYPE_2__ {unsigned int zpos; int capabilities; int type; int num_pixel_formats; int pixel_formats; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;
 unsigned int VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 struct decon_context* FUNC_4 (struct device*) ;
 int FUNC_5 (struct drm_device*,int *,int,int *,struct decon_context*) ;
 int FUNC_6 (struct drm_device*,struct device*) ;
 int FUNC_7 (struct drm_device*,struct exynos_drm_plane*,unsigned int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_9, struct device *VAR_10, void *VAR_11)
{
 struct decon_context *VAR_12 = FUNC_4(VAR_9);
 struct drm_device *VAR_13 = VAR_11;
 struct exynos_drm_plane *VAR_14;
 enum exynos_drm_output_type VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 VAR_12->drm_dev = VAR_13;

 for (VAR_16 = VAR_12->first_win; VAR_16 < VAR_4; VAR_16++) {
  VAR_12->configs[VAR_16].pixel_formats = VAR_7;
  VAR_12->configs[VAR_16].num_pixel_formats = FUNC_0(VAR_7);
  VAR_12->configs[VAR_16].zpos = VAR_16 - VAR_12->first_win;
  VAR_12->configs[VAR_16].type = VAR_8[VAR_16];
  VAR_12->configs[VAR_16].capabilities = VAR_5[VAR_16];

  VAR_17 = FUNC_7(VAR_13, &VAR_12->planes[VAR_16], VAR_16,
     &VAR_12->configs[VAR_16]);
  if (VAR_17)
   return VAR_17;
 }

 VAR_14 = &VAR_12->planes[VAR_3];
 VAR_15 = (VAR_12->out_type & VAR_2) ? VAR_0
        : VAR_1;
 VAR_12->crtc = FUNC_5(VAR_13, &VAR_14->base,
   VAR_15, &VAR_6, VAR_12);
 if (FUNC_1(VAR_12->crtc))
  return FUNC_2(VAR_12->crtc);

 FUNC_3(VAR_12->crtc);

 return FUNC_6(VAR_13, VAR_9);
}
