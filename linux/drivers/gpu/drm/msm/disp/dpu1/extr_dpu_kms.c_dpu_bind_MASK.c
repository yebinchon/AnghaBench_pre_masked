
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct msm_drm_private {int * kms; } ;
struct dss_module_power {int dummy; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct dpu_kms {int rpm_enabled; int base; struct platform_device* pdev; struct drm_device* dev; struct dss_module_power mp; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_device* FUNC_1 (struct device*) ;
 struct dpu_kms* FUNC_2 (int *,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct platform_device*,struct dss_module_power*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct platform_device*,struct dpu_kms*) ;
 int FUNC_6 (int *) ;
 struct platform_device* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_3, struct device *VAR_4, void *VAR_5)
{
 struct drm_device *VAR_6 = FUNC_1(VAR_4);
 struct platform_device *VAR_7 = FUNC_7(VAR_3);
 struct msm_drm_private *VAR_8 = VAR_6->dev_private;
 struct dpu_kms *VAR_9;
 struct dss_module_power *VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_2(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = &VAR_9->mp;
 VAR_11 = FUNC_3(VAR_7, VAR_10);
 if (VAR_11) {
  FUNC_0("failed to parse clocks, ret=%d\n", VAR_11);
  return VAR_11;
 }

 FUNC_5(VAR_7, VAR_9);

 FUNC_4(&VAR_9->base, &VAR_2);
 VAR_9->dev = VAR_6;
 VAR_9->pdev = VAR_7;

 FUNC_6(&VAR_7->dev);
 VAR_9->rpm_enabled = 1;

 VAR_8->kms = &VAR_9->base;
 return VAR_11;
}
