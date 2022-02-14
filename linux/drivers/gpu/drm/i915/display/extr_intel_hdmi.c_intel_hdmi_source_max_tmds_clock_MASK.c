
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct intel_encoder {size_t port; TYPE_1__ base; } ;
struct TYPE_4__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct ddi_vbt_port_info {scalar_t__ max_tmds_clock; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int,scalar_t__) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct intel_encoder *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_4(VAR_0->base.dev);
 const struct ddi_vbt_port_info *VAR_2 =
  &VAR_1->vbt.ddi_port_info[VAR_0->port];
 int VAR_3;

 if (FUNC_0(VAR_1) >= 10 || FUNC_1(VAR_1))
  VAR_3 = 594000;
 else if (FUNC_0(VAR_1) >= 8 || FUNC_2(VAR_1))
  VAR_3 = 300000;
 else if (FUNC_0(VAR_1) >= 5)
  VAR_3 = 225000;
 else
  VAR_3 = 165000;

 if (VAR_2->max_tmds_clock)
  VAR_3 = FUNC_3(VAR_3, VAR_2->max_tmds_clock);

 return VAR_3;
}
