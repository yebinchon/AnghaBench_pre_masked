
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct msm_dsi {int connector; TYPE_2__* dev; int encoder; } ;
struct drm_connector {TYPE_1__* funcs; scalar_t__ doublescan_allowed; scalar_t__ interlace_allowed; int polled; } ;
struct dsi_connector {struct drm_connector base; int id; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* destroy ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_connector* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (TYPE_2__*,struct drm_connector*,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct msm_dsi* FUNC_5 (int ) ;
 struct dsi_connector* FUNC_6 (int,int ) ;
 int FUNC_7 (struct drm_connector*,int ) ;
 int FUNC_8 (int ) ;

struct drm_connector *FUNC_9(u8 VAR_6)
{
 struct msm_dsi *VAR_7 = FUNC_5(VAR_6);
 struct drm_connector *VAR_8 = ((void*)0);
 struct dsi_connector *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return FUNC_1(-VAR_2);

 VAR_9->id = VAR_6;

 VAR_8 = &VAR_9->base;

 VAR_10 = FUNC_4(VAR_7->dev, VAR_8,
   &VAR_5, VAR_1);
 if (VAR_10)
  return FUNC_1(VAR_10);

 FUNC_3(VAR_8, &VAR_4);




 VAR_8->polled = VAR_0;


 VAR_8->interlace_allowed = 0;
 VAR_8->doublescan_allowed = 0;

 FUNC_2(VAR_8, VAR_7->encoder);

 VAR_10 = FUNC_7(VAR_8, VAR_6);
 if (VAR_10) {
  FUNC_0(VAR_7->dev->dev, "init panel failed %d\n", VAR_10);
  goto fail;
 }

 return VAR_8;

fail:
 VAR_8->funcs->destroy(VAR_7->connector);
 return FUNC_1(VAR_10);
}
