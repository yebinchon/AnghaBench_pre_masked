
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct msm_kms {TYPE_3__* funcs; } ;
struct msm_dsi {struct drm_panel* panel; int encoder; int id; int host; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_panel {int dummy; } ;
struct drm_connector {TYPE_2__* dev; int base; } ;
struct TYPE_6__ {int (* set_split_display ) (struct msm_kms*,int ,int ,int ) ;} ;
struct TYPE_4__ {int tile_property; } ;
struct TYPE_5__ {TYPE_1__ mode_config; struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_panel*) ;
 int FUNC_5 (int *,int ,int ) ;
 struct msm_dsi* FUNC_6 (int ) ;
 struct msm_dsi* FUNC_7 (int ) ;
 int FUNC_8 (struct msm_dsi*) ;
 struct drm_panel* FUNC_9 (int ) ;
 int FUNC_10 (struct msm_kms*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct drm_connector *VAR_0, u8 VAR_1)
{
 struct msm_drm_private *VAR_2 = VAR_0->dev->dev_private;
 struct msm_kms *VAR_3 = VAR_2->kms;
 struct msm_dsi *VAR_4 = FUNC_6(VAR_1);
 struct msm_dsi *VAR_5 = FUNC_7(VAR_1);
 struct msm_dsi *VAR_6, *VAR_7;
 struct drm_panel *VAR_8;

 if (FUNC_1() && !FUNC_3(VAR_1)) {
  VAR_6 = VAR_5;
  VAR_7 = VAR_4;
 } else {
  VAR_6 = VAR_4;
  VAR_7 = VAR_5;
 }






 VAR_8 = FUNC_9(VAR_6->host);
 if (FUNC_2(VAR_8)) {
  FUNC_0("Could not find panel for %u (%ld)\n", VAR_4->id,
     FUNC_4(VAR_8));
  return FUNC_4(VAR_8);
 }

 if (!VAR_8 || !FUNC_1())
  goto out;

 FUNC_5(&VAR_0->base,
       VAR_0->dev->mode_config.tile_property, 0);





 if (VAR_5 && VAR_5->panel && VAR_3->funcs->set_split_display) {
  VAR_3->funcs->set_split_display(VAR_3, VAR_6->encoder,
           VAR_7->encoder,
           FUNC_8(VAR_4));
 }

out:
 VAR_4->panel = VAR_8;
 return 0;
}
