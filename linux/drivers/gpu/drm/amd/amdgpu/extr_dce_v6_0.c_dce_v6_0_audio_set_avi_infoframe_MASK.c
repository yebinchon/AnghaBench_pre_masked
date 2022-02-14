
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder_atom_dig {TYPE_1__* afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 struct drm_connector* FUNC_4 (struct drm_encoder*) ;
 scalar_t__ FUNC_5 (struct hdmi_avi_infoframe*,struct drm_connector*,struct drm_display_mode*) ;
 scalar_t__ FUNC_6 (struct hdmi_avi_infoframe*,int*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct amdgpu_encoder* FUNC_7 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_9,
            struct drm_display_mode *VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->dev;
 struct amdgpu_device *VAR_12 = VAR_11->dev_private;
 struct amdgpu_encoder *VAR_13 = FUNC_7(VAR_9);
 struct amdgpu_encoder_atom_dig *VAR_14 = VAR_13->enc_priv;
 struct drm_connector *VAR_15 = FUNC_4(VAR_9);
 struct hdmi_avi_infoframe VAR_16;
 u8 VAR_17[VAR_3 + VAR_1];
 uint8_t *VAR_18 = VAR_17 + 3;
 uint8_t *VAR_19 = VAR_17;
 ssize_t VAR_20;
 u32 VAR_21;

 VAR_20 = FUNC_5(&VAR_16, VAR_15, VAR_10);
 if (VAR_20 < 0) {
  FUNC_0("failed to setup AVI infoframe: %zd\n", VAR_20);
  return;
 }

 VAR_20 = FUNC_6(&VAR_16, VAR_17, sizeof(VAR_17));
 if (VAR_20 < 0) {
  FUNC_0("failed to pack AVI infoframe: %zd\n", VAR_20);
  return;
 }

 FUNC_3(VAR_4 + VAR_14->afmt->offset,
        VAR_18[0x0] | (VAR_18[0x1] << 8) | (VAR_18[0x2] << 16) | (VAR_18[0x3] << 24));
 FUNC_3(VAR_5 + VAR_14->afmt->offset,
        VAR_18[0x4] | (VAR_18[0x5] << 8) | (VAR_18[0x6] << 16) | (VAR_18[0x7] << 24));
 FUNC_3(VAR_6 + VAR_14->afmt->offset,
        VAR_18[0x8] | (VAR_18[0x9] << 8) | (VAR_18[0xA] << 16) | (VAR_18[0xB] << 24));
 FUNC_3(VAR_7 + VAR_14->afmt->offset,
        VAR_18[0xC] | (VAR_18[0xD] << 8) | (VAR_19[1] << 24));

 VAR_21 = FUNC_2(VAR_8 + VAR_14->afmt->offset);

 VAR_21 = FUNC_1(VAR_21, VAR_2,
   VAR_0, 2);
 FUNC_3(VAR_8 + VAR_14->afmt->offset, VAR_21);
}
