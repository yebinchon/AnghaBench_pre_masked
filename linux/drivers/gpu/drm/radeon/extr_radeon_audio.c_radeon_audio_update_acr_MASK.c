
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_hdmi_acr {int dummy; } ;
struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {TYPE_2__* audio; struct radeon_encoder_atom_dig* enc_priv; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_4__ {int (* update_acr ) (struct drm_encoder*,int ,struct radeon_hdmi_acr const*) ;} ;
struct TYPE_3__ {int offset; } ;


 struct radeon_hdmi_acr* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct drm_encoder*,int ,struct radeon_hdmi_acr const*) ;
 struct radeon_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0, unsigned int VAR_1)
{
 const struct radeon_hdmi_acr *VAR_2 = FUNC_0(VAR_1);
 struct radeon_encoder *VAR_3 = FUNC_2(VAR_0);
 struct radeon_encoder_atom_dig *VAR_4 = VAR_3->enc_priv;

 if (!VAR_4 || !VAR_4->afmt)
  return;

 if (VAR_3->audio && VAR_3->audio->update_acr)
  VAR_3->audio->update_acr(VAR_0, VAR_4->afmt->offset, VAR_2);
}
