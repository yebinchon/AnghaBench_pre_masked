
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int ucPostDiv; scalar_t__ ucRefDiv; int ulDispPllFreq; } ;
struct TYPE_10__ {scalar_t__ ucTransmitterID; int ucEncodeMode; scalar_t__ ucExtTransmitterID; int ucDispPllConfig; void* usPixelClock; } ;
struct TYPE_13__ {TYPE_5__ sOutput; TYPE_3__ sInput; } ;
struct TYPE_8__ {scalar_t__ ucTransmitterID; int ucEncodeMode; void* usPixelClock; int ucConfig; } ;
union adjust_pixel_clock {TYPE_6__ v3; TYPE_1__ v1; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct radeon_encoder_mst {int coherent_mode; TYPE_7__* connector; } ;
struct radeon_encoder_atom_dig {int coherent_mode; TYPE_7__* connector; } ;
struct radeon_encoder {int devices; scalar_t__ encoder_id; int active_device; struct radeon_encoder_mst* enc_priv; scalar_t__ is_mst_encoder; } ;
struct TYPE_11__ {int atom_context; } ;
struct radeon_device {scalar_t__ family; TYPE_4__ mode_info; } ;
struct TYPE_9__ {int percentage; scalar_t__ refdiv; } ;
struct radeon_crtc {int bpc; int pll_post_div; int pll_flags; scalar_t__ pll_reference_div; TYPE_2__ ss; scalar_t__ ss_enabled; struct drm_encoder* encoder; } ;
struct radeon_connector_atom_dig {int dp_clock; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {scalar_t__ encoder_type; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_connector {int dummy; } ;
typedef int args ;
struct TYPE_14__ {struct radeon_connector_atom_dig* con_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (char*,int,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_8 (int ,int ) ;
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
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int,int*,int*) ;
 int FUNC_11 (struct drm_encoder*) ;
 void* FUNC_12 (int) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (union adjust_pixel_clock*,int ,int) ;
 int FUNC_16 (struct drm_encoder*,int) ;
 scalar_t__ FUNC_17 (struct drm_encoder*) ;
 struct drm_connector* FUNC_18 (struct drm_encoder*) ;
 struct radeon_connector* FUNC_19 (struct drm_connector*) ;
 struct radeon_crtc* FUNC_20 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_21 (struct drm_encoder*) ;

__attribute__((used)) static u32 FUNC_22(struct drm_crtc *VAR_30,
          struct drm_display_mode *VAR_31)
{
 struct radeon_crtc *VAR_32 = FUNC_20(VAR_30);
 struct drm_device *VAR_33 = VAR_30->dev;
 struct radeon_device *VAR_34 = VAR_33->dev_private;
 struct drm_encoder *VAR_35 = VAR_32->encoder;
 struct radeon_encoder *VAR_36 = FUNC_21(VAR_35);
 struct drm_connector *VAR_37 = FUNC_18(VAR_35);
 u32 VAR_38 = VAR_31->clock;
 int VAR_39 = FUNC_11(VAR_35);
 u32 VAR_40 = VAR_31->clock;
 u32 VAR_41 = VAR_31->clock;
 int VAR_42 = VAR_32->bpc;
 bool VAR_43 = FUNC_16(VAR_35, VAR_31->clock);


 VAR_32->pll_flags = 0;

 if (FUNC_0(VAR_34)) {
  if ((VAR_34->family == VAR_6) ||
      (VAR_34->family == VAR_7) ||
      (VAR_34->family == VAR_8))
   VAR_32->pll_flags |= (
    VAR_23);

  if (FUNC_2(VAR_34) && VAR_31->clock > 200000)
   VAR_32->pll_flags |= VAR_24;
  else
   VAR_32->pll_flags |= VAR_25;

  if (VAR_34->family < VAR_11)
   VAR_32->pll_flags |= VAR_26;

  if (FUNC_3(VAR_34) || FUNC_4(VAR_34) || FUNC_5(VAR_34))
   VAR_32->pll_flags |= VAR_27;

  if (((VAR_34->family == VAR_9) || (VAR_34->family == VAR_10))
      && !VAR_32->ss_enabled)
   VAR_32->pll_flags |= VAR_27;
  if (FUNC_2(VAR_34) && VAR_31->clock > 165000)
   VAR_32->pll_flags |= VAR_27;
 } else {
  VAR_32->pll_flags |= VAR_21;

  if (VAR_31->clock > 200000)
   VAR_32->pll_flags |= VAR_24;
  else
   VAR_32->pll_flags |= VAR_25;
 }

 if ((VAR_36->devices & (VAR_2 | VAR_1)) ||
     (FUNC_17(VAR_35) != VAR_19)) {
  if (VAR_37) {
   struct radeon_connector *VAR_44 = FUNC_19(VAR_37);
   struct radeon_connector_atom_dig *VAR_45 =
    VAR_44->con_priv;

   VAR_40 = VAR_45->dp_clock;
  }
 }

 if (VAR_36->is_mst_encoder) {
  struct radeon_encoder_mst *VAR_46 = VAR_36->enc_priv;
  struct radeon_connector_atom_dig *VAR_47 = VAR_46->connector->con_priv;

  VAR_40 = VAR_47->dp_clock;
 }


