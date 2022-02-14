
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_kms {int dummy; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*,struct drm_device*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct msm_drm_private*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1, unsigned int VAR_2)
{
 struct msm_drm_private *VAR_3 = VAR_1->dev_private;
 struct msm_kms *VAR_4 = VAR_3->kms;
 if (!VAR_4)
  return -VAR_0;
 FUNC_0("dev=%p, crtc=%u", VAR_1, VAR_2);
 return FUNC_1(VAR_3, VAR_2, 1);
}
