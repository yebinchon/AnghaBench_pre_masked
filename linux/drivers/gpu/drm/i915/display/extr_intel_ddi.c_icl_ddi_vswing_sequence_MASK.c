
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;
typedef enum intel_output_type { ____Placeholder_intel_output_type } intel_output_type ;


 int FUNC_0 (struct intel_encoder*,int ,int) ;
 int FUNC_1 (struct intel_encoder*,int,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_0,
        int VAR_1,
        u32 VAR_2,
        enum intel_output_type VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_4(VAR_0->base.dev);
 enum phy VAR_5 = FUNC_3(VAR_4, VAR_0->port);

 if (FUNC_2(VAR_4, VAR_5))
  FUNC_0(VAR_0, VAR_2, VAR_3);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
