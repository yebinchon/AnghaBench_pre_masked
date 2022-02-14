
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int crtc_irq; } ;


 int FUNC_0 (struct amdgpu_device*,unsigned int) ;
 int FUNC_1 (struct amdgpu_device*,int *,int) ;

void FUNC_2(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0->dev_private;
 int VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_2, &VAR_2->crtc_irq, VAR_3);
}
