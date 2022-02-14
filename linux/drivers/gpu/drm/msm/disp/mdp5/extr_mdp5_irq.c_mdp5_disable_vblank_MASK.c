
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {int dummy; } ;
struct mdp5_kms {TYPE_1__* pdev; } ;
struct drm_crtc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct mdp5_kms* FUNC_4 (int ) ;
 int FUNC_5 (struct msm_kms*) ;

void FUNC_6(struct msm_kms *VAR_0, struct drm_crtc *VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_4(FUNC_5(VAR_0));
 struct device *VAR_3 = &VAR_2->pdev->dev;

 FUNC_2(VAR_3);
 FUNC_1(FUNC_5(VAR_0),
   FUNC_0(VAR_1), 0);
 FUNC_3(VAR_3);
}
