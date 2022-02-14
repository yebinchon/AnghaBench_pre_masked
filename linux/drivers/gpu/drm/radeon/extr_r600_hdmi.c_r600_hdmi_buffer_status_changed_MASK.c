
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_encoder_atom_dig {TYPE_1__* afmt; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int last_buffer_filled_status; int enabled; } ;


 int FUNC_0 (struct drm_encoder*) ;
 struct radeon_encoder* FUNC_1 (struct drm_encoder*) ;

int FUNC_2(struct drm_encoder *VAR_0)
{
 struct radeon_encoder *VAR_1 = FUNC_1(VAR_0);
 struct radeon_encoder_atom_dig *VAR_2 = VAR_1->enc_priv;
 int VAR_3, VAR_4;

 if (!VAR_2->afmt || !VAR_2->afmt->enabled)
  return 0;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = VAR_2->afmt->last_buffer_filled_status != VAR_3;
 VAR_2->afmt->last_buffer_filled_status = VAR_3;

 return VAR_4;
}
