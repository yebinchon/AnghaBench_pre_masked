
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct r600_audio_pin {int channels; scalar_t__ category_code; scalar_t__ status_bits; int bits_per_sample; int rate; } ;
struct hdmi_audio_infoframe {int channels; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;
struct TYPE_2__ {int offset; int enabled; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
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
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (struct hdmi_audio_infoframe*) ;
 scalar_t__ FUNC_7 (struct hdmi_audio_infoframe*,int *,int) ;
 struct r600_audio_pin FUNC_8 (struct radeon_device*) ;
 scalar_t__ FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (struct drm_encoder*,int *,int) ;
 struct radeon_encoder* FUNC_11 (struct drm_encoder*) ;

void FUNC_12(struct drm_encoder *VAR_10)
{
 struct drm_device *VAR_11 = VAR_10->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct radeon_encoder *VAR_13 = FUNC_11(VAR_10);
 struct radeon_encoder_atom_dig *VAR_14 = VAR_13->enc_priv;
 struct r600_audio_pin VAR_15 = FUNC_8(VAR_12);
 uint8_t VAR_16[VAR_9 + VAR_8];
 struct hdmi_audio_infoframe VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;
 ssize_t VAR_20;

 if (!VAR_14->afmt || !VAR_14->afmt->enabled)
  return;
 VAR_18 = VAR_14->afmt->offset;

 FUNC_0("%s with %d channels, %d Hz sampling rate, %d bits per sample,\n",
   FUNC_9(VAR_10) ? "playing" : "stopped",
    VAR_15.channels, VAR_15.rate, VAR_15.bits_per_sample);
 FUNC_0("0x%02X IEC60958 status bits and 0x%02X category code\n",
    (int)VAR_15.status_bits, (int)VAR_15.category_code);

 VAR_20 = FUNC_6(&VAR_17);
 if (VAR_20 < 0) {
  FUNC_1("failed to setup audio infoframe\n");
  return;
 }

 VAR_17.channels = VAR_15.channels;

 VAR_20 = FUNC_7(&VAR_17, VAR_16, sizeof(VAR_16));
 if (VAR_20 < 0) {
  FUNC_1("failed to pack audio infoframe\n");
  return;
 }

 VAR_19 = FUNC_2(VAR_3 + VAR_18);
 if (VAR_19 & VAR_4)
  FUNC_3(VAR_3 + VAR_18,
         VAR_19 & ~VAR_4);

 FUNC_5(VAR_5 + VAR_18,
    VAR_6);

 FUNC_4(VAR_7 + VAR_18,
     ~VAR_1);

 FUNC_10(VAR_10, VAR_16, sizeof(VAR_16));

 FUNC_5(VAR_7 + VAR_18,
    VAR_0 |
    VAR_2);
}
