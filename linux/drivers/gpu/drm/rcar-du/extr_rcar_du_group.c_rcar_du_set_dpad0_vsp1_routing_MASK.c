
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_group {int dummy; } ;
struct rcar_du_device {struct rcar_du_crtc* crtcs; struct rcar_du_group* groups; int num_crtcs; TYPE_1__* info; } ;
struct rcar_du_crtc {int clock; } ;
struct TYPE_2__ {int gen; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rcar_du_group*) ;

int FUNC_4(struct rcar_du_device *VAR_0)
{
 struct rcar_du_group *VAR_1;
 struct rcar_du_crtc *VAR_2;
 unsigned int VAR_3;
 int VAR_4;

 if (VAR_0->info->gen < 2)
  return 0;
 VAR_3 = VAR_0->info->gen < 3 ? 0 : FUNC_0(VAR_0->num_crtcs, 2) - 1;
 VAR_1 = &VAR_0->groups[VAR_3];
 VAR_2 = &VAR_0->crtcs[VAR_3 * 2];

 VAR_4 = FUNC_2(VAR_2->clock);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_3(VAR_1);

 FUNC_1(VAR_2->clock);

 return 0;
}
