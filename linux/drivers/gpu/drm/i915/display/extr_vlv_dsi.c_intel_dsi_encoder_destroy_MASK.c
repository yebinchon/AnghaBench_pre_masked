
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dsi {scalar_t__ gpio_panel; } ;
struct drm_encoder {int dummy; } ;


 struct intel_dsi* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_3(struct drm_encoder *VAR_0)
{
 struct intel_dsi *VAR_1 = FUNC_0(VAR_0);


 if (VAR_1->gpio_panel)
  FUNC_1(VAR_1->gpio_panel);

 FUNC_2(VAR_0);
}
