
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
struct TYPE_3__ {int (* set_audio_packet ) (struct drm_encoder*,int ) ;} ;


 int FUNC_0 (struct drm_encoder*,int ) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_0)
{
 struct radeon_encoder *VAR_1 = FUNC_1(VAR_0);
 struct radeon_encoder_atom_dig *VAR_2 = VAR_1->enc_priv;

 if (!VAR_2 || !VAR_2->afmt)
  return;

 if (VAR_1->audio && VAR_1->audio->set_audio_packet)
  VAR_1->audio->set_audio_packet(VAR_0, VAR_2->afmt->offset);
}
