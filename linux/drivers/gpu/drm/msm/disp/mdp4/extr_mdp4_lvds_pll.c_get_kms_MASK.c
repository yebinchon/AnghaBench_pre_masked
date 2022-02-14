
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct mdp4_lvds_pll {TYPE_1__* dev; } ;
struct mdp4_kms {int dummy; } ;
struct TYPE_2__ {struct msm_drm_private* dev_private; } ;


 struct mdp4_kms* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct mdp4_kms *FUNC_2(struct mdp4_lvds_pll *VAR_0)
{
 struct msm_drm_private *VAR_1 = VAR_0->dev->dev_private;
 return FUNC_0(FUNC_1(VAR_1->kms));
}
