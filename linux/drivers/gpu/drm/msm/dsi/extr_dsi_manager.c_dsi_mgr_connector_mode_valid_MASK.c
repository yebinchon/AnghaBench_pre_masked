
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_kms {TYPE_1__* funcs; } ;
struct msm_dsi {int dummy; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {TYPE_2__* dev; } ;
struct TYPE_4__ {struct msm_drm_private* dev_private; } ;
struct TYPE_3__ {long (* round_pixclk ) (struct msm_kms*,long,struct drm_encoder*) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_connector*) ;
 struct msm_dsi* FUNC_2 (int) ;
 struct drm_encoder* FUNC_3 (struct msm_dsi*) ;
 long FUNC_4 (struct msm_kms*,long,struct drm_encoder*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_2,
    struct drm_display_mode *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2);
 struct msm_dsi *VAR_5 = FUNC_2(VAR_4);
 struct drm_encoder *VAR_6 = FUNC_3(VAR_5);
 struct msm_drm_private *VAR_7 = VAR_2->dev->dev_private;
 struct msm_kms *VAR_8 = VAR_7->kms;
 long VAR_9, VAR_10;

 FUNC_0("");
 VAR_10 = 1000 * VAR_3->clock;
 VAR_9 = VAR_8->funcs->round_pixclk(VAR_8, VAR_10, VAR_6);

 FUNC_0("requested=%ld, actual=%ld", VAR_10, VAR_9);
 if (VAR_9 != VAR_10)
  return VAR_0;

 return VAR_1;
}
