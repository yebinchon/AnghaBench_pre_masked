
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct amdgpu_encoder_atom_dig {int linkb; } ;
struct amdgpu_encoder {int encoder_id; struct amdgpu_encoder_atom_dig* enc_priv; } ;


 int FUNC_0 (char*,int) ;




 struct amdgpu_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_2(struct drm_encoder *VAR_0)
{
 struct amdgpu_encoder *VAR_1 = FUNC_1(VAR_0);
 struct amdgpu_encoder_atom_dig *VAR_2 = VAR_1->enc_priv;

 switch (VAR_1->encoder_id) {
 case 131:
  return VAR_2->linkb ? 1 : 0;
 case 130:
  return VAR_2->linkb ? 3 : 2;
 case 129:
  return VAR_2->linkb ? 5 : 4;
 case 128:
  return 6;
 default:
  FUNC_0("invalid encoder_id: 0x%x\n", VAR_1->encoder_id);
  return 0;
 }
}
