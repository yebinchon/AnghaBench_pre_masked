
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct ddi_vbt_port_info {int supports_dvi; int supports_hdmi; scalar_t__ alternate_ddc_pin; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (char*,int ,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_1,
        enum port VAR_2)
{
 struct ddi_vbt_port_info *VAR_3 = &VAR_1->vbt.ddi_port_info[VAR_2];
 enum port VAR_4;

 if (!VAR_3->alternate_ddc_pin)
  return;

 VAR_4 = FUNC_1(VAR_1, VAR_3->alternate_ddc_pin);
 if (VAR_4 != VAR_0) {
  FUNC_0("port %c trying to use the same DDC pin (0x%x) as port %c, "
         "disabling port %c DVI/HDMI support\n",
         FUNC_2(VAR_2), VAR_3->alternate_ddc_pin,
         FUNC_2(VAR_4), FUNC_2(VAR_4));
  VAR_3 = &VAR_1->vbt.ddi_port_info[VAR_4];

  VAR_3->supports_dvi = 0;
  VAR_3->supports_hdmi = 0;
  VAR_3->alternate_ddc_pin = 0;
 }
}
