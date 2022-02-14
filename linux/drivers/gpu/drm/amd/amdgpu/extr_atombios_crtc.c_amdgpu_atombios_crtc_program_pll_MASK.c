
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


struct TYPE_9__ {int ucCRTC; int ucTransmitterID; int ucEncoderMode; int ucPpll; int ucDeepColorRatio; int ucMiscInfo; void* ulPixelClock; } ;
struct TYPE_8__ {int ucRefDiv; int ucPostDiv; int ucTransmitterID; int ucEncoderMode; int ucPpll; int ucMiscInfo; void* ulFbDivDecFrac; void* usFbDiv; void* ulDispEngClkFreq; } ;
struct TYPE_14__ {int ucCRTC; int ucRefDiv; int ucPostDiv; int ucTransmitterID; int ucEncoderMode; int ucPpll; int ucMiscInfo; void* ulFbDivDecFrac; void* usFbDiv; void* usPixelClock; } ;
struct TYPE_13__ {int ucFracFbDiv; int ucPostDiv; int ucPpll; int ucTransmitterId; int ucEncoderMode; int ucMiscInfo; void* usFbDiv; void* usRefDiv; void* usPixelClock; } ;
struct TYPE_12__ {int ucFracFbDiv; int ucPostDiv; int ucPpll; int ucCRTC; int ucRefDivSrc; void* usFbDiv; void* usRefDiv; void* usPixelClock; } ;
struct TYPE_11__ {int ucFracFbDiv; int ucPostDiv; int ucPpll; int ucCRTC; int ucRefDivSrc; void* usFbDiv; void* usRefDiv; void* usPixelClock; } ;
union set_pixel_clock {TYPE_2__ v7; TYPE_1__ v6; TYPE_7__ v5; TYPE_6__ v3; TYPE_5__ v2; TYPE_4__ v1; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_10__ {int atom_context; } ;
struct amdgpu_device {TYPE_3__ mode_info; } ;
struct amdgpu_atom_ss {int type; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
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
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (union set_pixel_clock*,int ,int) ;

void FUNC_8(struct drm_crtc *VAR_25,
          u32 VAR_26,
          int VAR_27,
          u32 VAR_28,
          u32 VAR_29,
          u32 VAR_30,
          u32 VAR_31,
          u32 VAR_32,
          u32 VAR_33,
          u32 VAR_34,
          int VAR_35,
          bool VAR_36,
          struct amdgpu_atom_ss *VAR_37)
{
 struct drm_device *VAR_38 = VAR_25->dev;
 struct amdgpu_device *VAR_39 = VAR_38->dev_private;
 u8 VAR_40, VAR_41;
 int VAR_42 = FUNC_1(VAR_6, VAR_24);
 union set_pixel_clock VAR_43;

 FUNC_7(&VAR_43, 0, sizeof(VAR_43));

 if (!FUNC_3(VAR_39->mode_info.atom_context, VAR_42, &VAR_40,
       &VAR_41))
  return;

