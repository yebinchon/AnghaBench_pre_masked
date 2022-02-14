
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct intel_encoder *VAR_4, enum pipe *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_1(VAR_4->base.dev);
 u32 VAR_7 = FUNC_0(VAR_0);

 *VAR_5 = (VAR_7 & VAR_2) >> VAR_3;

 return VAR_7 & VAR_1;
}