 if (VAR_36->devices & (VAR_2)) {
  if (VAR_32->ss_enabled) {
   if (VAR_32->ss.refdiv) {
    VAR_32->pll_flags |= VAR_29;
    VAR_32->pll_reference_div = VAR_32->ss.refdiv;
    if (FUNC_0(VAR_34) &&
        VAR_34->family != VAR_9 &&
        VAR_34->family != VAR_10)
     VAR_32->pll_flags |= VAR_27;
   }
  }
 }

 if (FUNC_0(VAR_34)) {

  if (VAR_36->encoder_id == VAR_18)
   VAR_38 = VAR_31->clock * 2;
  if (VAR_36->active_device & (VAR_3))
   VAR_32->pll_flags |= VAR_23;
  if (VAR_36->devices & (VAR_2))
   VAR_32->pll_flags |= VAR_20;
 } else {
  if (VAR_35->encoder_type != VAR_16)
   VAR_32->pll_flags |= VAR_22;
  if (VAR_35->encoder_type == VAR_17)
   VAR_32->pll_flags |= VAR_29;
 }


 if (VAR_39 == VAR_4) {
  switch (VAR_42) {
  case 8:
  default:
   break;
  case 10:
   VAR_41 = (VAR_41 * 5) / 4;
   break;
  case 12:
   VAR_41 = (VAR_41 * 3) / 2;
   break;
  case 16:
   VAR_41 = VAR_41 * 2;
   break;
  }
 }





 if (FUNC_1(VAR_34)) {
  union adjust_pixel_clock VAR_48;
  u8 VAR_49, VAR_50;
  int VAR_51;

  VAR_51 = FUNC_8(VAR_12, VAR_5);
  if (!FUNC_10(VAR_34->mode_info.atom_context, VAR_51, &VAR_49,
        &VAR_50))
   return VAR_38;

  FUNC_15(&VAR_48, 0, sizeof(VAR_48));

  switch (VAR_49) {
  case 1:
   switch (VAR_50) {
   case 1:
   case 2:
    VAR_48.v1.usPixelClock = FUNC_12(VAR_41 / 10);
    VAR_48.v1.ucTransmitterID = VAR_36->encoder_id;
    VAR_48.v1.ucEncodeMode = VAR_39;
    if (VAR_32->ss_enabled && VAR_32->ss.percentage)
     VAR_48.v1.ucConfig |=
      VAR_0;

    FUNC_9(VAR_34->mode_info.atom_context,
         VAR_51, (uint32_t *)&VAR_48);
    VAR_38 = FUNC_13(VAR_48.v1.usPixelClock) * 10;
    break;
   case 3:
    VAR_48.v3.sInput.usPixelClock = FUNC_12(VAR_41 / 10);
    VAR_48.v3.sInput.ucTransmitterID = VAR_36->encoder_id;
    VAR_48.v3.sInput.ucEncodeMode = VAR_39;
    VAR_48.v3.sInput.ucDispPllConfig = 0;
    if (VAR_32->ss_enabled && VAR_32->ss.percentage)
     VAR_48.v3.sInput.ucDispPllConfig |=
      VAR_15;
    if (FUNC_7(VAR_39)) {
     VAR_48.v3.sInput.ucDispPllConfig |=
      VAR_13;

     VAR_48.v3.sInput.usPixelClock = FUNC_12(VAR_40 / 10);
    } else if (VAR_36->devices & (VAR_1)) {
     struct radeon_encoder_atom_dig *VAR_52 = VAR_36->enc_priv;
     if (VAR_52->coherent_mode)
      VAR_48.v3.sInput.ucDispPllConfig |=
       VAR_13;
     if (VAR_43)
      VAR_48.v3.sInput.ucDispPllConfig |=
       VAR_14;
    }
    if (FUNC_17(VAR_35) !=
        VAR_19)
     VAR_48.v3.sInput.ucExtTransmitterID =
      FUNC_17(VAR_35);
    else
     VAR_48.v3.sInput.ucExtTransmitterID = 0;

    FUNC_9(VAR_34->mode_info.atom_context,
         VAR_51, (uint32_t *)&VAR_48);
    VAR_38 = FUNC_14(VAR_48.v3.sOutput.ulDispPllFreq) * 10;
    if (VAR_48.v3.sOutput.ucRefDiv) {
     VAR_32->pll_flags |= VAR_27;
     VAR_32->pll_flags |= VAR_29;
     VAR_32->pll_reference_div = VAR_48.v3.sOutput.ucRefDiv;
    }
    if (VAR_48.v3.sOutput.ucPostDiv) {
     VAR_32->pll_flags |= VAR_27;
     VAR_32->pll_flags |= VAR_28;
     VAR_32->pll_post_div = VAR_48.v3.sOutput.ucPostDiv;
    }
    break;
   default:
    FUNC_6("Unknown table version %d %d\n", VAR_49, VAR_50);
    return VAR_38;
   }
   break;
  default:
   FUNC_6("Unknown table version %d %d\n", VAR_49, VAR_50);
   return VAR_38;
  }
 }
 return VAR_38;
}
