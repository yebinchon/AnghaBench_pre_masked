
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp4_lvds_connector {struct drm_panel* panel; } ;
struct drm_panel {TYPE_1__* funcs; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int (* get_modes ) (struct drm_panel*) ;} ;


 int FUNC_0 (struct drm_panel*,struct drm_connector*) ;
 int FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (struct drm_panel*) ;
 struct mdp4_lvds_connector* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_0)
{
 struct mdp4_lvds_connector *VAR_1 =
   FUNC_3(VAR_0);
 struct drm_panel *VAR_2 = VAR_1->panel;
 int VAR_3 = 0;

 if (VAR_2) {
  FUNC_0(VAR_2, VAR_0);

  VAR_3 = VAR_2->funcs->get_modes(VAR_2);

  FUNC_1(VAR_2);
 }

 return VAR_3;
}
