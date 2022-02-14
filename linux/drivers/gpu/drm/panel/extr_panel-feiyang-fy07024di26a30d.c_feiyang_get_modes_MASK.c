
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct feiyang {TYPE_1__* dsi; } ;
struct drm_panel {int drm; struct drm_connector* connector; } ;
struct drm_display_mode {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_5__ {int vrefresh; int vdisplay; int hdisplay; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int VAR_0 ;
 struct drm_display_mode* FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;
 TYPE_2__ VAR_1 ;
 struct feiyang* FUNC_4 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_2)
{
 struct drm_connector *VAR_3 = VAR_2->connector;
 struct feiyang *VAR_4 = FUNC_4(VAR_2);
 struct drm_display_mode *VAR_5;

 VAR_5 = FUNC_1(VAR_2->drm, &VAR_1);
 if (!VAR_5) {
  FUNC_0(&VAR_4->dsi->dev, "failed to add mode %ux%ux@%u\n",
         VAR_1.hdisplay,
         VAR_1.vdisplay,
         VAR_1.vrefresh);
  return -VAR_0;
 }

 FUNC_3(VAR_5);

 FUNC_2(VAR_3, VAR_5);

 return 1;
}
