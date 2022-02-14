
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 struct amdgpu_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;
 struct amdgpu_encoder *VAR_8 = FUNC_3(VAR_5);
 struct amdgpu_encoder_atom_dig *VAR_9 = VAR_8->enc_priv;
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_4 + VAR_9->afmt->offset);
 VAR_10 = FUNC_0(VAR_10, VAR_3, VAR_2, 1);
 VAR_10 = FUNC_0(VAR_10, VAR_3, VAR_1, 1);
 VAR_10 = FUNC_0(VAR_10, VAR_3, VAR_0, 1);
 FUNC_2(VAR_4 + VAR_9->afmt->offset, VAR_10);
}
