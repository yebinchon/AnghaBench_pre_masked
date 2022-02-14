
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder_atom_dig {int backlight_level; } ;
struct amdgpu_encoder {int devices; int encoder_id; struct amdgpu_encoder_atom_dig* enc_priv; struct drm_encoder base; } ;
struct TYPE_2__ {int firmware_flags; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct drm_encoder*,int ,int ,int ) ;

void
FUNC_2(struct amdgpu_encoder *VAR_5,
         u8 VAR_6)
{
 struct drm_encoder *VAR_7 = &VAR_5->base;
 struct drm_device *VAR_8 = VAR_5->base.dev;
 struct amdgpu_device *VAR_9 = VAR_8->dev_private;
 struct amdgpu_encoder_atom_dig *VAR_10;

 if (!(VAR_9->mode_info.firmware_flags & VAR_0))
  return;

 if ((VAR_5->devices & (VAR_1)) &&
     VAR_5->enc_priv) {
  VAR_10 = VAR_5->enc_priv;
  VAR_10->backlight_level = VAR_6;
  FUNC_0(VAR_9, VAR_10->backlight_level);

  switch (VAR_5->encoder_id) {
  case 131:
  case 132:
  case 130:
  case 129:
  case 128:
   if (VAR_10->backlight_level == 0)
    FUNC_1(VAR_7,
               VAR_3, 0, 0);
   else {
    FUNC_1(VAR_7,
               VAR_2, 0, 0);
    FUNC_1(VAR_7,
               VAR_4, 0, 0);
   }
   break;
  default:
   break;
  }
 }
}
