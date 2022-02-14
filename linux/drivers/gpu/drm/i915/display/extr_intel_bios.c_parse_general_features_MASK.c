
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fdi_rx_polarity_inverted; int display_clock_mode; int lvds_ssc_freq; int lvds_use_ssc; int int_crt_support; int int_tv_support; int orientation; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct bdb_header {int version; } ;
struct bdb_general_features {scalar_t__ rotate_180; int fdi_rx_polarity_inverted; int display_clock_mode; int ssc_freq; int enable_ssc; int int_crt_support; int int_tv_support; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 struct bdb_general_features* FUNC_3 (struct bdb_header const*,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void
FUNC_5(struct drm_i915_private *VAR_4,
         const struct bdb_header *VAR_5)
{
 const struct bdb_general_features *VAR_6;

 VAR_6 = FUNC_3(VAR_5, VAR_0);
 if (!VAR_6)
  return;

 VAR_4->vbt.int_tv_support = VAR_6->int_tv_support;

 if (VAR_5->version >= 155 &&
     (FUNC_1(VAR_4) || FUNC_2(VAR_4)))
  VAR_4->vbt.int_crt_support = VAR_6->int_crt_support;
 VAR_4->vbt.lvds_use_ssc = VAR_6->enable_ssc;
 VAR_4->vbt.lvds_ssc_freq =
  FUNC_4(VAR_4, VAR_6->ssc_freq);
 VAR_4->vbt.display_clock_mode = VAR_6->display_clock_mode;
 VAR_4->vbt.fdi_rx_polarity_inverted = VAR_6->fdi_rx_polarity_inverted;
 if (VAR_5->version >= 181) {
  VAR_4->vbt.orientation = VAR_6->rotate_180 ?
   VAR_1 :
   VAR_2;
 } else {
  VAR_4->vbt.orientation = VAR_3;
 }
 FUNC_0("BDB_GENERAL_FEATURES int_tv_support %d int_crt_support %d lvds_use_ssc %d lvds_ssc_freq %d display_clock_mode %d fdi_rx_polarity_inverted %d\n",
        VAR_4->vbt.int_tv_support,
        VAR_4->vbt.int_crt_support,
        VAR_4->vbt.lvds_use_ssc,
        VAR_4->vbt.lvds_ssc_freq,
        VAR_4->vbt.display_clock_mode,
        VAR_4->vbt.fdi_rx_polarity_inverted);
}
