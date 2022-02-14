
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_24__ {int ucAction; int ucLaneNum; int ucConnObjId; int ucDPLaneSet; int ucHPDSel; int ucDigEncoderSel; void* ucDigMode; void* ucPhyId; void* ulSymClock; } ;
struct TYPE_22__ {int ucPhyClkSrcId; int ucCoherentMode; int ucHPDSel; } ;
struct TYPE_23__ {int ucAction; int ucLaneNum; int ucConnObjId; int ucDigEncoderSel; int ucDPLaneSet; TYPE_14__ asConfig; void* ucDigMode; void* ucPhyId; void* usSymClock; } ;
struct TYPE_19__ {int ucLinkSel; int ucEncoderSel; int ucRefClkSource; int ucTransmitterSel; int fCoherentMode; int fDualLinkConnector; } ;
struct TYPE_18__ {int ucLaneSel; int ucLaneSet; } ;
struct TYPE_20__ {int ucAction; int ucLaneNum; TYPE_11__ acConfig; void* usPixelClock; TYPE_10__ asMode; void* usInitInfo; } ;
struct TYPE_33__ {int ucLinkSel; int ucEncoderSel; int ucRefClkSource; int ucTransmitterSel; int fCoherentMode; int fDualLinkConnector; } ;
struct TYPE_32__ {int ucLaneSel; int ucLaneSet; } ;
struct TYPE_34__ {int ucAction; int ucLaneNum; TYPE_8__ acConfig; void* usPixelClock; TYPE_7__ asMode; void* usInitInfo; } ;
struct TYPE_30__ {int ucEncoderSel; int ucLinkSel; int ucTransmitterSel; int fCoherentMode; int fDPConnector; int fDualLinkConnector; } ;
struct TYPE_29__ {int ucLaneSel; int ucLaneSet; } ;
struct TYPE_31__ {int ucAction; TYPE_5__ acConfig; void* usPixelClock; TYPE_4__ asMode; void* usInitInfo; } ;
struct TYPE_27__ {int ucLaneSel; int ucLaneSet; } ;
struct TYPE_28__ {int ucAction; int ucConfig; void* usPixelClock; TYPE_2__ asMode; void* usInitInfo; } ;
union dig_transmitter_control {TYPE_16__ v6; TYPE_15__ v5; TYPE_12__ v4; TYPE_9__ v3; TYPE_6__ v2; TYPE_3__ v1; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct drm_encoder {scalar_t__ crtc; struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder_atom_dig {int dig_encoder; int linkb; int coherent_mode; } ;
struct amdgpu_encoder {int encoder_id; int pixel_clock; int devices; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct TYPE_25__ {int atom_context; } ;
struct TYPE_21__ {int dp_extclk; } ;
struct amdgpu_device {int flags; TYPE_17__ mode_info; TYPE_13__ clock; } ;
struct amdgpu_crtc {int pll_id; } ;
struct amdgpu_connector_atom_dig {int dp_clock; int dp_lane_count; } ;
struct TYPE_26__ {int hpd; } ;
struct amdgpu_connector {int connector_object_id; TYPE_1__ hpd; struct amdgpu_connector_atom_dig* con_priv; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
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
 int FUNC_0 (char*,int,int) ;
 int VAR_26 ;
 scalar_t__ FUNC_1 (void*) ;






