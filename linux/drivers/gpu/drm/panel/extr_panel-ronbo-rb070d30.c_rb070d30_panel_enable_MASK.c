
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb070d30_panel {int dsi; int backlight; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct rb070d30_panel* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct rb070d30_panel *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->dsi);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1->backlight);
 if (VAR_2)
  goto out;

 return 0;

out:
 FUNC_1(VAR_1->dsi);
 return VAR_2;
}
