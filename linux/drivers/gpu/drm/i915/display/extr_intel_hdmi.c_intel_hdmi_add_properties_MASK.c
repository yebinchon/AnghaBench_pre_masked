
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_hdmi {int dummy; } ;
struct TYPE_7__ {int active; } ;
struct intel_digital_port {TYPE_3__ lspcon; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {TYPE_4__* dev; int base; TYPE_1__* state; } ;
struct TYPE_6__ {int hdr_output_metadata_property; } ;
struct TYPE_8__ {TYPE_2__ mode_config; } ;
struct TYPE_5__ {int picture_aspect_ratio; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,int,int) ;
 int FUNC_5 (int *,int ,int ) ;
 struct intel_digital_port* FUNC_6 (struct intel_hdmi*) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_connector*) ;
 int FUNC_9 (struct drm_connector*) ;
 int FUNC_10 (struct drm_connector*) ;
 struct drm_i915_private* FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_12(struct intel_hdmi *VAR_1, struct drm_connector *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_11(VAR_2->dev);
 struct intel_digital_port *VAR_4 =
    FUNC_6(VAR_1);

 FUNC_10(VAR_2);
 FUNC_8(VAR_2);
 FUNC_7(VAR_2);






 if (!VAR_4->lspcon.active)
  FUNC_9(VAR_2);

 FUNC_3(VAR_2);
 VAR_2->state->picture_aspect_ratio = VAR_0;

 if (FUNC_1(VAR_3) >= 10 || FUNC_2(VAR_3))
  FUNC_5(&VAR_2->base,
   VAR_2->dev->mode_config.hdr_output_metadata_property, 0);

 if (!FUNC_0(VAR_3))
  FUNC_4(VAR_2, 8, 12);
}
