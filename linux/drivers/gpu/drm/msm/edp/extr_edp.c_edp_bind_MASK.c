
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_edp {int dummy; } ;
struct msm_drm_private {struct msm_edp* edp; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct msm_edp*) ;
 int FUNC_2 (struct msm_edp*) ;
 struct drm_device* FUNC_3 (struct device*) ;
 struct msm_edp* FUNC_4 (int ) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_3(VAR_1);
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;
 struct msm_edp *VAR_5;

 FUNC_0("");
 VAR_5 = FUNC_4(FUNC_5(VAR_0));
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);
 VAR_4->edp = VAR_5;

 return 0;
}
