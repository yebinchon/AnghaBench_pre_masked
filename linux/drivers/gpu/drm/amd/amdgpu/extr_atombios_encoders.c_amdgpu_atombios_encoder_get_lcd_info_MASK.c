
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int usAccess; } ;
struct TYPE_11__ {int usImageVSize; int usImageHSize; TYPE_2__ susModeMiscInfo; int usVSyncWidth; int usVSyncOffset; int usVBlanking_Time; int usHSyncWidth; int usHSyncOffset; int usHBlanking_Time; int usVActive; int usHActive; int usPixClk; } ;
struct TYPE_12__ {int usModePatchTableOffset; int ucSS_Id; TYPE_3__ sLCDTiming; int ucLVDS_Misc; int usOffDelayInMs; } ;
union lvds_info {TYPE_4__ info; } ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int u8 ;
struct edid {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_mode_info {int bios_hardcoded_edid_size; struct edid* bios_hardcoded_edid; TYPE_8__* atom_context; } ;
struct TYPE_15__ {int clock; int hdisplay; int vdisplay; int htotal; int hsync_start; int hsync_end; int vtotal; int vsync_start; int vsync_end; int width_mm; int height_mm; int flags; } ;
struct amdgpu_encoder_atom_dig {int panel_pwr_delay; int linkb; TYPE_7__ native_mode; int lcd_ss_id; int lcd_misc; } ;
struct TYPE_9__ {struct drm_device* dev; } ;
struct amdgpu_encoder {int encoder_enum; TYPE_7__ native_mode; TYPE_1__ base; } ;
struct amdgpu_device {struct amdgpu_mode_info mode_info; } ;
struct TYPE_16__ {int bios; } ;
struct TYPE_14__ {scalar_t__ ucFakeEDIDLength; int * ucFakeEDIDString; } ;
struct TYPE_13__ {int usHSize; int usVSize; } ;
typedef int ATOM_PATCH_RECORD_MODE ;
typedef TYPE_5__ ATOM_PANEL_RESOLUTION_PATCH_RECORD ;
typedef int ATOM_LCD_RTS_RECORD ;
typedef int ATOM_LCD_MODE_CONTROL_CAP ;
typedef TYPE_6__ ATOM_FAKE_EDID_PATCH_RECORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ,int ) ;





 int VAR_17 ;
 scalar_t__ FUNC_2 (TYPE_8__*,int,int *,int*,int*,int*) ;
 int FUNC_3 (struct edid*) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 int FUNC_5 (struct edid*) ;
 struct edid* FUNC_6 (int,int ) ;
 struct amdgpu_encoder_atom_dig* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int*,int*,scalar_t__) ;

