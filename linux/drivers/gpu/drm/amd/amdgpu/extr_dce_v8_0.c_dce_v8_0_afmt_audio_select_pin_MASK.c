
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_encoder {TYPE_1__* dev; } ;
struct amdgpu_encoder_atom_dig {TYPE_2__* afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {TYPE_3__* pin; scalar_t__ offset; } ;
struct TYPE_4__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 struct amdgpu_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->dev->dev_private;
 struct amdgpu_encoder *VAR_4 = FUNC_1(VAR_2);
 struct amdgpu_encoder_atom_dig *VAR_5 = VAR_4->enc_priv;
 u32 VAR_6;

 if (!VAR_5 || !VAR_5->afmt || !VAR_5->afmt->pin)
  return;

 VAR_6 = VAR_5->afmt->offset;

 FUNC_0(VAR_1 + VAR_6,
        (VAR_5->afmt->pin->id << VAR_0));
}
