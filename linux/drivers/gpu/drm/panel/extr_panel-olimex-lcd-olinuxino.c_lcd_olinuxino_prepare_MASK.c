
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_olinuxino {int prepared; int enable_gpio; int supply; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct lcd_olinuxino* FUNC_2 (struct drm_panel*) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct lcd_olinuxino *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 if (VAR_1->prepared)
  return 0;

 VAR_2 = FUNC_1(VAR_1->supply);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_1->enable_gpio, 1);
 VAR_1->prepared = 1;

 return 0;
}
