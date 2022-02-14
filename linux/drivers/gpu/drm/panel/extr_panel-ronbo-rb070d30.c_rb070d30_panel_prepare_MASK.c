
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reset; int power; } ;
struct rb070d30_panel {TYPE_2__ gpios; TYPE_1__* dsi; int supply; } ;
struct drm_panel {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 struct rb070d30_panel* FUNC_3 (struct drm_panel*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct drm_panel *VAR_0)
{
 struct rb070d30_panel *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1->supply);
 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->dsi->dev, "Failed to enable supply: %d\n", VAR_2);
  return VAR_2;
 }

 FUNC_2(20);
 FUNC_1(VAR_1->gpios.power, 1);
 FUNC_2(20);
 FUNC_1(VAR_1->gpios.reset, 1);
 FUNC_2(20);
 return 0;
}
