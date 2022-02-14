
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct skl_ddb_allocation {int enabled_slices; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int ddb_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 TYPE_2__* FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int const FUNC_4 (struct drm_display_mode const*) ;

__attribute__((used)) static u16 FUNC_5(struct drm_i915_private *VAR_0,
         const struct intel_crtc_state *VAR_1,
         const u64 VAR_2,
         const int VAR_3,
         struct skl_ddb_allocation *VAR_4)
{
 const struct drm_display_mode *VAR_5;
 u64 VAR_6;
 u16 VAR_7 = FUNC_2(VAR_0)->ddb_size;

 FUNC_3(VAR_7 == 0);

 if (FUNC_1(VAR_0) < 11)
  return VAR_7 - 4;

 VAR_5 = &VAR_1->base.adjusted_mode;
 VAR_6 = VAR_2 * FUNC_4(VAR_5);
 if (0 && (VAR_3 > 1 || VAR_6 >= FUNC_0(12))) {
  VAR_4->enabled_slices = 2;
 } else {
  VAR_4->enabled_slices = 1;
  VAR_7 /= 2;
 }

 return VAR_7;
}
