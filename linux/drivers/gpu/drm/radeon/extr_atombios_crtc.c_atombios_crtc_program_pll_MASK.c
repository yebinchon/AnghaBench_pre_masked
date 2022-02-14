
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


struct TYPE_12__ {int ucRefDiv; int ucPostDiv; int ucTransmitterID; int ucEncoderMode; int ucPpll; int ucMiscInfo; void* ulFbDivDecFrac; void* usFbDiv; void* ulDispEngClkFreq; } ;
struct TYPE_11__ {int ucCRTC; int ucRefDiv; int ucPostDiv; int ucTransmitterID; int ucEncoderMode; int ucPpll; int ucMiscInfo; void* ulFbDivDecFrac; void* usFbDiv; void* usPixelClock; } ;
struct TYPE_10__ {int ucFracFbDiv; int ucPostDiv; int ucPpll; int ucTransmitterId; int ucEncoderMode; int ucMiscInfo; void* usFbDiv; void* usRefDiv; void* usPixelClock; } ;
struct TYPE_9__ {int ucFracFbDiv; int ucPostDiv; int ucPpll; int ucCRTC; int ucRefDivSrc; void* usFbDiv; void* usRefDiv; void* usPixelClock; } ;
struct TYPE_8__ {int ucFracFbDiv; int ucPostDiv; int ucPpll; int ucCRTC; int ucRefDivSrc; void* usFbDiv; void* usRefDiv; void* usPixelClock; } ;
union set_pixel_clock {TYPE_6__ v6; TYPE_5__ v5; TYPE_4__ v3; TYPE_3__ v2; TYPE_2__ v1; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct radeon_atom_ss {int type; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
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
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (union set_pixel_clock*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_18,
          u32 VAR_19,
          int VAR_20,
          u32 VAR_21,
          u32 VAR_22,
          u32 VAR_23,
          u32 VAR_24,
          u32 VAR_25,
          u32 VAR_26,
          u32 VAR_27,
          int VAR_28,
          bool VAR_29,
          struct radeon_atom_ss *VAR_30)
{
 struct drm_device *VAR_31 = VAR_18->dev;
 struct radeon_device *VAR_32 = VAR_31->dev_private;
 u8 VAR_33, VAR_34;
 int VAR_35 = FUNC_1(VAR_4, VAR_17);
 union set_pixel_clock VAR_36;

 FUNC_6(&VAR_36, 0, sizeof(VAR_36));

 if (!FUNC_3(VAR_32->mode_info.atom_context, VAR_35, &VAR_33,
       &VAR_34))
  return;

 switch (VAR_33) {
 case 1:
  switch (VAR_34) {
  case 1:
   if (VAR_23 == VAR_1)
    return;
   VAR_36.v1.usPixelClock = FUNC_4(VAR_23 / 10);
   VAR_36.v1.usRefDiv = FUNC_4(VAR_24);
   VAR_36.v1.usFbDiv = FUNC_4(VAR_25);
   VAR_36.v1.ucFracFbDiv = VAR_26;
   VAR_36.v1.ucPostDiv = VAR_27;
   VAR_36.v1.ucPpll = VAR_20;
   VAR_36.v1.ucCRTC = VAR_19;
   VAR_36.v1.ucRefDivSrc = 1;
   break;
  case 2:
   VAR_36.v2.usPixelClock = FUNC_4(VAR_23 / 10);
   VAR_36.v2.usRefDiv = FUNC_4(VAR_24);
   VAR_36.v2.usFbDiv = FUNC_4(VAR_25);
   VAR_36.v2.ucFracFbDiv = VAR_26;
   VAR_36.v2.ucPostDiv = VAR_27;
   VAR_36.v2.ucPpll = VAR_20;
   VAR_36.v2.ucCRTC = VAR_19;
   VAR_36.v2.ucRefDivSrc = 1;
   break;
  case 3:
   VAR_36.v3.usPixelClock = FUNC_4(VAR_23 / 10);
   VAR_36.v3.usRefDiv = FUNC_4(VAR_24);
   VAR_36.v3.usFbDiv = FUNC_4(VAR_25);
   VAR_36.v3.ucFracFbDiv = VAR_26;
   VAR_36.v3.ucPostDiv = VAR_27;
   VAR_36.v3.ucPpll = VAR_20;
   if (VAR_19 == VAR_0)
    VAR_36.v3.ucMiscInfo = VAR_6;
   else
    VAR_36.v3.ucMiscInfo = VAR_5;
   if (VAR_29 && (VAR_30->type & VAR_3))
    VAR_36.v3.ucMiscInfo |= VAR_7;
   VAR_36.v3.ucTransmitterId = VAR_22;
   VAR_36.v3.ucEncoderMode = VAR_21;
   break;
  case 5:
   VAR_36.v5.ucCRTC = VAR_19;
   VAR_36.v5.usPixelClock = FUNC_4(VAR_23 / 10);
   VAR_36.v5.ucRefDiv = VAR_24;
   VAR_36.v5.usFbDiv = FUNC_4(VAR_25);
   VAR_36.v5.ulFbDivDecFrac = FUNC_5(VAR_26 * 100000);
   VAR_36.v5.ucPostDiv = VAR_27;
   VAR_36.v5.ucMiscInfo = 0;
   if (VAR_29 && (VAR_30->type & VAR_3))
    VAR_36.v5.ucMiscInfo |= VAR_11;
   if (VAR_21 == VAR_2) {
    switch (VAR_28) {
    case 8:
    default:
     VAR_36.v5.ucMiscInfo |= VAR_8;
     break;
    case 10:

     VAR_36.v5.ucMiscInfo |= VAR_10;
     break;
    case 12:

     VAR_36.v5.ucMiscInfo |= VAR_9;
     break;
    }
   }
   VAR_36.v5.ucTransmitterID = VAR_22;
   VAR_36.v5.ucEncoderMode = VAR_21;
   VAR_36.v5.ucPpll = VAR_20;
   break;
  case 6:
   VAR_36.v6.ulDispEngClkFreq = FUNC_5(VAR_19 << 24 | VAR_23 / 10);
   VAR_36.v6.ucRefDiv = VAR_24;
   VAR_36.v6.usFbDiv = FUNC_4(VAR_25);
   VAR_36.v6.ulFbDivDecFrac = FUNC_5(VAR_26 * 100000);
   VAR_36.v6.ucPostDiv = VAR_27;
   VAR_36.v6.ucMiscInfo = 0;
   if (VAR_29 && (VAR_30->type & VAR_3))
    VAR_36.v6.ucMiscInfo |= VAR_16;
   if (VAR_21 == VAR_2) {
    switch (VAR_28) {
    case 8:
    default:
     VAR_36.v6.ucMiscInfo |= VAR_12;
     break;
    case 10:
     VAR_36.v6.ucMiscInfo |= VAR_13;
     break;
    case 12:
     VAR_36.v6.ucMiscInfo |= VAR_14;
     break;
    case 16:
     VAR_36.v6.ucMiscInfo |= VAR_15;
     break;
    }
   }
   VAR_36.v6.ucTransmitterID = VAR_22;
   VAR_36.v6.ucEncoderMode = VAR_21;
   VAR_36.v6.ucPpll = VAR_20;
   break;
  default:
   FUNC_0("Unknown table version %d %d\n", VAR_33, VAR_34);
   return;
  }
  break;
 default:
  FUNC_0("Unknown table version %d %d\n", VAR_33, VAR_34);
  return;
 }

 FUNC_2(VAR_32->mode_info.atom_context, VAR_35, (uint32_t *)&VAR_36);
}
