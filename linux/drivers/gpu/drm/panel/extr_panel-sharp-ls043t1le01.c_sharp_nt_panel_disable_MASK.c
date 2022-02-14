
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sharp_nt_panel {int enabled; int backlight; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sharp_nt_panel* FUNC_1 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_2(struct drm_panel *VAR_0)
{
 struct sharp_nt_panel *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1->enabled)
  return 0;

 FUNC_0(VAR_1->backlight);

 VAR_1->enabled = 0;

 return 0;
}
