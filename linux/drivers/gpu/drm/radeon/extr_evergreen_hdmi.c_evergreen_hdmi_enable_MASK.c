
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {int encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_device {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int enabled; scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct drm_connector*) ;
 struct drm_connector* FUNC_6 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_7 (struct drm_encoder*) ;

void FUNC_8(struct drm_encoder *VAR_7, bool VAR_8)
{
 struct drm_device *VAR_9 = VAR_7->dev;
 struct radeon_device *VAR_10 = VAR_9->dev_private;
 struct radeon_encoder *VAR_11 = FUNC_7(VAR_7);
 struct radeon_encoder_atom_dig *VAR_12 = VAR_11->enc_priv;

 if (!VAR_12 || !VAR_12->afmt)
  return;

 if (VAR_8) {
  struct drm_connector *VAR_13 = FUNC_6(VAR_7);

  if (VAR_13 && FUNC_4(FUNC_5(VAR_13))) {
   FUNC_1(VAR_6 + VAR_12->afmt->offset,
          VAR_5 |
          VAR_4 |
          VAR_3 |
          VAR_2);
   FUNC_3(VAR_0 + VAR_12->afmt->offset,
      VAR_1);
  } else {
   FUNC_1(VAR_6 + VAR_12->afmt->offset,
          VAR_5 |
          VAR_4);
   FUNC_2(VAR_0 + VAR_12->afmt->offset,
       ~VAR_1);
  }
 } else {
  FUNC_2(VAR_0 + VAR_12->afmt->offset,
      ~VAR_1);
  FUNC_1(VAR_6 + VAR_12->afmt->offset, 0);
 }

 VAR_12->afmt->enabled = VAR_8;

 FUNC_0("%sabling HDMI interface @ 0x%04X for encoder 0x%x\n",
    VAR_8 ? "En" : "Dis", VAR_12->afmt->offset, VAR_11->encoder_id);
}
