
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ivch_priv {int* reg_backup; } ;
struct intel_dvo_device {struct ivch_priv* dev_priv; } ;
struct drm_display_mode {int hdisplay; int crtc_hdisplay; int vdisplay; int crtc_vdisplay; } ;


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
 int FUNC_1 (struct intel_dvo_device*) ;
 int FUNC_2 (struct intel_dvo_device*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct intel_dvo_device *VAR_15,
     const struct drm_display_mode *VAR_16,
     const struct drm_display_mode *VAR_17)
{
 struct ivch_priv *VAR_18 = VAR_15->dev_priv;
 u16 VAR_19 = 0;
 u16 VAR_20 = 0;
 u16 VAR_21;

 FUNC_1(VAR_15);

 VAR_21 = VAR_18->reg_backup[FUNC_0(VAR_14) - 1];


 VAR_21 &= VAR_5;
 if (VAR_21 == VAR_4 || VAR_21 == VAR_3)
  VAR_20 = VAR_1;

 VAR_19 = (VAR_10 | VAR_11 |
  VAR_9);

 if (VAR_16->hdisplay != VAR_17->crtc_hdisplay ||
     VAR_16->vdisplay != VAR_17->crtc_vdisplay) {
  u16 VAR_22, VAR_23;

  VAR_20 |= VAR_2;
  VAR_19 |= VAR_8;
  VAR_22 = (((VAR_16->hdisplay - 1) << 16) /
      (VAR_17->crtc_hdisplay - 1)) >> 2;
  VAR_23 = (((VAR_16->vdisplay - 1) << 16) /
      (VAR_17->crtc_vdisplay - 1)) >> 2;
  FUNC_2(VAR_15, VAR_13, VAR_22);
  FUNC_2(VAR_15, VAR_12, VAR_23);
 } else {
  VAR_20 &= ~VAR_2;
  VAR_19 &= ~VAR_8;
 }
 VAR_19 &= ~VAR_7;

 FUNC_2(VAR_15, VAR_0, VAR_20);
 FUNC_2(VAR_15, VAR_6, VAR_19);
}
