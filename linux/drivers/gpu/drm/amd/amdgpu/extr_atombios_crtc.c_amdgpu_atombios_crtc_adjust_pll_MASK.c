
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ucPostDiv; scalar_t__ ucRefDiv; int ulDispPllFreq; } ;
struct TYPE_10__ {scalar_t__ ucTransmitterID; int ucEncodeMode; scalar_t__ ucExtTransmitterID; int ucDispPllConfig; void* usPixelClock; } ;
struct TYPE_11__ {TYPE_1__ sOutput; TYPE_4__ sInput; } ;
struct TYPE_8__ {scalar_t__ ucTransmitterID; int ucEncodeMode; void* usPixelClock; int ucConfig; } ;
union adjust_pixel_clock {TYPE_5__ v3; TYPE_2__ v1; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder_atom_dig {int coherent_mode; } ;
struct amdgpu_encoder {int devices; scalar_t__ encoder_id; int active_device; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct TYPE_12__ {int atom_context; } ;
struct amdgpu_device {TYPE_6__ mode_info; } ;
struct TYPE_9__ {int percentage; scalar_t__ refdiv; } ;
struct amdgpu_crtc {int bpc; int pll_post_div; int pll_flags; scalar_t__ pll_reference_div; TYPE_3__ ss; scalar_t__ ss_enabled; struct drm_encoder* encoder; } ;
struct amdgpu_connector_atom_dig {int dp_clock; } ;
struct amdgpu_connector {struct amdgpu_connector_atom_dig* con_priv; } ;
typedef int args ;


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
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int*,int*) ;
 int FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,int) ;
 scalar_t__ FUNC_7 (struct drm_encoder*) ;
 struct drm_connector* FUNC_8 (struct drm_encoder*) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (union adjust_pixel_clock*,int ,int) ;
 struct amdgpu_connector* FUNC_13 (struct drm_connector*) ;
 struct amdgpu_crtc* FUNC_14 (struct drm_crtc*) ;
 struct amdgpu_encoder* FUNC_15 (struct drm_encoder*) ;

__attribute__((used)) static u32 FUNC_16(struct drm_crtc *VAR_17,
        struct drm_display_mode *VAR_18)
{
 struct amdgpu_crtc *VAR_19 = FUNC_14(VAR_17);
 struct drm_device *VAR_20 = VAR_17->dev;
 struct amdgpu_device *VAR_21 = VAR_20->dev_private;
 struct drm_encoder *VAR_22 = VAR_19->encoder;
 struct amdgpu_encoder *VAR_23 = FUNC_15(VAR_22);
 struct drm_connector *VAR_24 = FUNC_8(VAR_22);
 u32 VAR_25 = VAR_18->clock;
 int VAR_26 = FUNC_5(VAR_22);
 u32 VAR_27 = VAR_18->clock;
 u32 VAR_28 = VAR_18->clock;
 int VAR_29 = VAR_19->bpc;
 bool VAR_30 = FUNC_6(VAR_22, VAR_18->clock);
 union adjust_pixel_clock VAR_31;
 u8 VAR_32, VAR_33;
 int VAR_34;

 VAR_19->pll_flags = VAR_3;

 if ((VAR_23->devices & (VAR_7 | VAR_6)) ||
     (FUNC_7(VAR_22) != VAR_16)) {
  if (VAR_24) {
   struct amdgpu_connector *VAR_35 = FUNC_13(VAR_24);
   struct amdgpu_connector_atom_dig *VAR_36 =
    VAR_35->con_priv;

   VAR_27 = VAR_36->dp_clock;
  }
 }


 if (VAR_23->devices & (VAR_7)) {
  if (VAR_19->ss_enabled) {
   if (VAR_19->ss.refdiv) {
    VAR_19->pll_flags |= VAR_5;
    VAR_19->pll_reference_div = VAR_19->ss.refdiv;
    VAR_19->pll_flags |= VAR_3;
   }
  }
 }


