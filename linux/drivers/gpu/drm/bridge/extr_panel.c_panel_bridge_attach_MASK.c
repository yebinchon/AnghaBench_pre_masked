
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct panel_bridge {struct drm_connector connector; int panel; int connector_type; } ;
struct drm_bridge {int encoder; int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct panel_bridge* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (int ,struct drm_connector*,int *,int ) ;
 int FUNC_5 (int ,struct drm_connector*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct drm_bridge *VAR_3)
{
 struct panel_bridge *VAR_4 = FUNC_1(VAR_3);
 struct drm_connector *VAR_5 = &VAR_4->connector;
 int VAR_6;

 if (!VAR_3->encoder) {
  FUNC_0("Missing encoder\n");
  return -VAR_0;
 }

 FUNC_3(VAR_5,
     &VAR_2);

 VAR_6 = FUNC_4(VAR_3->dev, VAR_5,
     &VAR_1,
     VAR_4->connector_type);
 if (VAR_6) {
  FUNC_0("Failed to initialize connector\n");
  return VAR_6;
 }

 FUNC_2(&VAR_4->connector,
       VAR_3->encoder);

 VAR_6 = FUNC_5(VAR_4->panel, &VAR_4->connector);
 if (VAR_6 < 0)
  return VAR_6;

 return 0;
}
