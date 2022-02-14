
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_drm_private {struct platform_device* gpu_pdev; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;



__attribute__((used)) static void FUNC_0(struct drm_device *VAR_0,
  struct platform_device *VAR_1)
{
 struct msm_drm_private *VAR_2 = VAR_0->dev_private;
 VAR_2->gpu_pdev = VAR_1;
}
