
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder_atom_dig {TYPE_1__* afmt; } ;
struct amdgpu_encoder {int encoder_id; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {int enabled; int offset; int * pin; } ;


 int FUNC_0 (char*,char*,int ,int ) ;
 int FUNC_1 (struct amdgpu_device*,int *,int) ;
 struct amdgpu_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0, bool VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct amdgpu_device *VAR_3 = VAR_2->dev_private;
 struct amdgpu_encoder *VAR_4 = FUNC_2(VAR_0);
 struct amdgpu_encoder_atom_dig *VAR_5 = VAR_4->enc_priv;

 if (!VAR_5 || !VAR_5->afmt)
  return;


 if (VAR_1 && VAR_5->afmt->enabled)
  return;

 if (!VAR_1 && !VAR_5->afmt->enabled)
  return;

 if (!VAR_1 && VAR_5->afmt->pin) {
  FUNC_1(VAR_3, VAR_5->afmt->pin, 0);
  VAR_5->afmt->pin = ((void*)0);
 }

 VAR_5->afmt->enabled = VAR_1;

 FUNC_0("%sabling AFMT interface @ 0x%04X for encoder 0x%x\n",
    VAR_1 ? "En" : "Dis", VAR_5->afmt->offset, VAR_4->encoder_id);
}
