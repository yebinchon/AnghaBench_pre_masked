
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_lvds {TYPE_1__* info; } ;
struct drm_display_mode {int clock; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 struct rcar_lvds* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_bridge *VAR_1,
     const struct drm_display_mode *VAR_2,
     struct drm_display_mode *VAR_3)
{
 struct rcar_lvds *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;






 VAR_5 = VAR_4->info->quirks & VAR_0 ? 5000 : 31000;
 VAR_3->clock = FUNC_1(VAR_3->clock, VAR_5, 148500);

 return 1;
}
