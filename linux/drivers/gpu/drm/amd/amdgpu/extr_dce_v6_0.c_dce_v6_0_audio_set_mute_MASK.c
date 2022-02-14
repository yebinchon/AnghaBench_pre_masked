
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder_atom_dig {TYPE_1__* afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 struct amdgpu_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_3, bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;
 struct amdgpu_encoder *VAR_7 = FUNC_3(VAR_3);
 struct amdgpu_encoder_atom_dig *VAR_8 = VAR_7->enc_priv;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_2 + VAR_8->afmt->offset);
 VAR_9 = FUNC_0(VAR_9, VAR_0, VAR_1, VAR_4 ? 1 : 0);
 FUNC_2(VAR_2 + VAR_8->afmt->offset, VAR_9);
}
