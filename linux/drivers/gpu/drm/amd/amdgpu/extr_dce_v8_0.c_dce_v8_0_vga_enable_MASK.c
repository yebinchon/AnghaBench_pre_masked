
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {size_t crtc_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct amdgpu_crtc* FUNC_2 (struct drm_crtc*) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_1, bool VAR_2)
{
 struct amdgpu_crtc *VAR_3 = FUNC_2(VAR_1);
 struct drm_device *VAR_4 = VAR_1->dev;
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_0[VAR_3->crtc_id]) & ~1;
 if (VAR_2)
  FUNC_1(VAR_0[VAR_3->crtc_id], VAR_6 | 1);
 else
  FUNC_1(VAR_0[VAR_3->crtc_id], VAR_6);
}
