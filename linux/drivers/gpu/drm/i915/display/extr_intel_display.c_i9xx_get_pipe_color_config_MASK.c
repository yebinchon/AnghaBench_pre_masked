
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_plane {int i9xx_plane; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {int gamma_enable; int csc_enable; TYPE_1__ base; } ;
struct TYPE_4__ {int dev; int primary; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;
 struct intel_plane* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_4(VAR_2->base.crtc);
 struct intel_plane *VAR_4 = FUNC_5(VAR_3->base.primary);
 struct drm_i915_private *VAR_5 = FUNC_3(VAR_3->base.dev);
 enum i9xx_plane_id VAR_6 = VAR_4->i9xx_plane;
 u32 VAR_7;

 VAR_7 = FUNC_2(FUNC_0(VAR_6));

 if (VAR_7 & VAR_0)
  VAR_2->gamma_enable = 1;

 if (!FUNC_1(VAR_5) &&
     VAR_7 & VAR_1)
  VAR_2->csc_enable = 1;
}
