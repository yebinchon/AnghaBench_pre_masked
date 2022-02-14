
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_encoder {scalar_t__ crtc; struct drm_device* dev; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int name; } ;
struct amdgpu_encoder_atom_dig {TYPE_1__* afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {int bpc; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;
struct TYPE_2__ {int pin; scalar_t__ offset; int enabled; } ;


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
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,scalar_t__) ;
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
 int FUNC_2 (int,int ,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 struct drm_connector* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,int ) ;
 int FUNC_8 (struct drm_encoder*,int *,int) ;
 int FUNC_9 (struct amdgpu_device*,int ,int) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct drm_encoder*,int ) ;
 int FUNC_12 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_13 (struct drm_encoder*) ;
 int FUNC_14 (struct drm_encoder*) ;
 scalar_t__ FUNC_15 (struct hdmi_avi_infoframe*,struct drm_connector*,struct drm_display_mode*) ;
 scalar_t__ FUNC_16 (struct hdmi_avi_infoframe*,int *,int) ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 struct amdgpu_crtc* FUNC_17 (scalar_t__) ;
 struct amdgpu_encoder* FUNC_18 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_19(struct drm_encoder *VAR_58,
      struct drm_display_mode *VAR_59)
{
 struct drm_device *VAR_60 = VAR_58->dev;
 struct amdgpu_device *VAR_61 = VAR_60->dev_private;
 struct amdgpu_encoder *VAR_62 = FUNC_18(VAR_58);
 struct amdgpu_encoder_atom_dig *VAR_63 = VAR_62->enc_priv;
 struct drm_connector *VAR_64 = FUNC_5(VAR_58);
 u8 VAR_65[VAR_37 + VAR_26];
 struct hdmi_avi_infoframe VAR_66;
 ssize_t VAR_67;
 u32 VAR_68;
 int VAR_69 = 8;

 if (!VAR_63 || !VAR_63->afmt)
  return;


 if (!VAR_63->afmt->enabled)
  return;


 if (VAR_58->crtc) {
  struct amdgpu_crtc *VAR_70 = FUNC_17(VAR_58->crtc);
  VAR_69 = VAR_70->bpc;
 }


 VAR_63->afmt->pin = FUNC_10(VAR_61);
 FUNC_9(VAR_61, VAR_63->afmt->pin, 0);

 FUNC_11(VAR_58, VAR_59->clock);

 VAR_68 = FUNC_3(VAR_57 + VAR_63->afmt->offset);
 VAR_68 = FUNC_2(VAR_68, VAR_39, VAR_38, 1);
 FUNC_4(VAR_57 + VAR_63->afmt->offset, VAR_68);

 FUNC_4(VAR_43 + VAR_63->afmt->offset, 0x1000);

 VAR_68 = FUNC_3(VAR_53 + VAR_63->afmt->offset);
 switch (VAR_69) {
 case 0:
 case 6:
 case 8:
 case 16:
 default:
  VAR_68 = FUNC_2(VAR_68, VAR_30, VAR_32, 0);
  VAR_68 = FUNC_2(VAR_68, VAR_30, VAR_31, 0);
  FUNC_0("%s: Disabling hdmi deep color for %d bpc.\n",
     VAR_64->name, VAR_69);
  break;
 case 10:
  VAR_68 = FUNC_2(VAR_68, VAR_30, VAR_32, 1);
  VAR_68 = FUNC_2(VAR_68, VAR_30, VAR_31, 1);
  FUNC_0("%s: Enabling hdmi deep color 30 for 10 bpc.\n",
     VAR_64->name);
  break;
 case 12:
  VAR_68 = FUNC_2(VAR_68, VAR_30, VAR_32, 1);
  VAR_68 = FUNC_2(VAR_68, VAR_30, VAR_31, 2);
  FUNC_0("%s: Enabling hdmi deep color 36 for 12 bpc.\n",
     VAR_64->name);
  break;
 }
 FUNC_4(VAR_53 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_57 + VAR_63->afmt->offset);
 VAR_68 = FUNC_2(VAR_68, VAR_39, VAR_38, 1);
 VAR_68 = FUNC_2(VAR_68, VAR_39, VAR_34, 1);
 VAR_68 = FUNC_2(VAR_68, VAR_39, VAR_33, 1);
 FUNC_4(VAR_57 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_55 + VAR_63->afmt->offset);

 VAR_68 = FUNC_2(VAR_68, VAR_35, VAR_23, 1);

 VAR_68 = FUNC_2(VAR_68, VAR_35, VAR_21, 1);
 FUNC_4(VAR_55 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_46 + VAR_63->afmt->offset);

