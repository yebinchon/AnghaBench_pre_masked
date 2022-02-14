
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {int port; TYPE_3__ base; } ;
struct intel_digital_port {int max_lanes; } ;
struct TYPE_5__ {TYPE_1__* ddi_port_info; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct ddi_buf_trans {int i_boost; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum intel_output_type { ____Placeholder_intel_output_type } intel_output_type ;
struct TYPE_4__ {int hdmi_boost_level; int dp_boost_level; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*,int,int) ;
 struct intel_digital_port* FUNC_3 (TYPE_3__*) ;
 struct ddi_buf_trans* FUNC_4 (struct drm_i915_private*,int,int*) ;
 struct ddi_buf_trans* FUNC_5 (struct drm_i915_private*,int,int*) ;
 struct ddi_buf_trans* FUNC_6 (struct drm_i915_private*,int*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_4,
          int VAR_5, enum intel_output_type VAR_6)
{
 struct intel_digital_port *VAR_7 = FUNC_3(&VAR_4->base);
 struct drm_i915_private *VAR_8 = FUNC_7(VAR_4->base.dev);
 enum port VAR_9 = VAR_4->port;
 u8 VAR_10;

 if (VAR_6 == VAR_1)
  VAR_10 = VAR_8->vbt.ddi_port_info[VAR_9].hdmi_boost_level;
 else
  VAR_10 = VAR_8->vbt.ddi_port_info[VAR_9].dp_boost_level;

 if (VAR_10 == 0) {
  const struct ddi_buf_trans *VAR_11;
  int VAR_12;

  if (VAR_6 == VAR_1)
   VAR_11 = FUNC_6(VAR_8, &VAR_12);
  else if (VAR_6 == VAR_0)
   VAR_11 = FUNC_5(VAR_8, VAR_9, &VAR_12);
  else
   VAR_11 = FUNC_4(VAR_8, VAR_9, &VAR_12);

  if (FUNC_1(!VAR_11))
   return;
  if (FUNC_1(VAR_5 >= VAR_12))
   VAR_5 = VAR_12 - 1;

  VAR_10 = VAR_11[VAR_5].i_boost;
 }


 if (VAR_10 && VAR_10 != 0x1 && VAR_10 != 0x3 && VAR_10 != 0x7) {
  FUNC_0("Invalid I_boost value %u\n", VAR_10);
  return;
 }

 FUNC_2(VAR_8, VAR_9, VAR_10);

 if (VAR_9 == VAR_2 && VAR_7->max_lanes == 4)
  FUNC_2(VAR_8, VAR_3, VAR_10);
}
