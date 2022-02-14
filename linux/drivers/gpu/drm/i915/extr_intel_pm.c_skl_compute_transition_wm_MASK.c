
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct skl_wm_params {int y_tile_minimum; scalar_t__ y_tiled; } ;
struct TYPE_8__ {int plane_res_b; int plane_en; } ;
struct skl_plane_wm {TYPE_4__ trans_wm; TYPE_3__* wm; } ;
struct TYPE_6__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_i915_private {int ipc_enabled; } ;
struct drm_device {int dummy; } ;
struct TYPE_7__ {int plane_res_b; } ;
struct TYPE_5__ {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private const*,int ,int ) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(const struct intel_crtc_state *VAR_1,
          const struct skl_wm_params *VAR_2,
          struct skl_plane_wm *VAR_3)
{
 struct drm_device *VAR_4 = VAR_1->base.crtc->dev;
 const struct drm_i915_private *VAR_5 = FUNC_4(VAR_4);
 u16 VAR_6, VAR_7;
 const u16 VAR_8 = 10;
 u16 VAR_9, VAR_10, VAR_11;


 if (FUNC_0(VAR_5) <= 9)
  return;


 if (!VAR_5->ipc_enabled)
  return;

 VAR_6 = 14;
 if (FUNC_0(VAR_5) >= 11)
  VAR_6 = 4;

 VAR_10 = VAR_6 + VAR_8;
 VAR_9 = VAR_3->wm[0].plane_res_b - 1;

 if (VAR_2->y_tiled) {
  VAR_7 =
   (u16)FUNC_3(2, VAR_2->y_tile_minimum);
  VAR_11 = FUNC_2(VAR_9, VAR_7) +
    VAR_10;
 } else {
  VAR_11 = VAR_9 + VAR_10;


  if (FUNC_1(VAR_5, VAR_0, VAR_0))
   VAR_11 += 1;

 }






 VAR_3->trans_wm.plane_res_b = VAR_11 + 1;
 VAR_3->trans_wm.plane_en = 1;
}
