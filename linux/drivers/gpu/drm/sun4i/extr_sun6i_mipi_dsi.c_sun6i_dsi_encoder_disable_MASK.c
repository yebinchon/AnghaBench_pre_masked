
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_dsi {int dev; int dphy; int panel; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct sun6i_dsi* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_0)
{
 struct sun6i_dsi *VAR_1 = FUNC_4(VAR_0);

 FUNC_0("Disabling DSI output\n");

 if (!FUNC_1(VAR_1->panel)) {
  FUNC_2(VAR_1->panel);
  FUNC_3(VAR_1->panel);
 }

 FUNC_6(VAR_1->dphy);
 FUNC_5(VAR_1->dphy);

 FUNC_7(VAR_1->dev);
}
