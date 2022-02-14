
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_rgb {int panel; } ;
struct drm_connector {int dummy; } ;


 struct sun4i_rgb* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_connector *VAR_0)
{
 struct sun4i_rgb *VAR_1 =
  FUNC_0(VAR_0);

 return FUNC_1(VAR_1->panel);
}
