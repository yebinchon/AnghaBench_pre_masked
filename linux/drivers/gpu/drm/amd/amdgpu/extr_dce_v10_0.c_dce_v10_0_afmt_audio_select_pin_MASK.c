
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_encoder {TYPE_3__* dev; } ;
struct amdgpu_encoder_atom_dig {TYPE_2__* afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_6__ {struct amdgpu_device* dev_private; } ;
struct TYPE_5__ {scalar_t__ offset; TYPE_1__* pin; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 struct amdgpu_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->dev->dev_private;
 struct amdgpu_encoder *VAR_5 = FUNC_3(VAR_3);
 struct amdgpu_encoder_atom_dig *VAR_6 = VAR_5->enc_priv;
 u32 VAR_7;

 if (!VAR_6 || !VAR_6->afmt || !VAR_6->afmt->pin)
  return;

 VAR_7 = FUNC_1(VAR_2 + VAR_6->afmt->offset);
 VAR_7 = FUNC_0(VAR_7, VAR_0, VAR_1, VAR_6->afmt->pin->id);
 FUNC_2(VAR_2 + VAR_6->afmt->offset, VAR_7);
}
