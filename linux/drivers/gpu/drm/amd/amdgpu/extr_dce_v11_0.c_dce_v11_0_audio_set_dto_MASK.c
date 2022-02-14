
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder_atom_dig {int afmt; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {int crtc_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct amdgpu_crtc* FUNC_3 (int ) ;
 struct amdgpu_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_5, u32 VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 struct amdgpu_encoder *VAR_9 = FUNC_4(VAR_5);
 struct amdgpu_encoder_atom_dig *VAR_10 = VAR_9->enc_priv;
 struct amdgpu_crtc *VAR_11 = FUNC_3(VAR_5->crtc);
 u32 VAR_12 = 24 * 1000;
 u32 VAR_13 = VAR_6;
 u32 VAR_14;

 if (!VAR_10 || !VAR_10->afmt)
  return;






 VAR_14 = FUNC_1(VAR_4);
 VAR_14 = FUNC_0(VAR_14, VAR_1, VAR_0,
       VAR_11->crtc_id);
 FUNC_2(VAR_4, VAR_14);
 FUNC_2(VAR_3, VAR_12);
 FUNC_2(VAR_2, VAR_13);
}
