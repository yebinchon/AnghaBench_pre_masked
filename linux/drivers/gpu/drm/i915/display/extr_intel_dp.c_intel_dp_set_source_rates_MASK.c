
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_dp {int const* source_rates; int num_source_rates; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_6__ {size_t port; TYPE_1__ base; } ;
struct intel_digital_port {TYPE_3__ base; } ;
struct TYPE_5__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct ddi_vbt_port_info {int dp_max_link_rate; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct intel_dp*) ;
 struct intel_digital_port* FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (struct intel_dp*) ;
 int FUNC_12 (int const*,int,int) ;
 int FUNC_13 (int,int) ;
 struct drm_i915_private* FUNC_14 (int ) ;

__attribute__((used)) static void
FUNC_15(struct intel_dp *VAR_0)
{

 static const int VAR_1[] = {
  162000, 216000, 270000, 324000, 432000, 540000, 648000, 810000
 };
 static const int VAR_2[] = {
  162000, 216000, 243000, 270000, 324000, 432000, 540000
 };
 static const int VAR_3[] = {
  162000, 216000, 270000, 324000, 432000, 540000
 };
 static const int VAR_4[] = {
  162000, 270000, 540000
 };
 static const int VAR_5[] = {
  162000, 270000
 };
 struct intel_digital_port *VAR_6 = FUNC_10(VAR_0);
 struct drm_i915_private *VAR_7 = FUNC_14(VAR_6->base.base.dev);
 const struct ddi_vbt_port_info *VAR_8 =
  &VAR_7->vbt.ddi_port_info[VAR_6->base.port];
 const int *VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12 = VAR_8->dp_max_link_rate;


 FUNC_8(VAR_0->source_rates || VAR_0->num_source_rates);

 if (FUNC_1(VAR_7) >= 10) {
  VAR_9 = VAR_1;
  VAR_10 = FUNC_0(VAR_1);
  if (FUNC_3(VAR_7, 10))
   VAR_11 = FUNC_9(VAR_0);
  else
   VAR_11 = FUNC_11(VAR_0);
 } else if (FUNC_5(VAR_7)) {
  VAR_9 = VAR_2;
  VAR_10 = FUNC_0(VAR_2);
 } else if (FUNC_4(VAR_7)) {
  VAR_9 = VAR_3;
  VAR_10 = FUNC_0(VAR_3);
 } else if ((FUNC_6(VAR_7) && !FUNC_7(VAR_7)) ||
     FUNC_2(VAR_7)) {
  VAR_9 = VAR_4;
  VAR_10 = FUNC_0(VAR_4);
 } else {
  VAR_9 = VAR_5;
  VAR_10 = FUNC_0(VAR_5);
 }

 if (VAR_11 && VAR_12)
  VAR_11 = FUNC_13(VAR_11, VAR_12);
 else if (VAR_12)
  VAR_11 = VAR_12;

 if (VAR_11)
  VAR_10 = FUNC_12(VAR_9, VAR_10, VAR_11);

 VAR_0->source_rates = VAR_9;
 VAR_0->num_source_rates = VAR_10;
}
