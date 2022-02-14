
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 struct amdgpu_crtc* FUNC_1 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_1, bool VAR_2)
{
 struct amdgpu_crtc *VAR_3 = FUNC_1(VAR_1);
 struct drm_device *VAR_4 = VAR_1->dev;
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;

 if (VAR_2)
  FUNC_0(VAR_0 + VAR_3->crtc_offset, 1);
 else
  FUNC_0(VAR_0 + VAR_3->crtc_offset, 0);
}
