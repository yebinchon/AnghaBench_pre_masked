
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct amdgpu_encoder {int devices; struct amdgpu_encoder* enc_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_encoder*) ;
 int FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct amdgpu_encoder*) ;
 struct amdgpu_encoder* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_1)
{
 struct amdgpu_encoder *VAR_2 = FUNC_3(VAR_1);
 if (VAR_2->devices & (VAR_0))
  FUNC_0(VAR_2);
 FUNC_2(VAR_2->enc_priv);
 FUNC_1(VAR_1);
 FUNC_2(VAR_2);
}
