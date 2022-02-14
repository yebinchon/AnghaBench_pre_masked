
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int enable; } ;
struct fimd_context {TYPE_3__* crtc; scalar_t__ encoder; TYPE_2__ dp_clk; TYPE_1__* driver_data; struct exynos_drm_plane* planes; TYPE_4__* configs; struct drm_device* drm_dev; } ;
struct exynos_drm_plane {int base; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_11__ {unsigned int zpos; int capabilities; int type; int num_pixel_formats; int pixel_formats; } ;
struct TYPE_10__ {TYPE_2__* pipe_clk; } ;
struct TYPE_8__ {scalar_t__ has_dp_clk; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 unsigned int VAR_2 ;
 int * VAR_3 ;
 struct fimd_context* FUNC_3 (struct device*) ;
 int FUNC_4 (struct drm_device*,scalar_t__) ;
 TYPE_3__* FUNC_5 (struct drm_device*,int *,int ,int *,struct fimd_context*) ;
 int FUNC_6 (struct drm_device*,struct device*) ;
 int FUNC_7 (struct drm_device*,struct exynos_drm_plane*,unsigned int,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_9 (struct drm_device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_8, struct device *VAR_9, void *VAR_10)
{
 struct fimd_context *VAR_11 = FUNC_3(VAR_8);
 struct drm_device *VAR_12 = VAR_10;
 struct exynos_drm_plane *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_11->drm_dev = VAR_12;

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
  VAR_11->configs[VAR_14].pixel_formats = VAR_6;
  VAR_11->configs[VAR_14].num_pixel_formats = FUNC_0(VAR_6);
  VAR_11->configs[VAR_14].zpos = VAR_14;
  VAR_11->configs[VAR_14].type = VAR_7[VAR_14];
  VAR_11->configs[VAR_14].capabilities = VAR_3[VAR_14];
  VAR_15 = FUNC_7(VAR_12, &VAR_11->planes[VAR_14], VAR_14,
     &VAR_11->configs[VAR_14]);
  if (VAR_15)
   return VAR_15;
 }

 VAR_13 = &VAR_11->planes[VAR_0];
 VAR_11->crtc = FUNC_5(VAR_12, &VAR_13->base,
   VAR_1, &VAR_4, VAR_11);
 if (FUNC_1(VAR_11->crtc))
  return FUNC_2(VAR_11->crtc);

 if (VAR_11->driver_data->has_dp_clk) {
  VAR_11->dp_clk.enable = VAR_5;
  VAR_11->crtc->pipe_clk = &VAR_11->dp_clk;
 }

 if (VAR_11->encoder)
  FUNC_4(VAR_12, VAR_11->encoder);

 if (FUNC_9(VAR_12))
  FUNC_8(VAR_11->crtc);

 return FUNC_6(VAR_12, VAR_8);
}