 if (VAR_23->encoder_id == VAR_15)
  VAR_25 = VAR_18->clock * 2;
 if (VAR_23->active_device & (VAR_8))
  VAR_19->pll_flags |= VAR_2;
 if (VAR_23->devices & (VAR_7))
  VAR_19->pll_flags |= VAR_1;



 if (VAR_26 == VAR_9) {
  switch (VAR_29) {
  case 8:
  default:
   break;
  case 10:
   VAR_28 = (VAR_28 * 5) / 4;
   break;
  case 12:
   VAR_28 = (VAR_28 * 3) / 2;
   break;
  case 16:
   VAR_28 = VAR_28 * 2;
   break;
  }
 }





 VAR_34 = FUNC_2(VAR_11, VAR_10);
 if (!FUNC_4(VAR_21->mode_info.atom_context, VAR_34, &VAR_32,
       &VAR_33))
  return VAR_25;

 FUNC_12(&VAR_31, 0, sizeof(VAR_31));

 switch (VAR_32) {
 case 1:
  switch (VAR_33) {
  case 1:
  case 2:
   VAR_31.v1.usPixelClock = FUNC_9(VAR_28 / 10);
   VAR_31.v1.ucTransmitterID = VAR_23->encoder_id;
   VAR_31.v1.ucEncodeMode = VAR_26;
   if (VAR_19->ss_enabled && VAR_19->ss.percentage)
    VAR_31.v1.ucConfig |=
     VAR_0;

   FUNC_3(VAR_21->mode_info.atom_context,
        VAR_34, (uint32_t *)&VAR_31);
   VAR_25 = FUNC_10(VAR_31.v1.usPixelClock) * 10;
   break;
  case 3:
   VAR_31.v3.sInput.usPixelClock = FUNC_9(VAR_28 / 10);
   VAR_31.v3.sInput.ucTransmitterID = VAR_23->encoder_id;
   VAR_31.v3.sInput.ucEncodeMode = VAR_26;
   VAR_31.v3.sInput.ucDispPllConfig = 0;
   if (VAR_19->ss_enabled && VAR_19->ss.percentage)
    VAR_31.v3.sInput.ucDispPllConfig |=
     VAR_14;
   if (FUNC_1(VAR_26)) {
    VAR_31.v3.sInput.ucDispPllConfig |=
     VAR_12;

    VAR_31.v3.sInput.usPixelClock = FUNC_9(VAR_27 / 10);
   } else if (VAR_23->devices & (VAR_6)) {
    struct amdgpu_encoder_atom_dig *VAR_37 = VAR_23->enc_priv;
    if (VAR_37->coherent_mode)
     VAR_31.v3.sInput.ucDispPllConfig |=
      VAR_12;
    if (VAR_30)
     VAR_31.v3.sInput.ucDispPllConfig |=
      VAR_13;
   }
   if (FUNC_7(VAR_22) !=
       VAR_16)
    VAR_31.v3.sInput.ucExtTransmitterID =
     FUNC_7(VAR_22);
   else
    VAR_31.v3.sInput.ucExtTransmitterID = 0;

   FUNC_3(VAR_21->mode_info.atom_context,
        VAR_34, (uint32_t *)&VAR_31);
   VAR_25 = FUNC_11(VAR_31.v3.sOutput.ulDispPllFreq) * 10;
   if (VAR_31.v3.sOutput.ucRefDiv) {
    VAR_19->pll_flags |= VAR_3;
    VAR_19->pll_flags |= VAR_5;
    VAR_19->pll_reference_div = VAR_31.v3.sOutput.ucRefDiv;
   }
   if (VAR_31.v3.sOutput.ucPostDiv) {
    VAR_19->pll_flags |= VAR_3;
    VAR_19->pll_flags |= VAR_4;
    VAR_19->pll_post_div = VAR_31.v3.sOutput.ucPostDiv;
   }
   break;
  default:
   FUNC_0("Unknown table version %d %d\n", VAR_32, VAR_33);
   return VAR_25;
  }
  break;
 default:
  FUNC_0("Unknown table version %d %d\n", VAR_32, VAR_33);
  return VAR_25;
 }

 return VAR_25;
}
