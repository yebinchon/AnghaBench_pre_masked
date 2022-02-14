
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl8048_panel {int reset_gpio; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct nl8048_panel* FUNC_1 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_2(struct drm_panel *VAR_0)
{
 struct nl8048_panel *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->reset_gpio, 0);

 return 0;
}
