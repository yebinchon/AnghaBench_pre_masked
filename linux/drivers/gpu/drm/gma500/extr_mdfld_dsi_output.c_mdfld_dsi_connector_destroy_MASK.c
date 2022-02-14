
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdfld_dsi_pkg_sender {int dummy; } ;
struct mdfld_dsi_connector {struct mdfld_dsi_pkg_sender* pkg_sender; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct mdfld_dsi_connector*) ;
 struct mdfld_dsi_connector* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct mdfld_dsi_pkg_sender*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_0)
{
 struct mdfld_dsi_connector *VAR_1 =
     FUNC_3(VAR_0);
 struct mdfld_dsi_pkg_sender *VAR_2;

 if (!VAR_1)
  return;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 VAR_2 = VAR_1->pkg_sender;
 FUNC_4(VAR_2);
 FUNC_2(VAR_1);
}
