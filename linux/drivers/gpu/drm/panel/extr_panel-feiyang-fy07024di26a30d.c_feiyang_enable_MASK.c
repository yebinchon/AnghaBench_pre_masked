
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct feiyang {int backlight; int dsi; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct feiyang* FUNC_3 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_0)
{
 struct feiyang *VAR_1 = FUNC_3(VAR_0);


 FUNC_2(200);

 FUNC_1(VAR_1->dsi);
 FUNC_0(VAR_1->backlight);

 return 0;
}
