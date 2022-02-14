
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_drm_private {int mdss; } ;
struct TYPE_2__ {int * domain; } ;
struct mdp5_mdss {int vdd; TYPE_1__ irqcontroller; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mdp5_mdss* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev_private;
 struct mdp5_mdss *VAR_2 = FUNC_3(VAR_1->mdss);

 if (!VAR_2)
  return;

 FUNC_0(VAR_2->irqcontroller.domain);
 VAR_2->irqcontroller.domain = ((void*)0);

 FUNC_2(VAR_2->vdd);

 FUNC_1(VAR_0->dev);
}
