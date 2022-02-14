
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_encoder {int dummy; } ;
struct amdgpu_encoder {int encoder_id; } ;


 int VAR_0 ;


 struct drm_encoder* FUNC_0 (struct drm_encoder*) ;
 struct amdgpu_encoder* FUNC_1 (struct drm_encoder*) ;

u16 FUNC_2(struct drm_encoder *VAR_1)
{
 struct drm_encoder *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2) {
  struct amdgpu_encoder *VAR_3 = FUNC_1(VAR_2);

  switch (VAR_3->encoder_id) {
  case 128:
  case 129:
   return VAR_3->encoder_id;
  default:
   return VAR_0;
  }
 }
 return VAR_0;
}
