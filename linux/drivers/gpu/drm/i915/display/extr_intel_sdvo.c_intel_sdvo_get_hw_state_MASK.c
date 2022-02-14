
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct intel_sdvo {int sdvo_reg; } ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (struct intel_sdvo*,scalar_t__*) ;
 int FUNC_1 (struct drm_i915_private*,int ,int*) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_sdvo* FUNC_3 (struct intel_encoder*) ;

__attribute__((used)) static bool FUNC_4(struct intel_encoder *VAR_0,
        enum pipe *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_0->base.dev);
 struct intel_sdvo *VAR_3 = FUNC_3(VAR_0);
 u16 VAR_4 = 0;
 bool VAR_5;

 FUNC_0(VAR_3, &VAR_4);

 VAR_5 = FUNC_1(VAR_2, VAR_3->sdvo_reg, VAR_1);

 return VAR_5 || VAR_4;
}
