
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 struct amdgpu_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_28)
{
 struct drm_device *VAR_29 = VAR_28->dev;
 struct amdgpu_device *VAR_30 = VAR_29->dev_private;
 struct amdgpu_encoder *VAR_31 = FUNC_3(VAR_28);
 struct amdgpu_encoder_atom_dig *VAR_32 = VAR_31->enc_priv;
 u32 VAR_33;

 VAR_33 = FUNC_1(VAR_26 + VAR_32->afmt->offset);
 VAR_33 = FUNC_0(VAR_33, VAR_16, VAR_13, 1);
 FUNC_2(VAR_26 + VAR_32->afmt->offset, VAR_33);

 VAR_33 = FUNC_1(VAR_21 + VAR_32->afmt->offset);
 VAR_33 = FUNC_0(VAR_33, VAR_0, VAR_9, 1);
 FUNC_2(VAR_21 + VAR_32->afmt->offset, VAR_33);

 VAR_33 = FUNC_1(VAR_22 + VAR_32->afmt->offset);
 VAR_33 = FUNC_0(VAR_33, VAR_1, VAR_10, 2);
 FUNC_2(VAR_22 + VAR_32->afmt->offset, VAR_33);

 VAR_33 = FUNC_1(VAR_23 + VAR_32->afmt->offset);
 VAR_33 = FUNC_0(VAR_33, VAR_2, VAR_3, 3);
 VAR_33 = FUNC_0(VAR_33, VAR_2, VAR_4, 4);
 VAR_33 = FUNC_0(VAR_33, VAR_2, VAR_5, 5);
 VAR_33 = FUNC_0(VAR_33, VAR_2, VAR_6, 6);
 VAR_33 = FUNC_0(VAR_33, VAR_2, VAR_7, 7);
 VAR_33 = FUNC_0(VAR_33, VAR_2, VAR_8, 8);
 FUNC_2(VAR_23 + VAR_32->afmt->offset, VAR_33);

 VAR_33 = FUNC_1(VAR_25 + VAR_32->afmt->offset);
 VAR_33 = FUNC_0(VAR_33, VAR_15, VAR_12, 0xff);
 FUNC_2(VAR_25 + VAR_32->afmt->offset, VAR_33);

 VAR_33 = FUNC_1(VAR_27 + VAR_32->afmt->offset);
 VAR_33 = FUNC_0(VAR_33, VAR_20, VAR_18, 1);
 VAR_33 = FUNC_0(VAR_33, VAR_20, VAR_19, 3);
 FUNC_2(VAR_27 + VAR_32->afmt->offset, VAR_33);

 VAR_33 = FUNC_1(VAR_24 + VAR_32->afmt->offset);
 VAR_33 = FUNC_0(VAR_33, VAR_14, VAR_17, 1);
 VAR_33 = FUNC_0(VAR_33, VAR_14, VAR_11, 1);
 FUNC_2(VAR_24 + VAR_32->afmt->offset, VAR_33);
}
