
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct bxt_ddi_buf_trans {int deemphasis; int enable; int scale; int margin; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum intel_output_type { ____Placeholder_intel_output_type } intel_output_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*,int,int ,int ,int ,int ) ;
 struct bxt_ddi_buf_trans* FUNC_2 (struct drm_i915_private*,int*) ;
 struct bxt_ddi_buf_trans* FUNC_3 (struct drm_i915_private*,int*) ;
 struct bxt_ddi_buf_trans* FUNC_4 (struct drm_i915_private*,int*) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_2,
        int VAR_3, enum intel_output_type VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_5(VAR_2->base.dev);
 const struct bxt_ddi_buf_trans *VAR_6;
 enum port VAR_7 = VAR_2->port;
 int VAR_8;

 if (VAR_4 == VAR_1)
  VAR_6 = FUNC_4(VAR_5, &VAR_8);
 else if (VAR_4 == VAR_0)
  VAR_6 = FUNC_3(VAR_5, &VAR_8);
 else
  VAR_6 = FUNC_2(VAR_5, &VAR_8);

 if (FUNC_0(!VAR_6))
  return;
 if (FUNC_0(VAR_3 >= VAR_8))
  VAR_3 = VAR_8 - 1;

 FUNC_1(VAR_5, VAR_7,
         VAR_6[VAR_3].margin,
         VAR_6[VAR_3].scale,
         VAR_6[VAR_3].enable,
         VAR_6[VAR_3].deemphasis);
}
