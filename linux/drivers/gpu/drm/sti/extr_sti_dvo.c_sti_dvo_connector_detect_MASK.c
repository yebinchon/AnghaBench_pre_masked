
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_dvo_connector {struct sti_dvo* dvo; } ;
struct sti_dvo {int * panel; int panel_node; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct drm_connector*) ;
 int * FUNC_3 (int ) ;
 struct sti_dvo_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_5(struct drm_connector *VAR_2, bool VAR_3)
{
 struct sti_dvo_connector *VAR_4
  = FUNC_4(VAR_2);
 struct sti_dvo *VAR_5 = VAR_4->dvo;

 FUNC_0("\n");

 if (!VAR_5->panel) {
  VAR_5->panel = FUNC_3(VAR_5->panel_node);
  if (FUNC_1(VAR_5->panel))
   VAR_5->panel = ((void*)0);
  else
   FUNC_2(VAR_5->panel, VAR_2);
 }

 if (VAR_5->panel)
  return VAR_0;

 return VAR_1;
}
