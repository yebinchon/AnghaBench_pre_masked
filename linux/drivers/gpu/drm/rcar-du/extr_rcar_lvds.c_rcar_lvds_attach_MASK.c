
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct rcar_lvds {int panel; scalar_t__ next_bridge; struct drm_connector connector; } ;
struct drm_encoder {int dummy; } ;
struct drm_bridge {int dev; struct drm_encoder* encoder; } ;


 int VAR_0 ;
 struct rcar_lvds* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (struct drm_encoder*,scalar_t__,struct drm_bridge*) ;
 int FUNC_2 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (int ,struct drm_connector*,int *,int ) ;
 int FUNC_5 (int ,struct drm_connector*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct drm_bridge *VAR_3)
{
 struct rcar_lvds *VAR_4 = FUNC_0(VAR_3);
 struct drm_connector *VAR_5 = &VAR_4->connector;
 struct drm_encoder *VAR_6 = VAR_3->encoder;
 int VAR_7;


 if (VAR_4->next_bridge)
  return FUNC_1(VAR_3->encoder, VAR_4->next_bridge,
      VAR_3);


 if (!VAR_4->panel)
  return 0;

 VAR_7 = FUNC_4(VAR_3->dev, VAR_5, &VAR_1,
     VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_5, &VAR_2);

 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_5(VAR_4->panel, VAR_5);
}
