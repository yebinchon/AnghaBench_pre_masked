
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
 int FUNC_1 (struct rcar_lvds*,unsigned long,int) ;
 struct rcar_lvds* FUNC_2 (struct drm_bridge*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned long) ;

int FUNC_5(struct drm_bridge *VAR_2, unsigned long VAR_3)
{
 struct rcar_lvds *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 if (FUNC_0(!(VAR_4->info->quirks & VAR_1)))
  return -VAR_0;

 FUNC_4(VAR_4->dev, "enabling LVDS PLL, freq=%luHz\n", VAR_3);

 VAR_5 = FUNC_3(VAR_4->clocks.mod);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(VAR_4, VAR_3, 1);

 return 0;
}
