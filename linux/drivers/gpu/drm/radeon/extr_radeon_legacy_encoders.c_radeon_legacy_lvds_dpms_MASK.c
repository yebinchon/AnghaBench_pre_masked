
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_lvds {int dpms_mode; } ;
struct radeon_encoder_atom_dig {int dpms_mode; } ;
struct radeon_encoder {struct radeon_encoder_lvds* enc_priv; } ;
struct radeon_device {scalar_t__ is_atom_bios; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_encoder*,int) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0, int VAR_1)
{
 struct radeon_device *VAR_2 = VAR_0->dev->dev_private;
 struct radeon_encoder *VAR_3 = FUNC_2(VAR_0);
 FUNC_0("\n");

 if (VAR_3->enc_priv) {
  if (VAR_2->is_atom_bios) {
   struct radeon_encoder_atom_dig *VAR_4 = VAR_3->enc_priv;
   VAR_4->dpms_mode = VAR_1;
  } else {
   struct radeon_encoder_lvds *VAR_5 = VAR_3->enc_priv;
   VAR_5->dpms_mode = VAR_1;
  }
 }

 FUNC_1(VAR_0, VAR_1);
}
