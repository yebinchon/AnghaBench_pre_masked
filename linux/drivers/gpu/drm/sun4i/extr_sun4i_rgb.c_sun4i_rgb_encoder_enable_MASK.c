
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_rgb {scalar_t__ panel; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*) ;
 struct sun4i_rgb* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct drm_encoder *VAR_0)
{
 struct sun4i_rgb *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("Enabling RGB output\n");

 if (VAR_1->panel) {
  FUNC_3(VAR_1->panel);
  FUNC_2(VAR_1->panel);
 }
}
