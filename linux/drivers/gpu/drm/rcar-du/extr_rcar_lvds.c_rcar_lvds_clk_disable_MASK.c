
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mod; } ;
struct rcar_lvds {TYPE_2__ clocks; int dev; TYPE_1__* info; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_3__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct rcar_lvds* FUNC_1 (struct drm_bridge*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct rcar_lvds*,int ,int ) ;

void FUNC_5(struct drm_bridge *VAR_2)
{
 struct rcar_lvds *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(!(VAR_3->info->quirks & VAR_1)))
  return;

 FUNC_3(VAR_3->dev, "disabling LVDS PLL\n");

 FUNC_4(VAR_3, VAR_0, 0);

 FUNC_2(VAR_3->clocks.mod);
}
