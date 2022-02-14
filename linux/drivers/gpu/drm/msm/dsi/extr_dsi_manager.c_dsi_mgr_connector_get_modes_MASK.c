
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi {struct drm_panel* panel; } ;
struct drm_panel {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_panel*,struct drm_connector*) ;
 int FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (struct drm_connector*) ;
 struct msm_dsi* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_0)
{
 int VAR_1 = FUNC_2(VAR_0);
 struct msm_dsi *VAR_2 = FUNC_3(VAR_1);
 struct drm_panel *VAR_3 = VAR_2->panel;
 int VAR_4;

 if (!VAR_3)
  return 0;





 FUNC_0(VAR_3, VAR_0);
 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return 0;

 return VAR_4;
}
