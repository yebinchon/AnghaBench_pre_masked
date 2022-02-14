
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_digital_port {int (* infoframes_enabled ) (struct intel_encoder*,struct intel_crtc_state const*) ;} ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 struct intel_digital_port* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 unsigned int* VAR_0 ;
 int FUNC_6 (struct intel_encoder*,struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

u32 FUNC_8(struct intel_encoder *VAR_1,
      const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_7(VAR_1->base.dev);
 struct intel_digital_port *VAR_4 = FUNC_3(&VAR_1->base);
 u32 VAR_5, VAR_6 = 0;
 int VAR_7;

 VAR_5 = VAR_4->infoframes_enabled(VAR_1, VAR_2);


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  unsigned int VAR_8 = VAR_0[VAR_7];

  if (FUNC_2(VAR_3)) {
   if (VAR_5 & FUNC_5(VAR_8))
    VAR_6 |= FUNC_1(VAR_7);
  } else {
   if (VAR_5 & FUNC_4(VAR_8))
    VAR_6 |= FUNC_1(VAR_7);
  }
 }

 return VAR_6;
}