struct amdgpu_encoder_atom_dig *
FUNC_11(struct amdgpu_encoder *VAR_18)
{
 struct drm_device *VAR_19 = VAR_18->base.dev;
 struct amdgpu_device *VAR_20 = VAR_19->dev_private;
 struct amdgpu_mode_info *VAR_21 = &VAR_20->mode_info;
 int VAR_22 = FUNC_1(VAR_7, VAR_17);
 uint16_t VAR_23, VAR_24;
 union lvds_info *VAR_25;
 uint8_t VAR_26, VAR_27;
 struct amdgpu_encoder_atom_dig *VAR_28 = ((void*)0);
 int VAR_29 = (VAR_18->encoder_enum & VAR_14) >> VAR_15;

 if (FUNC_2(VAR_21->atom_context, VAR_22, ((void*)0),
       &VAR_26, &VAR_27, &VAR_23)) {
  VAR_25 =
   (union lvds_info *)(VAR_21->atom_context->bios + VAR_23);
  VAR_28 =
      FUNC_7(sizeof(struct amdgpu_encoder_atom_dig), VAR_16);

  if (!VAR_28)
   return ((void*)0);

  VAR_28->native_mode.clock =
      FUNC_8(VAR_25->info.sLCDTiming.usPixClk) * 10;
  VAR_28->native_mode.hdisplay =
      FUNC_8(VAR_25->info.sLCDTiming.usHActive);
  VAR_28->native_mode.vdisplay =
      FUNC_8(VAR_25->info.sLCDTiming.usVActive);
  VAR_28->native_mode.htotal = VAR_28->native_mode.hdisplay +
   FUNC_8(VAR_25->info.sLCDTiming.usHBlanking_Time);
  VAR_28->native_mode.hsync_start = VAR_28->native_mode.hdisplay +
   FUNC_8(VAR_25->info.sLCDTiming.usHSyncOffset);
  VAR_28->native_mode.hsync_end = VAR_28->native_mode.hsync_start +
   FUNC_8(VAR_25->info.sLCDTiming.usHSyncWidth);
  VAR_28->native_mode.vtotal = VAR_28->native_mode.vdisplay +
   FUNC_8(VAR_25->info.sLCDTiming.usVBlanking_Time);
  VAR_28->native_mode.vsync_start = VAR_28->native_mode.vdisplay +
   FUNC_8(VAR_25->info.sLCDTiming.usVSyncOffset);
  VAR_28->native_mode.vsync_end = VAR_28->native_mode.vsync_start +
   FUNC_8(VAR_25->info.sLCDTiming.usVSyncWidth);
  VAR_28->panel_pwr_delay =
      FUNC_8(VAR_25->info.usOffDelayInMs);
  VAR_28->lcd_misc = VAR_25->info.ucLVDS_Misc;

  VAR_24 = FUNC_8(VAR_25->info.sLCDTiming.susModeMiscInfo.usAccess);
  if (VAR_24 & VAR_5)
   VAR_28->native_mode.flags |= VAR_12;
  if (VAR_24 & VAR_2)
   VAR_28->native_mode.flags |= VAR_11;
  if (VAR_24 & VAR_0)
   VAR_28->native_mode.flags |= VAR_8;
  if (VAR_24 & VAR_3)
   VAR_28->native_mode.flags |= VAR_10;
  if (VAR_24 & VAR_1)
   VAR_28->native_mode.flags |= VAR_9;

  VAR_28->native_mode.width_mm = FUNC_8(VAR_25->info.sLCDTiming.usImageHSize);
  VAR_28->native_mode.height_mm = FUNC_8(VAR_25->info.sLCDTiming.usImageVSize);


  FUNC_4(&VAR_28->native_mode, VAR_6);

  VAR_28->lcd_ss_id = VAR_25->info.ucSS_Id;

  VAR_18->native_mode = VAR_28->native_mode;

  if (VAR_29 == 2)
   VAR_28->linkb = 1;
  else
   VAR_28->linkb = 0;


  if (FUNC_8(VAR_25->info.usModePatchTableOffset)) {
   ATOM_FAKE_EDID_PATCH_RECORD *VAR_30;
   ATOM_PANEL_RESOLUTION_PATCH_RECORD *VAR_31;
   bool VAR_32 = 0;
   u8 *VAR_33;

   if ((VAR_26 == 1) && (VAR_27 < 2))

    VAR_33 = (u8 *)(VAR_21->atom_context->bios +
      FUNC_8(VAR_25->info.usModePatchTableOffset));
   else

    VAR_33 = (u8 *)(VAR_21->atom_context->bios +
      VAR_23 +
      FUNC_8(VAR_25->info.usModePatchTableOffset));
   while (*VAR_33 != VAR_4) {
    switch (*VAR_33) {
    case 130:
     VAR_33 += sizeof(ATOM_PATCH_RECORD_MODE);
     break;
    case 128:
     VAR_33 += sizeof(ATOM_LCD_RTS_RECORD);
     break;
    case 132:
     VAR_33 += sizeof(ATOM_LCD_MODE_CONTROL_CAP);
     break;
    case 131:
     VAR_30 = (ATOM_FAKE_EDID_PATCH_RECORD *)VAR_33;
     if (VAR_30->ucFakeEDIDLength) {
      struct edid *VAR_34;
      int VAR_35 =
       FUNC_9((int)VAR_13, (int)VAR_30->ucFakeEDIDLength);
      VAR_34 = FUNC_6(VAR_35, VAR_16);
      if (VAR_34) {
       FUNC_10((u8 *)VAR_34, (u8 *)&VAR_30->ucFakeEDIDString[0],
              VAR_30->ucFakeEDIDLength);

       if (FUNC_3(VAR_34)) {
        VAR_20->mode_info.bios_hardcoded_edid = VAR_34;
        VAR_20->mode_info.bios_hardcoded_edid_size = VAR_35;
       } else
        FUNC_5(VAR_34);
      }
     }
     VAR_33 += VAR_30->ucFakeEDIDLength ?
      VAR_30->ucFakeEDIDLength + 2 :
      sizeof(ATOM_FAKE_EDID_PATCH_RECORD);
     break;
    case 129:
     VAR_31 = (ATOM_PANEL_RESOLUTION_PATCH_RECORD *)VAR_33;
     VAR_28->native_mode.width_mm = VAR_31->usHSize;
     VAR_28->native_mode.height_mm = VAR_31->usVSize;
     VAR_33 += sizeof(ATOM_PANEL_RESOLUTION_PATCH_RECORD);
     break;
    default:
     FUNC_0("Bad LCD record %d\n", *VAR_33);
     VAR_32 = 1;
     break;
    }
    if (VAR_32)
     break;
   }
  }
 }
 return VAR_28;
}
