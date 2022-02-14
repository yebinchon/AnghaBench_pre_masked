
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct ddi_vbt_port_info {scalar_t__ alternate_ddc_pin; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*,int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static u8 FUNC_14(struct drm_i915_private *VAR_0,
        enum port VAR_1)
{
 const struct ddi_vbt_port_info *VAR_2 =
  &VAR_0->vbt.ddi_port_info[VAR_1];
 u8 VAR_3;

 if (VAR_2->alternate_ddc_pin) {
  FUNC_0("Using DDC pin 0x%x for port %c (VBT)\n",
         VAR_2->alternate_ddc_pin, FUNC_13(VAR_1));
  return VAR_2->alternate_ddc_pin;
 }

 if (FUNC_3(VAR_0))
  VAR_3 = FUNC_12(VAR_0, VAR_1);
 else if (FUNC_4(VAR_0) || FUNC_2(VAR_0))
  VAR_3 = FUNC_11(VAR_0, VAR_1);
 else if (FUNC_1(VAR_0))
  VAR_3 = FUNC_9(VAR_0, VAR_1);
 else if (FUNC_6(VAR_0))
  VAR_3 = FUNC_7(VAR_0, VAR_1);
 else if (FUNC_5(VAR_0))
  VAR_3 = FUNC_8(VAR_0, VAR_1);
 else
  VAR_3 = FUNC_10(VAR_0, VAR_1);

 FUNC_0("Using DDC pin 0x%x for port %c (platform default)\n",
        VAR_3, FUNC_13(VAR_1));

 return VAR_3;
}
