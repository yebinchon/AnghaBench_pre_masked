
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_encoder {TYPE_1__* dev; } ;
struct amdgpu_encoder_atom_dig {TYPE_3__* afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* pin; scalar_t__ offset; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 struct amdgpu_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->dev->dev_private;
 struct amdgpu_encoder *VAR_5 = FUNC_2(VAR_3);
 struct amdgpu_encoder_atom_dig *VAR_6 = VAR_5->enc_priv;

 if (!VAR_6 || !VAR_6->afmt || !VAR_6->afmt->pin)
  return;

 FUNC_1(VAR_2 + VAR_6->afmt->offset,
        FUNC_0(0, VAR_0, VAR_1,
               VAR_6->afmt->pin->id));
}
