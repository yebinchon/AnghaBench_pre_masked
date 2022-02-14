
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_lvds_connector {int * panel; int panel_node; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 struct mdp4_lvds_connector* FUNC_2 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status FUNC_3(
  struct drm_connector *VAR_2, bool VAR_3)
{
 struct mdp4_lvds_connector *VAR_4 =
   FUNC_2(VAR_2);

 if (!VAR_4->panel) {
  VAR_4->panel =
   FUNC_1(VAR_4->panel_node);
  if (FUNC_0(VAR_4->panel))
   VAR_4->panel = ((void*)0);
 }

 return VAR_4->panel ?
   VAR_0 :
   VAR_1;
}
