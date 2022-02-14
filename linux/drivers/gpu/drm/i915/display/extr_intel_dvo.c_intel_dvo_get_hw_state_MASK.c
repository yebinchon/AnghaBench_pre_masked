
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int dvo_reg; } ;
struct intel_dvo {TYPE_2__ dev; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct intel_dvo* FUNC_1 (struct intel_encoder*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_encoder *VAR_3,
       enum pipe *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_2(VAR_3->base.dev);
 struct intel_dvo *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->dev.dvo_reg);

 *VAR_4 = (VAR_7 & VAR_1) >> VAR_2;

 return VAR_7 & VAR_0;
}
