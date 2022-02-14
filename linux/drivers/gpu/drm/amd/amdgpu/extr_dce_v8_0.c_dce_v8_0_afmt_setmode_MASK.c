
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
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
struct TYPE_2__ {int offset; int pin; int enabled; } ;


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
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,scalar_t__) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int ) ;
 struct drm_connector* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*) ;
 int FUNC_8 (struct drm_encoder*,int ) ;
 int FUNC_9 (struct drm_encoder*,int *,int) ;
 int FUNC_10 (struct amdgpu_device*,int ,int) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct drm_encoder*,int ) ;
 int FUNC_13 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_14 (struct drm_encoder*) ;
 int FUNC_15 (struct drm_encoder*) ;
 scalar_t__ FUNC_16 (struct hdmi_avi_infoframe*,struct drm_connector*,struct drm_display_mode*) ;
 scalar_t__ FUNC_17 (struct hdmi_avi_infoframe*,int *,int) ;
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
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 struct amdgpu_crtc* FUNC_18 (scalar_t__) ;
 struct amdgpu_encoder* FUNC_19 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_20(struct drm_encoder *VAR_49,
      struct drm_display_mode *VAR_50)
{
 struct drm_device *VAR_51 = VAR_49->dev;
 struct amdgpu_device *VAR_52 = VAR_51->dev_private;
 struct amdgpu_encoder *VAR_53 = FUNC_19(VAR_49);
 struct amdgpu_encoder_atom_dig *VAR_54 = VAR_53->enc_priv;
 struct drm_connector *VAR_55 = FUNC_6(VAR_49);
 u8 VAR_56[VAR_27 + VAR_16];
 struct hdmi_avi_infoframe VAR_57;
 uint32_t VAR_58, VAR_59;
 ssize_t VAR_60;
 int VAR_61 = 8;

 if (!VAR_54 || !VAR_54->afmt)
  return;


 if (!VAR_54->afmt->enabled)
  return;

 VAR_58 = VAR_54->afmt->offset;


 if (VAR_49->crtc) {
  struct amdgpu_crtc *VAR_62 = FUNC_18(VAR_49->crtc);
  VAR_61 = VAR_62->bpc;
 }


 VAR_54->afmt->pin = FUNC_11(VAR_52);
 FUNC_10(VAR_52, VAR_54->afmt->pin, 0);

 FUNC_12(VAR_49, VAR_50->clock);

 FUNC_3(VAR_48 + VAR_58,
        VAR_30);

 FUNC_3(VAR_34 + VAR_58, 0x1000);

 VAR_59 = FUNC_2(VAR_44 + VAR_58);
 VAR_59 &= ~VAR_19;
 VAR_59 &= ~VAR_17;

 switch (VAR_61) {
 case 0:
 case 6:
 case 8:
 case 16:
 default:
  FUNC_0("%s: Disabling hdmi deep color for %d bpc.\n",
     VAR_55->name, VAR_61);
  break;
 case 10:
  VAR_59 |= VAR_19;
  VAR_59 |= 1 << VAR_18;
  FUNC_0("%s: Enabling hdmi deep color 30 for 10 bpc.\n",
     VAR_55->name);
  break;
 case 12:
  VAR_59 |= VAR_19;
  VAR_59 |= 2 << VAR_18;
  FUNC_0("%s: Enabling hdmi deep color 36 for 12 bpc.\n",
     VAR_55->name);
  break;
 }

 FUNC_3(VAR_44 + VAR_58, VAR_59);

 FUNC_3(VAR_48 + VAR_58,
        VAR_30 |
        VAR_29 |
        VAR_28);

 FUNC_3(VAR_46 + VAR_58,
        VAR_21 |
        VAR_20);

 FUNC_3(VAR_37 + VAR_58,
        VAR_11);

 FUNC_3(VAR_47 + VAR_58,
        (2 << VAR_24));

 FUNC_3(VAR_45 + VAR_58, 0);

 FUNC_3(VAR_43 + VAR_58,
        (1 << VAR_14) |
        (3 << VAR_15));

 FUNC_3(VAR_35 + VAR_58,
        VAR_9);



 if (VAR_61 > 8)
  FUNC_3(VAR_42 + VAR_58,
         VAR_12);
 else
  FUNC_3(VAR_42 + VAR_58,
         VAR_13 |
         VAR_12);

 FUNC_8(VAR_49, VAR_50->clock);

 FUNC_3(VAR_31 + VAR_58,
        (1 << VAR_0));

 FUNC_3(VAR_32 + VAR_58,
        (2 << VAR_1));

 FUNC_3(VAR_33 + VAR_58,
        (3 << VAR_2) |
        (4 << VAR_3) |
        (5 << VAR_4) |
        (6 << VAR_5) |
        (7 << VAR_6) |
        (8 << VAR_7));

 FUNC_15(VAR_49);


 FUNC_3(VAR_36 + VAR_58,
        (0xff << VAR_8));

 FUNC_7(VAR_49);
 FUNC_14(VAR_49);
 FUNC_13(VAR_49, VAR_50);

 VAR_60 = FUNC_16(&VAR_57, VAR_55, VAR_50);
 if (VAR_60 < 0) {
  FUNC_1("failed to setup AVI infoframe: %zd\n", VAR_60);
  return;
 }

 VAR_60 = FUNC_17(&VAR_57, VAR_56, sizeof(VAR_56));
 if (VAR_60 < 0) {
  FUNC_1("failed to pack AVI infoframe: %zd\n", VAR_60);
  return;
 }

 FUNC_9(VAR_49, VAR_56, sizeof(VAR_56));

 FUNC_4(VAR_46 + VAR_58,
    VAR_23 |
    VAR_22);

 FUNC_5(VAR_47 + VAR_58,
   (2 << VAR_26),
   ~VAR_25);

 FUNC_4(VAR_35 + VAR_58,
    VAR_10);

 FUNC_3(VAR_38 + VAR_58, 0x00FFFFFF);
 FUNC_3(VAR_39 + VAR_58, 0x007FFFFF);
 FUNC_3(VAR_40 + VAR_58, 0x00000001);
 FUNC_3(VAR_41 + VAR_58, 0x00000001);


 FUNC_10(VAR_52, VAR_54->afmt->pin, 1);
}
