
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int port; } ;
struct intel_dp {int output_reg; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_2__ {struct intel_encoder base; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ,int ,int*) ;

__attribute__((used)) static enum pipe FUNC_3(struct intel_dp *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_1);
 struct intel_encoder *VAR_3 = &FUNC_0(VAR_1)->base;
 enum pipe VAR_4;

 if (FUNC_2(VAR_2, VAR_1->output_reg,
      VAR_3->port, &VAR_4))
  return VAR_4;

 return VAR_0;
}
