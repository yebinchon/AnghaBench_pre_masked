
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct amdgpu_encoder_atom_dig {int dig_encoder; } ;
struct amdgpu_encoder {scalar_t__ active_device; struct amdgpu_encoder_atom_dig* enc_priv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_encoder*,int ) ;
 scalar_t__ FUNC_1 (struct drm_encoder*) ;
 scalar_t__ FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*,int) ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_2)
{
 struct amdgpu_encoder *VAR_3 = FUNC_4(VAR_2);
 struct amdgpu_encoder_atom_dig *VAR_4;

 FUNC_0(VAR_2, VAR_1);

 if (FUNC_2(VAR_2)) {
  if (FUNC_1(VAR_2) == VAR_0)
   FUNC_3(VAR_2, 0);
  VAR_4 = VAR_3->enc_priv;
  VAR_4->dig_encoder = -1;
 }
 VAR_3->active_device = 0;
}
