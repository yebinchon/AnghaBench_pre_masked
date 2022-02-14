
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd101t2587_panel {int enabled; int backlight; int dsi; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct osd101t2587_panel* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct osd101t2587_panel *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->enabled)
  return 0;

 VAR_2 = FUNC_1(VAR_1->dsi);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1->backlight);

 VAR_1->enabled = 1;

 return VAR_2;
}