 VAR_68 = FUNC_2(VAR_68, VAR_16, VAR_12, 1);
 FUNC_4(VAR_46 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_56 + VAR_63->afmt->offset);

 VAR_68 = FUNC_2(VAR_68, VAR_36, VAR_22, 2);
 FUNC_4(VAR_56 + VAR_63->afmt->offset, VAR_68);

 FUNC_4(VAR_54 + VAR_63->afmt->offset, 0);

 VAR_68 = FUNC_3(VAR_52 + VAR_63->afmt->offset);

 VAR_68 = FUNC_2(VAR_68, VAR_25, VAR_20, 1);

 VAR_68 = FUNC_2(VAR_68, VAR_25, VAR_24, 3);
 FUNC_4(VAR_52 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_44 + VAR_63->afmt->offset);

 VAR_68 = FUNC_2(VAR_68, VAR_13, VAR_11, 1);
 FUNC_4(VAR_44 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_51 + VAR_63->afmt->offset);
 if (VAR_69 > 8)

  VAR_68 = FUNC_2(VAR_68, VAR_18, VAR_19, 0);
 else

  VAR_68 = FUNC_2(VAR_68, VAR_18, VAR_19, 1);

 VAR_68 = FUNC_2(VAR_68, VAR_18, VAR_17, 1);
 FUNC_4(VAR_51 + VAR_63->afmt->offset, VAR_68);

 FUNC_7(VAR_58, VAR_59->clock);

 VAR_68 = FUNC_3(VAR_40 + VAR_63->afmt->offset);
 VAR_68 = FUNC_2(VAR_68, VAR_0, VAR_9, 1);
 FUNC_4(VAR_40 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_41 + VAR_63->afmt->offset);
 VAR_68 = FUNC_2(VAR_68, VAR_1, VAR_10, 2);
 FUNC_4(VAR_41 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_42 + VAR_63->afmt->offset);
 VAR_68 = FUNC_2(VAR_68, VAR_2, VAR_3, 3);
 VAR_68 = FUNC_2(VAR_68, VAR_2, VAR_4, 4);
 VAR_68 = FUNC_2(VAR_68, VAR_2, VAR_5, 5);
 VAR_68 = FUNC_2(VAR_68, VAR_2, VAR_6, 6);
 VAR_68 = FUNC_2(VAR_68, VAR_2, VAR_7, 7);
 VAR_68 = FUNC_2(VAR_68, VAR_2, VAR_8, 8);
 FUNC_4(VAR_42 + VAR_63->afmt->offset, VAR_68);

 FUNC_14(VAR_58);

 FUNC_4(VAR_45 + VAR_63->afmt->offset,
        (0xff << VAR_14));

 FUNC_6(VAR_58);
 FUNC_13(VAR_58);
 FUNC_12(VAR_58, VAR_59);

 VAR_67 = FUNC_15(&VAR_66, VAR_64, VAR_59);
 if (VAR_67 < 0) {
  FUNC_1("failed to setup AVI infoframe: %zd\n", VAR_67);
  return;
 }

 VAR_67 = FUNC_16(&VAR_66, VAR_65, sizeof(VAR_65));
 if (VAR_67 < 0) {
  FUNC_1("failed to pack AVI infoframe: %zd\n", VAR_67);
  return;
 }

 FUNC_8(VAR_58, VAR_65, sizeof(VAR_65));

 VAR_68 = FUNC_3(VAR_55 + VAR_63->afmt->offset);

 VAR_68 = FUNC_2(VAR_68, VAR_35, VAR_29, 1);

 VAR_68 = FUNC_2(VAR_68, VAR_35, VAR_27, 1);
 FUNC_4(VAR_55 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_56 + VAR_63->afmt->offset);
 VAR_68 = FUNC_2(VAR_68, VAR_36, VAR_28, 2);
 FUNC_4(VAR_56 + VAR_63->afmt->offset, VAR_68);

 VAR_68 = FUNC_3(VAR_44 + VAR_63->afmt->offset);

 VAR_68 = FUNC_2(VAR_68, VAR_13, VAR_15, 1);
 FUNC_4(VAR_44 + VAR_63->afmt->offset, VAR_68);

 FUNC_4(VAR_47 + VAR_63->afmt->offset, 0x00FFFFFF);
 FUNC_4(VAR_48 + VAR_63->afmt->offset, 0x007FFFFF);
 FUNC_4(VAR_49 + VAR_63->afmt->offset, 0x00000001);
 FUNC_4(VAR_50 + VAR_63->afmt->offset, 0x00000001);


 FUNC_9(VAR_61, VAR_63->afmt->pin, 1);
}
