
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_lspcon {int active; int mode; } ;
struct intel_dp {TYPE_3__* attached_connector; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; struct intel_lspcon lspcon; struct intel_dp dp; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int ycbcr_420_allowed; } ;
struct TYPE_6__ {struct drm_connector base; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_lspcon*) ;
 int FUNC_5 (struct intel_lspcon*) ;
 struct drm_i915_private* FUNC_6 (struct drm_device*) ;

bool FUNC_7(struct intel_digital_port *VAR_1)
{
 struct intel_dp *VAR_2 = &VAR_1->dp;
 struct intel_lspcon *VAR_3 = &VAR_1->lspcon;
 struct drm_device *VAR_4 = VAR_1->base.base.dev;
 struct drm_i915_private *VAR_5 = FUNC_6(VAR_4);
 struct drm_connector *VAR_6 = &VAR_2->attached_connector->base;

 if (!FUNC_2(VAR_5)) {
  FUNC_1("LSPCON is not supported on this platform\n");
  return 0;
 }

 VAR_3->active = 0;
 VAR_3->mode = VAR_0;

 if (!FUNC_5(VAR_3)) {
  FUNC_1("Failed to probe lspcon\n");
  return 0;
 }

 if (!FUNC_3(VAR_2)) {
  FUNC_1("LSPCON DPCD read failed\n");
  return 0;
 }

 if (!FUNC_4(VAR_3)) {
  FUNC_1("LSPCON vendor detection failed\n");
  return 0;
 }

 VAR_6->ycbcr_420_allowed = 1;
 VAR_3->active = 1;
 FUNC_0("Success: LSPCON init\n");
 return 1;
}
