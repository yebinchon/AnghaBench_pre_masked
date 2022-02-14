
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_device {int pageflip_irq; int crtc_irq; } ;
struct amdgpu_crtc {int enabled; int crtc_id; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct drm_crtc*,int ) ;
 int FUNC_1 (struct drm_crtc*,int ) ;
 unsigned int FUNC_2 (struct amdgpu_device*,int ) ;
 int FUNC_3 (struct amdgpu_device*,int *,unsigned int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (struct drm_crtc*) ;
 struct amdgpu_crtc* FUNC_8 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;
 struct amdgpu_crtc *VAR_6 = FUNC_8(VAR_2);
 unsigned VAR_7;

 switch (VAR_3) {
 case 130:
  VAR_6->enabled = 1;
  FUNC_1(VAR_2, VAR_1);
  FUNC_0(VAR_2, VAR_0);

  VAR_7 = FUNC_2(VAR_5,
      VAR_6->crtc_id);
  FUNC_3(VAR_5, &VAR_5->crtc_irq, VAR_7);
  FUNC_3(VAR_5, &VAR_5->pageflip_irq, VAR_7);
  FUNC_7(VAR_2);
  FUNC_5(VAR_2);
  break;
 case 129:
 case 128:
 case 131:
  FUNC_6(VAR_2);
  if (VAR_6->enabled)
   FUNC_0(VAR_2, VAR_1);
  FUNC_1(VAR_2, VAR_0);
  VAR_6->enabled = 0;
  break;
 }

 FUNC_4(VAR_5);
}
