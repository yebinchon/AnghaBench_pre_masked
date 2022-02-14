
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
struct amdgpu_afmt_acr {int n_48khz; int cts_48khz; int n_44_1khz; int cts_44_1khz; int n_32khz; int cts_32khz; } ;
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
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 struct amdgpu_afmt_acr FUNC_3 (int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_18, uint32_t VAR_19)
{
 struct drm_device *VAR_20 = VAR_18->dev;
 struct amdgpu_device *VAR_21 = VAR_20->dev_private;
 struct amdgpu_afmt_acr VAR_22 = FUNC_3(VAR_19);
 struct amdgpu_encoder *VAR_23 = FUNC_4(VAR_18);
 struct amdgpu_encoder_atom_dig *VAR_24 = VAR_23->enc_priv;
 u32 VAR_25;

 VAR_25 = FUNC_1(VAR_12 + VAR_24->afmt->offset);
 VAR_25 = FUNC_0(VAR_25, VAR_0, VAR_6, VAR_22.cts_32khz);
 FUNC_2(VAR_12 + VAR_24->afmt->offset, VAR_25);
 VAR_25 = FUNC_1(VAR_13 + VAR_24->afmt->offset);
 VAR_25 = FUNC_0(VAR_25, VAR_1, VAR_9, VAR_22.n_32khz);
 FUNC_2(VAR_13 + VAR_24->afmt->offset, VAR_25);

 VAR_25 = FUNC_1(VAR_14 + VAR_24->afmt->offset);
 VAR_25 = FUNC_0(VAR_25, VAR_2, VAR_7, VAR_22.cts_44_1khz);
 FUNC_2(VAR_14 + VAR_24->afmt->offset, VAR_25);
 VAR_25 = FUNC_1(VAR_15 + VAR_24->afmt->offset);
 VAR_25 = FUNC_0(VAR_25, VAR_3, VAR_10, VAR_22.n_44_1khz);
 FUNC_2(VAR_15 + VAR_24->afmt->offset, VAR_25);

 VAR_25 = FUNC_1(VAR_16 + VAR_24->afmt->offset);
 VAR_25 = FUNC_0(VAR_25, VAR_4, VAR_8, VAR_22.cts_48khz);
 FUNC_2(VAR_16 + VAR_24->afmt->offset, VAR_25);
 VAR_25 = FUNC_1(VAR_17 + VAR_24->afmt->offset);
 VAR_25 = FUNC_0(VAR_25, VAR_5, VAR_11, VAR_22.n_48khz);
 FUNC_2(VAR_17 + VAR_24->afmt->offset, VAR_25);

}
