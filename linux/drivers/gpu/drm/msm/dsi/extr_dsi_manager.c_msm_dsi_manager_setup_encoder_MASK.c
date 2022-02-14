
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_kms {TYPE_2__* funcs; } ;
struct msm_dsi {TYPE_1__* dev; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_4__ {int (* set_encoder_mode ) (struct msm_kms*,struct drm_encoder*,int ) ;} ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 struct msm_dsi* FUNC_0 (int) ;
 int FUNC_1 (struct msm_dsi*) ;
 struct drm_encoder* FUNC_2 (struct msm_dsi*) ;
 int FUNC_3 (struct msm_kms*,struct drm_encoder*,int ) ;

void FUNC_4(int VAR_0)
{
 struct msm_dsi *VAR_1 = FUNC_0(VAR_0);
 struct msm_drm_private *VAR_2 = VAR_1->dev->dev_private;
 struct msm_kms *VAR_3 = VAR_2->kms;
 struct drm_encoder *VAR_4 = FUNC_2(VAR_1);

 if (VAR_4 && VAR_3->funcs->set_encoder_mode)
  VAR_3->funcs->set_encoder_mode(VAR_3, VAR_4,
          FUNC_1(VAR_1));
}
