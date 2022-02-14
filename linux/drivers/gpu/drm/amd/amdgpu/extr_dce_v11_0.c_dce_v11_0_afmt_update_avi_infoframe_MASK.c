
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder_atom_dig {TYPE_1__* afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct amdgpu_encoder* FUNC_1 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_4,
            void *VAR_5, size_t VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->dev;
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 struct amdgpu_encoder *VAR_9 = FUNC_1(VAR_4);
 struct amdgpu_encoder_atom_dig *VAR_10 = VAR_9->enc_priv;
 uint8_t *VAR_11 = VAR_5 + 3;
 uint8_t *VAR_12 = VAR_5;

 FUNC_0(VAR_0 + VAR_10->afmt->offset,
  VAR_11[0x0] | (VAR_11[0x1] << 8) | (VAR_11[0x2] << 16) | (VAR_11[0x3] << 24));
 FUNC_0(VAR_1 + VAR_10->afmt->offset,
  VAR_11[0x4] | (VAR_11[0x5] << 8) | (VAR_11[0x6] << 16) | (VAR_11[0x7] << 24));
 FUNC_0(VAR_2 + VAR_10->afmt->offset,
  VAR_11[0x8] | (VAR_11[0x9] << 8) | (VAR_11[0xA] << 16) | (VAR_11[0xB] << 24));
 FUNC_0(VAR_3 + VAR_10->afmt->offset,
  VAR_11[0xC] | (VAR_11[0xD] << 8) | (VAR_12[1] << 24));
}
