
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int present; } ;
struct TYPE_4__ {int lvds_dither; int int_tv_support; int int_crt_support; int int_lvds_support; int lvds_use_ssc; struct ddi_vbt_port_info* ddi_port_info; int lvds_ssc_freq; int * sdvo_lvds_vbt_mode; TYPE_1__ backlight; int crt_ddc_pin; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct ddi_vbt_port_info {int hdmi_level_shift; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct drm_i915_private*,int) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_4)
{
 enum port VAR_5;

 VAR_4->vbt.crt_ddc_pin = VAR_0;


 VAR_4->vbt.backlight.present = 1;


 VAR_4->vbt.lvds_dither = 1;


 VAR_4->vbt.sdvo_lvds_vbt_mode = ((void*)0);


 VAR_4->vbt.int_tv_support = 1;
 VAR_4->vbt.int_crt_support = 1;


 VAR_4->vbt.int_lvds_support = 1;


 VAR_4->vbt.lvds_use_ssc = 1;




 VAR_4->vbt.lvds_ssc_freq = FUNC_2(VAR_4,
   !FUNC_1(VAR_4));
 FUNC_0("Set default to SSC at %d kHz\n", VAR_4->vbt.lvds_ssc_freq);

 for (VAR_5 = VAR_3; VAR_5 < VAR_2; VAR_5++) {
  struct ddi_vbt_port_info *VAR_6 =
   &VAR_4->vbt.ddi_port_info[VAR_5];

  VAR_6->hdmi_level_shift = VAR_1;
 }
}
