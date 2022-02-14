
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_drm_private {TYPE_1__* hdmi; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ audio_pdev; } ;


 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
  void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_0(VAR_1);
 struct msm_drm_private *VAR_4 = VAR_3->dev_private;
 if (VAR_4->hdmi) {
  if (VAR_4->hdmi->audio_pdev)
   FUNC_2(VAR_4->hdmi->audio_pdev);

  FUNC_1(VAR_4->hdmi);
  VAR_4->hdmi = ((void*)0);
 }
}
