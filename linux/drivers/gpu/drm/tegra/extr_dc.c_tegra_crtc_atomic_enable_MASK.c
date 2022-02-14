
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_dc_state {int dummy; } ;
struct tegra_dc {TYPE_1__* soc; scalar_t__ syncpt; int dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_2__* state; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_3__ {scalar_t__ has_nvdisplay; scalar_t__ supports_interlacing; scalar_t__ supports_background_color; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct tegra_dc*) ;
 int FUNC_8 (struct tegra_dc*,struct tegra_dc_state*) ;
 int FUNC_9 (struct tegra_dc*,int ) ;
 int FUNC_10 (struct tegra_dc*,struct drm_display_mode*) ;
 int FUNC_11 (struct tegra_dc*,int,int ) ;
 struct tegra_dc_state* FUNC_12 (TYPE_2__*) ;
 struct tegra_dc* FUNC_13 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_14(struct drm_crtc *VAR_48,
         struct drm_crtc_state *VAR_49)
{
 struct drm_display_mode *VAR_50 = &VAR_48->state->adjusted_mode;
 struct tegra_dc_state *VAR_51 = FUNC_12(VAR_48->state);
 struct tegra_dc *VAR_52 = FUNC_13(VAR_48);
 u32 VAR_53;

 FUNC_6(VAR_52->dev);


 if (VAR_52->syncpt) {
  u32 VAR_54 = FUNC_5(VAR_52->syncpt), VAR_55;

  if (VAR_52->soc->has_nvdisplay)
   VAR_55 = 1 << 31;
  else
   VAR_55 = 1 << 8;

  VAR_53 = VAR_36;
  FUNC_11(VAR_52, VAR_53, VAR_3);

  VAR_53 = VAR_55 | VAR_54;
  FUNC_11(VAR_52, VAR_53, VAR_0);
 }

 if (VAR_52->soc->has_nvdisplay) {
  VAR_53 = VAR_20 | VAR_17 | VAR_19 |
   VAR_18;
  FUNC_11(VAR_52, VAR_53, VAR_7);

  VAR_53 = VAR_20 | VAR_17 | VAR_19 |
   VAR_18 | VAR_35 |
   VAR_22 | VAR_24 | VAR_34 |
   VAR_33 | VAR_40 | VAR_41 |
   VAR_39 | VAR_21;
  FUNC_11(VAR_52, VAR_53, VAR_6);

  VAR_53 = VAR_35 | VAR_22 | VAR_39 |
   VAR_21;
  FUNC_11(VAR_52, VAR_53, VAR_4);

  VAR_53 = VAR_22 | VAR_34 | VAR_21;
  FUNC_11(VAR_52, VAR_53, VAR_5);

  FUNC_11(VAR_52, VAR_32, VAR_8);
 } else {
  VAR_53 = VAR_43 | VAR_45 | VAR_47 |
   VAR_42 | VAR_44 | VAR_46;
  FUNC_11(VAR_52, VAR_53, VAR_7);

  VAR_53 = VAR_43 | VAR_45 | VAR_47 |
   VAR_42 | VAR_44 | VAR_46;
  FUNC_11(VAR_52, VAR_53, VAR_6);


  VAR_53 = FUNC_0(0) | FUNC_1(0x20) |
   FUNC_2(0x20) | FUNC_3(0x20);
  FUNC_11(VAR_52, VAR_53, VAR_12);

  VAR_53 = FUNC_0(0) | FUNC_1(1) |
   FUNC_2(1) | FUNC_3(1);
  FUNC_11(VAR_52, VAR_53, VAR_13);

  VAR_53 = VAR_39 | VAR_43 | VAR_45 | VAR_47 |
   VAR_42 | VAR_44 | VAR_46;
  FUNC_11(VAR_52, VAR_53, VAR_4);

  VAR_53 = VAR_43 | VAR_45 | VAR_47 |
   VAR_42 | VAR_44 | VAR_46;
  FUNC_11(VAR_52, VAR_53, VAR_5);
 }

 if (VAR_52->soc->supports_background_color)
  FUNC_11(VAR_52, 0, VAR_10);
 else
  FUNC_11(VAR_52, 0, VAR_11);


 FUNC_8(VAR_52, VAR_51);


 FUNC_10(VAR_52, VAR_50);


 if (VAR_52->soc->supports_interlacing) {
  VAR_53 = FUNC_9(VAR_52, VAR_14);
  VAR_53 &= ~VAR_23;
  FUNC_11(VAR_52, VAR_53, VAR_14);
 }

 VAR_53 = FUNC_9(VAR_52, VAR_1);
 VAR_53 &= ~VAR_16;
 VAR_53 |= VAR_15;
 FUNC_11(VAR_52, VAR_53, VAR_1);

 if (!VAR_52->soc->has_nvdisplay) {
  VAR_53 = FUNC_9(VAR_52, VAR_2);
  VAR_53 |= VAR_27 | VAR_28 | VAR_29 | VAR_30 |
    VAR_31 | VAR_25 | VAR_26;
  FUNC_11(VAR_52, VAR_53, VAR_2);
 }


 if (VAR_52->soc->has_nvdisplay) {
  VAR_53 = VAR_37 | VAR_38;
  FUNC_11(VAR_52, VAR_53, VAR_9);
 }

 FUNC_7(VAR_52);

 FUNC_4(VAR_48);
}
