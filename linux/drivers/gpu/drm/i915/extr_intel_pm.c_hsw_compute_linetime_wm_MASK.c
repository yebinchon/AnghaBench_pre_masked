
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {scalar_t__ crtc_clock; int crtc_htotal; } ;
struct TYPE_4__ {int active; struct drm_display_mode adjusted_mode; int state; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_5__ {scalar_t__ cdclk; } ;
struct TYPE_6__ {TYPE_2__ logical; } ;
struct intel_atomic_state {TYPE_3__ cdclk; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 struct intel_atomic_state* FUNC_4 (int ) ;

__attribute__((used)) static u32
FUNC_5(const struct intel_crtc_state *VAR_0)
{
 const struct intel_atomic_state *VAR_1 =
  FUNC_4(VAR_0->base.state);
 const struct drm_display_mode *VAR_2 =
  &VAR_0->base.adjusted_mode;
 u32 VAR_3, VAR_4;

 if (!VAR_0->base.active)
  return 0;
 if (FUNC_3(VAR_2->crtc_clock == 0))
  return 0;
 if (FUNC_3(VAR_1->cdclk.logical.cdclk == 0))
  return 0;




 VAR_3 = FUNC_0(VAR_2->crtc_htotal * 1000 * 8,
         VAR_2->crtc_clock);
 VAR_4 = FUNC_0(VAR_2->crtc_htotal * 1000 * 8,
      VAR_1->cdclk.logical.cdclk);

 return FUNC_1(VAR_4) |
        FUNC_2(VAR_3);
}
