
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_dsi {size_t id; } ;
struct msm_drm_private {struct msm_dsi** dsi; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct msm_dsi*) ;
 int FUNC_2 (struct msm_dsi*) ;
 struct drm_device* FUNC_3 (struct device*) ;
 struct msm_dsi* FUNC_4 (struct platform_device*) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, struct device *VAR_2, void *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_3(VAR_2);
 struct msm_drm_private *VAR_5 = VAR_4->dev_private;
 struct platform_device *VAR_6 = FUNC_5(VAR_1);
 struct msm_dsi *VAR_7;

 FUNC_0("");
 VAR_7 = FUNC_4(VAR_6);
 if (FUNC_1(VAR_7)) {

  if (FUNC_2(VAR_7) == -VAR_0)
   return 0;
  else
   return FUNC_2(VAR_7);
 }

 VAR_5->dsi[VAR_7->id] = VAR_7;

 return 0;
}
