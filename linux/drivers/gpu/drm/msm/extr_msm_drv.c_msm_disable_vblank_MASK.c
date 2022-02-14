
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_kms {int dummy; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*,struct drm_device*,unsigned int) ;
 int FUNC_1 (struct msm_drm_private*,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0, unsigned int VAR_1)
{
 struct msm_drm_private *VAR_2 = VAR_0->dev_private;
 struct msm_kms *VAR_3 = VAR_2->kms;
 if (!VAR_3)
  return;
 FUNC_0("dev=%p, crtc=%u", VAR_0, VAR_1);
 FUNC_1(VAR_2, VAR_1, 0);
}