 switch (VAR_40) {
 case 1:
  switch (VAR_41) {
  case 1:
   if (VAR_30 == VAR_1)
    return;
   VAR_43.v1.usPixelClock = FUNC_4(VAR_30 / 10);
   VAR_43.v1.usRefDiv = FUNC_4(VAR_31);
   VAR_43.v1.usFbDiv = FUNC_4(VAR_32);
   VAR_43.v1.ucFracFbDiv = VAR_33;
   VAR_43.v1.ucPostDiv = VAR_34;
   VAR_43.v1.ucPpll = VAR_27;
   VAR_43.v1.ucCRTC = VAR_26;
   VAR_43.v1.ucRefDivSrc = 1;
   break;
  case 2:
   VAR_43.v2.usPixelClock = FUNC_4(VAR_30 / 10);
   VAR_43.v2.usRefDiv = FUNC_4(VAR_31);
   VAR_43.v2.usFbDiv = FUNC_4(VAR_32);
   VAR_43.v2.ucFracFbDiv = VAR_33;
   VAR_43.v2.ucPostDiv = VAR_34;
   VAR_43.v2.ucPpll = VAR_27;
   VAR_43.v2.ucCRTC = VAR_26;
   VAR_43.v2.ucRefDivSrc = 1;
   break;
  case 3:
   VAR_43.v3.usPixelClock = FUNC_4(VAR_30 / 10);
   VAR_43.v3.usRefDiv = FUNC_4(VAR_31);
   VAR_43.v3.usFbDiv = FUNC_4(VAR_32);
   VAR_43.v3.ucFracFbDiv = VAR_33;
   VAR_43.v3.ucPostDiv = VAR_34;
   VAR_43.v3.ucPpll = VAR_27;
   if (VAR_26 == VAR_0)
    VAR_43.v3.ucMiscInfo = VAR_8;
   else
    VAR_43.v3.ucMiscInfo = VAR_7;
   if (VAR_36 && (VAR_37->type & VAR_4))
    VAR_43.v3.ucMiscInfo |= VAR_9;
   VAR_43.v3.ucTransmitterId = VAR_29;
   VAR_43.v3.ucEncoderMode = VAR_28;
   break;
  case 5:
   VAR_43.v5.ucCRTC = VAR_26;
   VAR_43.v5.usPixelClock = FUNC_4(VAR_30 / 10);
   VAR_43.v5.ucRefDiv = VAR_31;
   VAR_43.v5.usFbDiv = FUNC_4(VAR_32);
   VAR_43.v5.ulFbDivDecFrac = FUNC_5(VAR_33 * 100000);
   VAR_43.v5.ucPostDiv = VAR_34;
   VAR_43.v5.ucMiscInfo = 0;
   if ((VAR_36 && (VAR_37->type & VAR_4)) &&
       (VAR_27 < VAR_5))
    VAR_43.v5.ucMiscInfo |= VAR_13;
   if (VAR_28 == VAR_3) {
    switch (VAR_35) {
    case 8:
    default:
     VAR_43.v5.ucMiscInfo |= VAR_10;
     break;
    case 10:

     VAR_43.v5.ucMiscInfo |= VAR_12;
     break;
    case 12:

     VAR_43.v5.ucMiscInfo |= VAR_11;
     break;
    }
   }
   VAR_43.v5.ucTransmitterID = VAR_29;
   VAR_43.v5.ucEncoderMode = VAR_28;
   VAR_43.v5.ucPpll = VAR_27;
   break;
  case 6:
   VAR_43.v6.ulDispEngClkFreq = FUNC_5(VAR_26 << 24 | VAR_30 / 10);
   VAR_43.v6.ucRefDiv = VAR_31;
   VAR_43.v6.usFbDiv = FUNC_4(VAR_32);
   VAR_43.v6.ulFbDivDecFrac = FUNC_5(VAR_33 * 100000);
   VAR_43.v6.ucPostDiv = VAR_34;
   VAR_43.v6.ucMiscInfo = 0;
   if ((VAR_36 && (VAR_37->type & VAR_4)) &&
       (VAR_27 < VAR_5) &&
       !FUNC_6(VAR_28, VAR_27))
    VAR_43.v6.ucMiscInfo |= VAR_18;
   if (VAR_28 == VAR_3) {
    switch (VAR_35) {
    case 8:
    default:
     VAR_43.v6.ucMiscInfo |= VAR_14;
     break;
    case 10:
     VAR_43.v6.ucMiscInfo |= VAR_15;
     break;
    case 12:
     VAR_43.v6.ucMiscInfo |= VAR_16;
     break;
    case 16:
     VAR_43.v6.ucMiscInfo |= VAR_17;
     break;
    }
   }
   VAR_43.v6.ucTransmitterID = VAR_29;
   VAR_43.v6.ucEncoderMode = VAR_28;
   VAR_43.v6.ucPpll = VAR_27;
   break;
  case 7:
   VAR_43.v7.ulPixelClock = FUNC_5(VAR_30 * 10);
   VAR_43.v7.ucMiscInfo = 0;
   if ((VAR_28 == VAR_2) &&
       (VAR_30 > 165000))
    VAR_43.v7.ucMiscInfo |= VAR_23;
   VAR_43.v7.ucCRTC = VAR_26;
   if (VAR_28 == VAR_3) {
    switch (VAR_35) {
    case 8:
    default:
     VAR_43.v7.ucDeepColorRatio = VAR_22;
     break;
    case 10:
     VAR_43.v7.ucDeepColorRatio = VAR_21;
     break;
    case 12:
     VAR_43.v7.ucDeepColorRatio = VAR_20;
     break;
    case 16:
     VAR_43.v7.ucDeepColorRatio = VAR_19;
     break;
    }
   }
   VAR_43.v7.ucTransmitterID = VAR_29;
   VAR_43.v7.ucEncoderMode = VAR_28;
   VAR_43.v7.ucPpll = VAR_27;
   break;
  default:
   FUNC_0("Unknown table version %d %d\n", VAR_40, VAR_41);
   return;
  }
  break;
 default:
  FUNC_0("Unknown table version %d %d\n", VAR_40, VAR_41);
  return;
 }

 FUNC_2(VAR_39->mode_info.atom_context, VAR_42, (uint32_t *)&VAR_43);
}
