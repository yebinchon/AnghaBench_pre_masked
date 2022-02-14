
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct platform_device {int dev; } ;
struct msm_gpu {struct drm_device* dev; } ;
struct msm_drm_private {struct platform_device* gpu_pdev; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct dev_pm_opp {int dummy; } ;


 int FUNC_0 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct dev_pm_opp*) ;
 int FUNC_3 (struct dev_pm_opp*) ;

__attribute__((used)) static inline uint32_t FUNC_4(struct msm_gpu *VAR_0, uint32_t VAR_1)
{
 struct drm_device *VAR_2 = VAR_0->dev;
 struct msm_drm_private *VAR_3 = VAR_2->dev_private;
 struct platform_device *VAR_4 = VAR_3->gpu_pdev;
 struct dev_pm_opp *VAR_5;
 u32 VAR_6 = 0;

 VAR_5 = FUNC_1(&VAR_4->dev, VAR_1, 1);

 if (!FUNC_0(VAR_5)) {
  VAR_6 = FUNC_2(VAR_5) / 1000;
  FUNC_3(VAR_5);
 }

 return VAR_6;
}
