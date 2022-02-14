
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {int * edp; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_1(VAR_1);
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;

 FUNC_0("");
 if (VAR_4->edp) {
  FUNC_2(FUNC_3(VAR_0));
  VAR_4->edp = ((void*)0);
 }
}
