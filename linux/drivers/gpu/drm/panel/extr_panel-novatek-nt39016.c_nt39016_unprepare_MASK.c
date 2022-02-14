
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nt39016 {int supply; int reset_gpio; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct nt39016* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct nt39016 *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->reset_gpio, 1);

 FUNC_1(VAR_1->supply);

 return 0;
}
