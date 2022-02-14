
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
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
 int FUNC_0 (scalar_t__,int) ;
 struct amdgpu_afmt_acr FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct amdgpu_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_9, uint32_t VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->dev;
 struct amdgpu_device *VAR_12 = VAR_11->dev_private;
 struct amdgpu_afmt_acr VAR_13 = FUNC_1(VAR_10);
 struct amdgpu_encoder *VAR_14 = FUNC_2(VAR_9);
 struct amdgpu_encoder_atom_dig *VAR_15 = VAR_14->enc_priv;
 uint32_t VAR_16 = VAR_15->afmt->offset;

 FUNC_0(VAR_3 + VAR_16, (VAR_13.cts_32khz << VAR_0));
 FUNC_0(VAR_4 + VAR_16, VAR_13.n_32khz);

 FUNC_0(VAR_5 + VAR_16, (VAR_13.cts_44_1khz << VAR_1));
 FUNC_0(VAR_6 + VAR_16, VAR_13.n_44_1khz);

 FUNC_0(VAR_7 + VAR_16, (VAR_13.cts_48khz << VAR_2));
 FUNC_0(VAR_8 + VAR_16, VAR_13.n_48khz);
}
