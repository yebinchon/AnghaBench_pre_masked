
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi {int id; } ;
struct msm_drm_private {int ** dsi; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct device {int dummy; } ;


 void* FUNC_0 (struct device*) ;
 int FUNC_1 (struct msm_dsi*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct device *VAR_1,
  void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_0(VAR_1);
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;
 struct msm_dsi *VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = VAR_5->id;

 if (VAR_4->dsi[VAR_6]) {
  FUNC_1(VAR_5);
  VAR_4->dsi[VAR_6] = ((void*)0);
 }
}
