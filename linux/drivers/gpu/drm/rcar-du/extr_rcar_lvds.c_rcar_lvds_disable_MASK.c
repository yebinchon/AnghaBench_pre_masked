
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mod; } ;
struct rcar_lvds {TYPE_2__ clocks; TYPE_3__* companion; scalar_t__ dual_link; scalar_t__ panel; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* disable ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rcar_lvds* FUNC_0 (struct drm_bridge*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct rcar_lvds*,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct drm_bridge *VAR_3)
{
 struct rcar_lvds *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->panel) {
  FUNC_2(VAR_4->panel);
  FUNC_3(VAR_4->panel);
 }

 FUNC_4(VAR_4, VAR_0, 0);
 FUNC_4(VAR_4, VAR_1, 0);
 FUNC_4(VAR_4, VAR_2, 0);


 if (VAR_4->dual_link && VAR_4->companion)
  VAR_4->companion->funcs->disable(VAR_4->companion);

 FUNC_1(VAR_4->clocks.mod);
}