 int VAR_27 ;
 void* VAR_28 ;
 int FUNC_2 (int ,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int,int*,int*) ;
 void* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,int) ;
 struct drm_connector* FUNC_7 (struct drm_encoder*) ;
 struct drm_connector* FUNC_8 (struct drm_encoder*) ;
 void* FUNC_9 (int) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (union dig_transmitter_control*,int ,int) ;
 struct amdgpu_connector* FUNC_12 (struct drm_connector*) ;
 struct amdgpu_crtc* FUNC_13 (scalar_t__) ;
 struct amdgpu_encoder* FUNC_14 (struct drm_encoder*) ;

void
FUNC_15(struct drm_encoder *VAR_33, int VAR_34,
           uint8_t VAR_35, uint8_t VAR_36)
{
 struct drm_device *VAR_37 = VAR_33->dev;
 struct amdgpu_device *VAR_38 = VAR_37->dev_private;
 struct amdgpu_encoder *VAR_39 = FUNC_14(VAR_33);
 struct amdgpu_encoder_atom_dig *VAR_40 = VAR_39->enc_priv;
 struct drm_connector *VAR_41;
 union dig_transmitter_control VAR_42;
 int VAR_43 = 0;
 uint8_t VAR_44, VAR_45;
 bool VAR_46 = 0;
 int VAR_47 = 0;
 int VAR_48 = 0;
 int VAR_49 = 0;
 int VAR_50 = 0;
 int VAR_51 = 0;
 int VAR_52 = VAR_40->dig_encoder;
 int VAR_53 = VAR_0;

 if (VAR_34 == VAR_10) {
  VAR_41 = FUNC_8(VAR_33);



  VAR_52 = 0;
 } else
  VAR_41 = FUNC_7(VAR_33);

 if (VAR_41) {
  struct amdgpu_connector *VAR_54 = FUNC_12(VAR_41);
  struct amdgpu_connector_atom_dig *VAR_55 =
   VAR_54->con_priv;

  VAR_53 = VAR_54->hpd.hpd;
  VAR_48 = VAR_55->dp_clock;
  VAR_49 = VAR_55->dp_lane_count;
  VAR_50 =
   (VAR_54->connector_object_id & VAR_30) >> VAR_31;
 }

 if (VAR_33->crtc) {
  struct amdgpu_crtc *VAR_56 = FUNC_13(VAR_33->crtc);
  VAR_47 = VAR_56->pll_id;
 }


 if (VAR_52 == -1)
  return;

 if (FUNC_1(FUNC_5(VAR_33)))
  VAR_46 = 1;

 FUNC_11(&VAR_42, 0, sizeof(VAR_42));

 switch (VAR_39->encoder_id) {
 case 133:
  VAR_43 = FUNC_2(VAR_25, VAR_26);
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_43 = FUNC_2(VAR_25, VAR_32);
  break;
 case 132:
  VAR_43 = FUNC_2(VAR_25, VAR_29);
  break;
 }

 if (!FUNC_4(VAR_38->mode_info.atom_context, VAR_43, &VAR_44, &VAR_45))
  return;

 switch (VAR_44) {
 case 1:
  switch (VAR_45) {
  case 1:
   VAR_42.v1.ucAction = VAR_34;
   if (VAR_34 == VAR_10) {
    VAR_42.v1.usInitInfo = FUNC_9(VAR_50);
   } else if (VAR_34 == VAR_11) {
    VAR_42.v1.asMode.ucLaneSel = VAR_35;
    VAR_42.v1.asMode.ucLaneSet = VAR_36;
   } else {
    if (VAR_46)
     VAR_42.v1.usPixelClock = FUNC_9(VAR_48 / 10);
    else if (FUNC_6(VAR_33, VAR_39->pixel_clock))
     VAR_42.v1.usPixelClock = FUNC_9((VAR_39->pixel_clock / 2) / 10);
    else
     VAR_42.v1.usPixelClock = FUNC_9(VAR_39->pixel_clock / 10);
   }

   VAR_42.v1.ucConfig = VAR_13;

   if (VAR_52)
    VAR_42.v1.ucConfig |= VAR_16;
   else
    VAR_42.v1.ucConfig |= VAR_15;

   if ((VAR_38->flags & VAR_1) &&
       (VAR_39->encoder_id == 131)) {
    if (VAR_46 ||
        !FUNC_6(VAR_33, VAR_39->pixel_clock)) {
     if (VAR_51 & 0x1)
      VAR_42.v1.ucConfig |= VAR_17;
     else if (VAR_51 & 0x2)
      VAR_42.v1.ucConfig |= VAR_20;
     else if (VAR_51 & 0x4)
      VAR_42.v1.ucConfig |= VAR_21;
     else if (VAR_51 & 0x8)
      VAR_42.v1.ucConfig |= VAR_19;
    } else {
     if (VAR_51 & 0x3)
      VAR_42.v1.ucConfig |= VAR_18;
     else if (VAR_51 & 0xc)
      VAR_42.v1.ucConfig |= VAR_22;
    }
   }

   if (VAR_40->linkb)
    VAR_42.v1.ucConfig |= VAR_24;
   else
    VAR_42.v1.ucConfig |= VAR_23;

   if (VAR_46)
    VAR_42.v1.ucConfig |= VAR_14;
   else if (VAR_39->devices & (VAR_2)) {
    if (VAR_40->coherent_mode)
     VAR_42.v1.ucConfig |= VAR_14;
    if (FUNC_6(VAR_33, VAR_39->pixel_clock))
     VAR_42.v1.ucConfig |= VAR_12;
   }
   break;
  case 2:
   VAR_42.v2.ucAction = VAR_34;
   if (VAR_34 == VAR_10) {
    VAR_42.v2.usInitInfo = FUNC_9(VAR_50);
   } else if (VAR_34 == VAR_11) {
    VAR_42.v2.asMode.ucLaneSel = VAR_35;
    VAR_42.v2.asMode.ucLaneSet = VAR_36;
   } else {
    if (VAR_46)
     VAR_42.v2.usPixelClock = FUNC_9(VAR_48 / 10);
    else if (FUNC_6(VAR_33, VAR_39->pixel_clock))
     VAR_42.v2.usPixelClock = FUNC_9((VAR_39->pixel_clock / 2) / 10);
    else
     VAR_42.v2.usPixelClock = FUNC_9(VAR_39->pixel_clock / 10);
   }

   VAR_42.v2.acConfig.ucEncoderSel = VAR_52;
   if (VAR_40->linkb)
    VAR_42.v2.acConfig.ucLinkSel = 1;

   switch (VAR_39->encoder_id) {
   case 131:
    VAR_42.v2.acConfig.ucTransmitterSel = 0;
    break;
   case 130:
    VAR_42.v2.acConfig.ucTransmitterSel = 1;
    break;
   case 129:
    VAR_42.v2.acConfig.ucTransmitterSel = 2;
    break;
   }

   if (VAR_46) {
    VAR_42.v2.acConfig.fCoherentMode = 1;
    VAR_42.v2.acConfig.fDPConnector = 1;
   } else if (VAR_39->devices & (VAR_2)) {
    if (VAR_40->coherent_mode)
     VAR_42.v2.acConfig.fCoherentMode = 1;
    if (FUNC_6(VAR_33, VAR_39->pixel_clock))
     VAR_42.v2.acConfig.fDualLinkConnector = 1;
   }
   break;
  case 3:
   VAR_42.v3.ucAction = VAR_34;
   if (VAR_34 == VAR_10) {
    VAR_42.v3.usInitInfo = FUNC_9(VAR_50);
   } else if (VAR_34 == VAR_11) {
    VAR_42.v3.asMode.ucLaneSel = VAR_35;
    VAR_42.v3.asMode.ucLaneSet = VAR_36;
   } else {
    if (VAR_46)
     VAR_42.v3.usPixelClock = FUNC_9(VAR_48 / 10);
    else if (FUNC_6(VAR_33, VAR_39->pixel_clock))
     VAR_42.v3.usPixelClock = FUNC_9((VAR_39->pixel_clock / 2) / 10);
    else
     VAR_42.v3.usPixelClock = FUNC_9(VAR_39->pixel_clock / 10);
   }

   if (VAR_46)
    VAR_42.v3.ucLaneNum = VAR_49;
   else if (FUNC_6(VAR_33, VAR_39->pixel_clock))
    VAR_42.v3.ucLaneNum = 8;
   else
    VAR_42.v3.ucLaneNum = 4;

   if (VAR_40->linkb)
    VAR_42.v3.acConfig.ucLinkSel = 1;
   if (VAR_52 & 1)
    VAR_42.v3.acConfig.ucEncoderSel = 1;






   if (VAR_46 && VAR_38->clock.dp_extclk)
    VAR_42.v3.acConfig.ucRefClkSource = 2;
   else
    VAR_42.v3.acConfig.ucRefClkSource = VAR_47;

   switch (VAR_39->encoder_id) {
   case 131:
    VAR_42.v3.acConfig.ucTransmitterSel = 0;
    break;
   case 130:
    VAR_42.v3.acConfig.ucTransmitterSel = 1;
    break;
   case 129:
    VAR_42.v3.acConfig.ucTransmitterSel = 2;
    break;
   }

   if (VAR_46)
    VAR_42.v3.acConfig.fCoherentMode = 1;
   else if (VAR_39->devices & (VAR_2)) {
    if (VAR_40->coherent_mode)
     VAR_42.v3.acConfig.fCoherentMode = 1;
    if (FUNC_6(VAR_33, VAR_39->pixel_clock))
     VAR_42.v3.acConfig.fDualLinkConnector = 1;
   }
   break;
  case 4:
   VAR_42.v4.ucAction = VAR_34;
   if (VAR_34 == VAR_10) {
    VAR_42.v4.usInitInfo = FUNC_9(VAR_50);
   } else if (VAR_34 == VAR_11) {
    VAR_42.v4.asMode.ucLaneSel = VAR_35;
    VAR_42.v4.asMode.ucLaneSet = VAR_36;
   } else {
    if (VAR_46)
     VAR_42.v4.usPixelClock = FUNC_9(VAR_48 / 10);
    else if (FUNC_6(VAR_33, VAR_39->pixel_clock))
     VAR_42.v4.usPixelClock = FUNC_9((VAR_39->pixel_clock / 2) / 10);
    else
     VAR_42.v4.usPixelClock = FUNC_9(VAR_39->pixel_clock / 10);
   }

   if (VAR_46)
    VAR_42.v4.ucLaneNum = VAR_49;
   else if (FUNC_6(VAR_33, VAR_39->pixel_clock))
    VAR_42.v4.ucLaneNum = 8;
   else
    VAR_42.v4.ucLaneNum = 4;

   if (VAR_40->linkb)
    VAR_42.v4.acConfig.ucLinkSel = 1;
   if (VAR_52 & 1)
    VAR_42.v4.acConfig.ucEncoderSel = 1;






   if (VAR_46) {
    if (VAR_38->clock.dp_extclk)
     VAR_42.v4.acConfig.ucRefClkSource = VAR_28;
    else
     VAR_42.v4.acConfig.ucRefClkSource = VAR_27;
   } else
    VAR_42.v4.acConfig.ucRefClkSource = VAR_47;

   switch (VAR_39->encoder_id) {
   case 131:
    VAR_42.v4.acConfig.ucTransmitterSel = 0;
    break;
   case 130:
    VAR_42.v4.acConfig.ucTransmitterSel = 1;
    break;
   case 129:
    VAR_42.v4.acConfig.ucTransmitterSel = 2;
    break;
   }

   if (VAR_46)
    VAR_42.v4.acConfig.fCoherentMode = 1;
   else if (VAR_39->devices & (VAR_2)) {
    if (VAR_40->coherent_mode)
     VAR_42.v4.acConfig.fCoherentMode = 1;
    if (FUNC_6(VAR_33, VAR_39->pixel_clock))
     VAR_42.v4.acConfig.fDualLinkConnector = 1;
   }
   break;
  case 5:
   VAR_42.v5.ucAction = VAR_34;
   if (VAR_46)
    VAR_42.v5.usSymClock = FUNC_9(VAR_48 / 10);
   else
    VAR_42.v5.usSymClock = FUNC_9(VAR_39->pixel_clock / 10);

   switch (VAR_39->encoder_id) {
   case 131:
    if (VAR_40->linkb)
     VAR_42.v5.ucPhyId = VAR_4;
    else
     VAR_42.v5.ucPhyId = VAR_3;
    break;
   case 130:
    if (VAR_40->linkb)
     VAR_42.v5.ucPhyId = VAR_6;
    else
     VAR_42.v5.ucPhyId = VAR_5;
    break;
   case 129:
    if (VAR_40->linkb)
     VAR_42.v5.ucPhyId = VAR_8;
    else
     VAR_42.v5.ucPhyId = VAR_7;
    break;
   case 128:
    VAR_42.v5.ucPhyId = VAR_9;
    break;
   }
   if (VAR_46)
    VAR_42.v5.ucLaneNum = VAR_49;
   else if (FUNC_6(VAR_33, VAR_39->pixel_clock))
    VAR_42.v5.ucLaneNum = 8;
   else
    VAR_42.v5.ucLaneNum = 4;
   VAR_42.v5.ucConnObjId = VAR_50;
   VAR_42.v5.ucDigMode = FUNC_5(VAR_33);

   if (VAR_46 && VAR_38->clock.dp_extclk)
    VAR_42.v5.asConfig.ucPhyClkSrcId = VAR_28;
   else
    VAR_42.v5.asConfig.ucPhyClkSrcId = VAR_47;

   if (VAR_46)
    VAR_42.v5.asConfig.ucCoherentMode = 1;
   else if (VAR_39->devices & (VAR_2)) {
    if (VAR_40->coherent_mode)
     VAR_42.v5.asConfig.ucCoherentMode = 1;
   }
   if (VAR_53 == VAR_0)
    VAR_42.v5.asConfig.ucHPDSel = 0;
   else
    VAR_42.v5.asConfig.ucHPDSel = VAR_53 + 1;
   VAR_42.v5.ucDigEncoderSel = 1 << VAR_52;
   VAR_42.v5.ucDPLaneSet = VAR_36;
   break;
  case 6:
   VAR_42.v6.ucAction = VAR_34;
   if (VAR_46)
    VAR_42.v6.ulSymClock = FUNC_10(VAR_48 / 10);
   else
    VAR_42.v6.ulSymClock = FUNC_10(VAR_39->pixel_clock / 10);

   switch (VAR_39->encoder_id) {
   case 131:
    if (VAR_40->linkb)
     VAR_42.v6.ucPhyId = VAR_4;
    else
     VAR_42.v6.ucPhyId = VAR_3;
    break;
   case 130:
    if (VAR_40->linkb)
     VAR_42.v6.ucPhyId = VAR_6;
    else
     VAR_42.v6.ucPhyId = VAR_5;
    break;
   case 129:
    if (VAR_40->linkb)
     VAR_42.v6.ucPhyId = VAR_8;
    else
     VAR_42.v6.ucPhyId = VAR_7;
    break;
   case 128:
    VAR_42.v6.ucPhyId = VAR_9;
    break;
   }
   if (VAR_46)
    VAR_42.v6.ucLaneNum = VAR_49;
   else if (FUNC_6(VAR_33, VAR_39->pixel_clock))
    VAR_42.v6.ucLaneNum = 8;
   else
    VAR_42.v6.ucLaneNum = 4;
   VAR_42.v6.ucConnObjId = VAR_50;
   if (VAR_34 == VAR_11)
    VAR_42.v6.ucDPLaneSet = VAR_36;
   else
    VAR_42.v6.ucDigMode = FUNC_5(VAR_33);

   if (VAR_53 == VAR_0)
    VAR_42.v6.ucHPDSel = 0;
   else
    VAR_42.v6.ucHPDSel = VAR_53 + 1;
   VAR_42.v6.ucDigEncoderSel = 1 << VAR_52;
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_44, VAR_45);
   break;
  }
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_44, VAR_45);
  break;
 }

 FUNC_3(VAR_38->mode_info.atom_context, VAR_43, (uint32_t *)&VAR_42);
}
