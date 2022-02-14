
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_panel {int drm; struct drm_connector* connector; } ;
struct drm_display_mode {int type; } ;
struct drm_connector {int dummy; } ;
struct TYPE_3__ {int vrefresh; int vdisplay; int hdisplay; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct drm_display_mode* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct drm_connector*,struct drm_display_mode*) ;
 int FUNC_3 (struct drm_display_mode*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_4)
{
 struct drm_connector *VAR_5 = VAR_4->connector;
 struct drm_display_mode *VAR_6;

 VAR_6 = FUNC_1(VAR_4->drm, &VAR_3);
 if (!VAR_6) {
  FUNC_0("failed to add mode %ux%ux@%u\n",
     VAR_3.hdisplay, VAR_3.vdisplay,
     VAR_3.vrefresh);
  return -VAR_2;
 }

 FUNC_3(VAR_6);

 VAR_6->type = VAR_0 | VAR_1;
 FUNC_2(VAR_5, VAR_6);

 return 1;
}
