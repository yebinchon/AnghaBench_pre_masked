
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_bridge {int encoder; int dev; } ;
struct cdns_dsi_output {int bridge; } ;
struct cdns_dsi_input {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct cdns_dsi {TYPE_1__ base; struct cdns_dsi_output output; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdns_dsi_input* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,struct drm_bridge*) ;
 int FUNC_3 (int ,int ) ;
 struct cdns_dsi* FUNC_4 (struct cdns_dsi_input*) ;

__attribute__((used)) static int FUNC_5(struct drm_bridge *VAR_2)
{
 struct cdns_dsi_input *VAR_3 = FUNC_0(VAR_2);
 struct cdns_dsi *VAR_4 = FUNC_4(VAR_3);
 struct cdns_dsi_output *VAR_5 = &VAR_4->output;

 if (!FUNC_3(VAR_2->dev, VAR_0)) {
  FUNC_1(VAR_4->base.dev,
   "cdns-dsi driver is only compatible with DRM devices supporting atomic updates");
  return -VAR_1;
 }

 return FUNC_2(VAR_2->encoder, VAR_5->bridge, VAR_2);
}
