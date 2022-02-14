
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int power; int reset; } ;
struct rb070d30_panel {int supply; TYPE_1__ gpios; } ;
struct drm_panel {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct rb070d30_panel* FUNC_1 (struct drm_panel*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct drm_panel *VAR_0)
{
 struct rb070d30_panel *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->gpios.reset, 0);
 FUNC_0(VAR_1->gpios.power, 0);
 FUNC_2(VAR_1->supply);

 return 0;
}
