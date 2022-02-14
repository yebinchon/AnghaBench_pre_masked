
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int possible_crtcs; } ;
struct intel_encoder {int crtc_mask; TYPE_5__ base; scalar_t__ cloneable; int port; int power_domain; int type; int get_hw_state; int disable; int enable; int pre_enable; int get_config; int compute_config; } ;
struct intel_tv {int type; struct intel_encoder base; } ;
struct drm_connector {int interlace_allowed; int doublescan_allowed; int base; struct drm_connector_state* state; } ;
struct intel_connector {int get_hw_state; int polled; struct drm_connector base; } ;
struct TYPE_7__ {int tv_bottom_margin_property; int tv_right_margin_property; int tv_top_margin_property; int tv_left_margin_property; int tv_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct drm_i915_private {struct drm_device drm; } ;
struct TYPE_8__ {int left; int top; int right; int bottom; } ;
struct TYPE_9__ {int mode; TYPE_2__ margins; } ;
struct drm_connector_state {TYPE_3__ tv; } ;
struct TYPE_10__ {int oversample; char* name; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct drm_connector*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_7 (struct drm_device*,TYPE_5__*,int *,int ,char*) ;
 int FUNC_8 (struct drm_device*,int,char const**) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct drm_i915_private*) ;
 struct intel_connector* FUNC_11 () ;
 int FUNC_12 (struct intel_connector*,struct intel_encoder*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_13 (struct intel_tv*) ;
 struct intel_tv* FUNC_14 (int,int ) ;
 TYPE_4__* VAR_23 ;

void
FUNC_15(struct drm_i915_private *VAR_24)
{
 struct drm_device *VAR_25 = &VAR_24->drm;
 struct drm_connector *VAR_26;
 struct intel_tv *VAR_27;
 struct intel_encoder *VAR_28;
 struct intel_connector *VAR_29;
 u32 VAR_30, VAR_31, VAR_32;
 const char *VAR_33[FUNC_0(VAR_23)];
 int VAR_34, VAR_35 = 0;
 struct drm_connector_state *VAR_36;

 if ((FUNC_2(VAR_9) & VAR_12) == VAR_11)
  return;

 if (!FUNC_10(VAR_24)) {
  FUNC_1("Integrated TV is not present.\n");
  return;
 }





 VAR_32 = FUNC_2(VAR_10);

 FUNC_3(VAR_10, VAR_32 | VAR_8);
 VAR_30 = FUNC_2(VAR_10);

 FUNC_3(VAR_10, VAR_32 & ~VAR_8);
 VAR_31 = FUNC_2(VAR_10);

 FUNC_3(VAR_10, VAR_32);






 if ((VAR_30 & VAR_8) == 0 ||
     (VAR_31 & VAR_8) != 0)
  return;

 VAR_27 = FUNC_14(sizeof(*VAR_27), VAR_4);
 if (!VAR_27) {
  return;
 }

 VAR_29 = FUNC_11();
 if (!VAR_29) {
  FUNC_13(VAR_27);
  return;
 }

 VAR_28 = &VAR_27->base;
 VAR_26 = &VAR_29->base;
 VAR_36 = VAR_26->state;
 VAR_29->polled = VAR_0;

 FUNC_6(VAR_25, VAR_26, &VAR_17,
      VAR_1);

 FUNC_7(VAR_25, &VAR_28->base, &VAR_19,
    VAR_3, "TV");

 VAR_28->compute_config = VAR_16;
 VAR_28->get_config = VAR_20;
 VAR_28->pre_enable = VAR_22;
 VAR_28->enable = VAR_15;
 VAR_28->disable = VAR_14;
 VAR_28->get_hw_state = VAR_21;
 VAR_29->get_hw_state = VAR_13;

 FUNC_12(VAR_29, VAR_28);

 VAR_28->type = VAR_5;
 VAR_28->power_domain = VAR_7;
 VAR_28->port = VAR_6;
 VAR_28->crtc_mask = (1 << 0) | (1 << 1);
 VAR_28->cloneable = 0;
 VAR_28->base.possible_crtcs = ((1 << 0) | (1 << 1));
 VAR_27->type = VAR_2;


 VAR_36->tv.margins.left = 54;
 VAR_36->tv.margins.top = 36;
 VAR_36->tv.margins.right = 46;
 VAR_36->tv.margins.bottom = 37;

 VAR_36->tv.mode = VAR_35;

 FUNC_5(VAR_26, &VAR_18);
 VAR_26->interlace_allowed = 0;
 VAR_26->doublescan_allowed = 0;


 for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_23); VAR_34++) {

  if (FUNC_4(VAR_24, 3) &&
      VAR_23[VAR_34].oversample == 1)
   break;

  VAR_33[VAR_34] = VAR_23[VAR_34].name;
 }
 FUNC_8(VAR_25, VAR_34, VAR_33);

 FUNC_9(&VAR_26->base, VAR_25->mode_config.tv_mode_property,
       VAR_36->tv.mode);
 FUNC_9(&VAR_26->base,
       VAR_25->mode_config.tv_left_margin_property,
       VAR_36->tv.margins.left);
 FUNC_9(&VAR_26->base,
       VAR_25->mode_config.tv_top_margin_property,
       VAR_36->tv.margins.top);
 FUNC_9(&VAR_26->base,
       VAR_25->mode_config.tv_right_margin_property,
       VAR_36->tv.margins.right);
 FUNC_9(&VAR_26->base,
       VAR_25->mode_config.tv_bottom_margin_property,
       VAR_36->tv.margins.bottom);
}
