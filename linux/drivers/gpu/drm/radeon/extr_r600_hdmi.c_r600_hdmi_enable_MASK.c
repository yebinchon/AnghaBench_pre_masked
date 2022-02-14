
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct radeon_encoder_atom_dig {TYPE_2__* afmt; } ;
struct radeon_encoder {int encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_3__ {scalar_t__ installed; } ;
struct radeon_device {TYPE_1__ irq; int dev; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_4__ {int enabled; scalar_t__ offset; int id; } ;


 int FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,char*,scalar_t__,int) ;




 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct radeon_device*,int ) ;
 int FUNC_8 (struct radeon_device*,int ) ;
 struct radeon_encoder* FUNC_9 (struct drm_encoder*) ;

void FUNC_10(struct drm_encoder *VAR_13, bool VAR_14)
{
 struct drm_device *VAR_15 = VAR_13->dev;
 struct radeon_device *VAR_16 = VAR_15->dev_private;
 struct radeon_encoder *VAR_17 = FUNC_9(VAR_13);
 struct radeon_encoder_atom_dig *VAR_18 = VAR_17->enc_priv;
 u32 VAR_19 = VAR_8;

 if (!VAR_18 || !VAR_18->afmt)
  return;


 if (!FUNC_0(VAR_16)) {
  if (VAR_14)
   VAR_19 |= VAR_7;
  switch (VAR_17->encoder_id) {
  case 129:
   if (VAR_14) {
    FUNC_5(VAR_2, VAR_3);
    VAR_19 |= FUNC_2(VAR_12);
   } else {
    FUNC_4(VAR_2, ~VAR_3);
   }
   break;
  case 128:
   if (VAR_14) {
    FUNC_5(VAR_0, VAR_1);
    VAR_19 |= FUNC_2(VAR_11);
   } else {
    FUNC_4(VAR_0, ~VAR_1);
   }
   break;
  case 131:
   if (VAR_14) {
    FUNC_5(VAR_4, VAR_5);
    VAR_19 |= FUNC_2(VAR_9);
   } else {
    FUNC_4(VAR_4, ~VAR_5);
   }
   break;
  case 130:
   if (VAR_14)
    VAR_19 |= FUNC_2(VAR_10);
   break;
  default:
   FUNC_6(VAR_16->dev, "Invalid encoder for HDMI: 0x%X\n",
    VAR_17->encoder_id);
   break;
  }
  FUNC_3(VAR_6 + VAR_18->afmt->offset, VAR_19);
 }

 if (VAR_16->irq.installed) {


  if (VAR_14)
   FUNC_8(VAR_16, VAR_18->afmt->id);
  else
   FUNC_7(VAR_16, VAR_18->afmt->id);
 }

 VAR_18->afmt->enabled = VAR_14;

 FUNC_1("%sabling HDMI interface @ 0x%04X for encoder 0x%x\n",
    VAR_14 ? "En" : "Dis", VAR_18->afmt->offset, VAR_17->encoder_id);
}
