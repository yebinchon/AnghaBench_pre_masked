
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls037v7dw01_panel {int ini_gpio; int resb_gpio; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 struct ls037v7dw01_panel* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct ls037v7dw01_panel *VAR_1 = FUNC_2(VAR_0);


 FUNC_1(50);

 FUNC_0(VAR_1->resb_gpio, 1);
 FUNC_0(VAR_1->ini_gpio, 1);

 return 0;
}
