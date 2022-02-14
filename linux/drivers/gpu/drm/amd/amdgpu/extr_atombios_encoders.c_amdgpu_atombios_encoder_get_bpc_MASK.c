
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_encoder {scalar_t__ crtc; } ;
struct amdgpu_crtc {int bpc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct amdgpu_crtc* FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct drm_encoder *VAR_6)
{
 int VAR_7 = 8;

 if (VAR_6->crtc) {
  struct amdgpu_crtc *VAR_8 = FUNC_0(VAR_6->crtc);
  VAR_7 = VAR_8->bpc;
 }

 switch (VAR_7) {
 case 0:
  return VAR_5;
 case 6:
  return VAR_3;
 case 8:
 default:
  return VAR_4;
 case 10:
  return VAR_0;
 case 12:
  return VAR_1;
 case 16:
  return VAR_2;
 }
}
