
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_device {int crtc_irq; } ;
struct amdgpu_crtc {int enabled; int crtc_id; } ;






 unsigned int FUNC_0 (struct amdgpu_device*,int ) ;
 int FUNC_1 (struct amdgpu_device*,int *,unsigned int) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 struct amdgpu_crtc* FUNC_5 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0, int VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct amdgpu_device *VAR_3 = VAR_2->dev_private;
 struct amdgpu_crtc *VAR_4 = FUNC_5(VAR_0);
 unsigned VAR_5;

 if (FUNC_2(VAR_3))
  return;

 switch (VAR_1) {
 case 130:
  VAR_4->enabled = 1;

  VAR_5 = FUNC_0(VAR_3,
      VAR_4->crtc_id);
  FUNC_1(VAR_3, &VAR_3->crtc_irq, VAR_5);
  FUNC_4(VAR_0);
  break;
 case 129:
 case 128:
 case 131:
  FUNC_3(VAR_0);
  VAR_4->enabled = 0;
  break;
 }
}
