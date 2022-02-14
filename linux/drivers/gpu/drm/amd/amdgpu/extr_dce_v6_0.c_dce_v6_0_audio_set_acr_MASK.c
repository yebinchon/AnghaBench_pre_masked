
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder_atom_dig {TYPE_1__* afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_afmt_acr {int cts_32khz; int n_32khz; int cts_44_1khz; int n_44_1khz; int cts_48khz; int n_48khz; } ;
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
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct amdgpu_afmt_acr FUNC_3 (int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_22,
       uint32_t VAR_23, int VAR_24)
{
 struct drm_device *VAR_25 = VAR_22->dev;
 struct amdgpu_device *VAR_26 = VAR_25->dev_private;
 struct amdgpu_afmt_acr VAR_27 = FUNC_3(VAR_23);
 struct amdgpu_encoder *VAR_28 = FUNC_4(VAR_22);
 struct amdgpu_encoder_atom_dig *VAR_29 = VAR_28->enc_priv;
 u32 VAR_30;

 VAR_30 = FUNC_1(VAR_21 + VAR_29->afmt->offset);
 VAR_30 = FUNC_0(VAR_30, VAR_13, VAR_6, 1);
 VAR_30 = FUNC_0(VAR_30, VAR_13, VAR_14,
   VAR_24 > 8 ? 0 : 1);
 FUNC_2(VAR_21 + VAR_29->afmt->offset, VAR_30);

 VAR_30 = FUNC_1(VAR_15 + VAR_29->afmt->offset);
 VAR_30 = FUNC_0(VAR_30, VAR_0, VAR_7, VAR_27.cts_32khz);
 FUNC_2(VAR_15 + VAR_29->afmt->offset, VAR_30);
 VAR_30 = FUNC_1(VAR_16 + VAR_29->afmt->offset);
 VAR_30 = FUNC_0(VAR_30, VAR_1, VAR_10, VAR_27.n_32khz);
 FUNC_2(VAR_16 + VAR_29->afmt->offset, VAR_30);

 VAR_30 = FUNC_1(VAR_17 + VAR_29->afmt->offset);
 VAR_30 = FUNC_0(VAR_30, VAR_2, VAR_8, VAR_27.cts_44_1khz);
 FUNC_2(VAR_17 + VAR_29->afmt->offset, VAR_30);
 VAR_30 = FUNC_1(VAR_18 + VAR_29->afmt->offset);
 VAR_30 = FUNC_0(VAR_30, VAR_3, VAR_11, VAR_27.n_44_1khz);
 FUNC_2(VAR_18 + VAR_29->afmt->offset, VAR_30);

 VAR_30 = FUNC_1(VAR_19 + VAR_29->afmt->offset);
 VAR_30 = FUNC_0(VAR_30, VAR_4, VAR_9, VAR_27.cts_48khz);
 FUNC_2(VAR_19 + VAR_29->afmt->offset, VAR_30);
 VAR_30 = FUNC_1(VAR_20 + VAR_29->afmt->offset);
 VAR_30 = FUNC_0(VAR_30, VAR_5, VAR_12, VAR_27.n_48khz);
 FUNC_2(VAR_20 + VAR_29->afmt->offset, VAR_30);
}
