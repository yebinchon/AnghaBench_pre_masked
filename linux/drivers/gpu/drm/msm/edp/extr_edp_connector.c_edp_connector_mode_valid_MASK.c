
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_kms {TYPE_2__* funcs; } ;
struct msm_edp {int ctrl; int encoder; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct edp_connector {struct msm_edp* edp; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_6__ {int bpc; } ;
struct drm_connector {TYPE_3__ display_info; TYPE_1__* dev; } ;
struct TYPE_5__ {long (* round_pixclk ) (struct msm_kms*,long,int ) ;} ;
struct TYPE_4__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*,long,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int *,int *) ;
 long FUNC_2 (struct msm_kms*,long,int ) ;
 struct edp_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_3,
     struct drm_display_mode *VAR_4)
{
 struct edp_connector *VAR_5 = FUNC_3(VAR_3);
 struct msm_edp *VAR_6 = VAR_5->edp;
 struct msm_drm_private *VAR_7 = VAR_3->dev->dev_private;
 struct msm_kms *VAR_8 = VAR_7->kms;
 long VAR_9, VAR_10;

 VAR_10 = 1000 * VAR_4->clock;
 VAR_9 = VAR_8->funcs->round_pixclk(VAR_8,
   VAR_10, VAR_5->edp->encoder);

 FUNC_0("requested=%ld, actual=%ld", VAR_10, VAR_9);
 if (VAR_9 != VAR_10)
  return VAR_1;

 if (!FUNC_1(
  VAR_6->ctrl, VAR_4->clock, ((void*)0), ((void*)0)))
  return VAR_1;


 if (VAR_3->display_info.bpc > 8)
  return VAR_0;

 return VAR_2;
}
