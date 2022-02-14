
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9881c {int dsi; int backlight; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ili9881c* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct ili9881c *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->backlight);
 return FUNC_1(VAR_1->dsi);
}
