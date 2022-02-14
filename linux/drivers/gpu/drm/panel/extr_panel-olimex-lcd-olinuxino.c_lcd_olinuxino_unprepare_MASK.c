
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_olinuxino {int prepared; int supply; int enable_gpio; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct lcd_olinuxino* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct lcd_olinuxino *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->prepared)
  return 0;

 FUNC_0(VAR_1->enable_gpio, 0);
 FUNC_1(VAR_1->supply);

 VAR_1->prepared = 0;

 return 0;
}
