
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
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct amdgpu_crtc* FUNC_1 (int ) ;
 struct amdgpu_encoder* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_4, u32 VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct amdgpu_device *VAR_7 = VAR_6->dev_private;
 struct amdgpu_encoder *VAR_8 = FUNC_2(VAR_4);
 struct amdgpu_encoder_atom_dig *VAR_9 = VAR_8->enc_priv;
 struct amdgpu_crtc *VAR_10 = FUNC_1(VAR_4->crtc);
 u32 VAR_11 = 24 * 1000;
 u32 VAR_12 = VAR_5;

 if (!VAR_9 || !VAR_9->afmt)
  return;






 FUNC_0(VAR_3, (VAR_10->crtc_id << VAR_0));
 FUNC_0(VAR_2, VAR_11);
 FUNC_0(VAR_1, VAR_12);
}
