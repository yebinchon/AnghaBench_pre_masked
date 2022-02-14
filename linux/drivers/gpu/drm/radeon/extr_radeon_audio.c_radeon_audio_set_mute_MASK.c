
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_encoder_atom_dig {TYPE_2__* afmt; } ;
struct radeon_encoder {TYPE_1__* audio; struct radeon_encoder_atom_dig* enc_priv; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {int (* set_mute ) (struct drm_encoder*,int ,int) ;} ;


 int FUNC_0 (struct drm_encoder*,int ,int) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0, bool VAR_1)
{
 struct radeon_encoder *VAR_2 = FUNC_1(VAR_0);
 struct radeon_encoder_atom_dig *VAR_3 = VAR_2->enc_priv;

 if (!VAR_3 || !VAR_3->afmt)
  return;

 if (VAR_2->audio && VAR_2->audio->set_mute)
  VAR_2->audio->set_mute(VAR_0, VAR_3->afmt->offset, VAR_1);
}
