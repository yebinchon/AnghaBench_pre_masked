
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct amdgpu_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_12, bool VAR_13)
{
 struct drm_device *VAR_14 = VAR_12->dev;
 struct amdgpu_device *VAR_15 = VAR_14->dev_private;
 struct amdgpu_encoder *VAR_16 = FUNC_3(VAR_12);
 struct amdgpu_encoder_atom_dig *VAR_17 = VAR_16->enc_priv;
 u32 VAR_18;

 if (VAR_13) {
  VAR_18 = FUNC_1(VAR_9 + VAR_17->afmt->offset);
  VAR_18 = FUNC_0(VAR_18, VAR_0, VAR_1, 1);
  FUNC_2(VAR_9 + VAR_17->afmt->offset, VAR_18);

  VAR_18 = FUNC_1(VAR_11 + VAR_17->afmt->offset);
  VAR_18 = FUNC_0(VAR_18, VAR_7, VAR_8, 1);
  FUNC_2(VAR_11 + VAR_17->afmt->offset, VAR_18);

  VAR_18 = FUNC_1(VAR_10 + VAR_17->afmt->offset);
  VAR_18 = FUNC_0(VAR_18, VAR_5, VAR_3, 1);
  VAR_18 = FUNC_0(VAR_18, VAR_5, VAR_4, 1);
  VAR_18 = FUNC_0(VAR_18, VAR_5, VAR_2, 1);
  VAR_18 = FUNC_0(VAR_18, VAR_5, VAR_6, 1);
  FUNC_2(VAR_10 + VAR_17->afmt->offset, VAR_18);
 } else {
  FUNC_2(VAR_10 + VAR_17->afmt->offset, 0);
 }
}
