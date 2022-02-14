
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ili9881c {int reset; int power; int dsi; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct ili9881c* FUNC_2 (struct drm_panel*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct ili9881c *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->dsi);
 FUNC_3(VAR_1->power);
 FUNC_0(VAR_1->reset, 1);

 return 0;
}
