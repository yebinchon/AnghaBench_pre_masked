
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcar_du_group {int index; int num_crtcs; struct rcar_du_device* dev; } ;
struct rcar_du_device {unsigned int num_crtcs; TYPE_1__* info; struct rcar_du_crtc* crtcs; } ;
struct rcar_du_crtc {int index; } ;
struct TYPE_2__ {int gen; int lvds_clk_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (struct rcar_du_group*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rcar_du_group *VAR_2)
{
 struct rcar_du_device *VAR_3 = VAR_2->dev;
 struct rcar_du_crtc *VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6;
 u32 VAR_7;
 if (VAR_3->info->gen < 3 && VAR_2->index == 0) {




  VAR_4 = VAR_3->crtcs;
  VAR_5 = VAR_3->num_crtcs;
 } else if (VAR_3->info->gen == 3 && VAR_2->num_crtcs > 1) {




  VAR_4 = &VAR_3->crtcs[VAR_2->index * 2];
  VAR_5 = VAR_2->num_crtcs;
 }

 if (!VAR_5)
  return;

 VAR_7 = VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6, ++VAR_4) {
  if (VAR_3->info->lvds_clk_mask & FUNC_0(VAR_4->index))
   VAR_7 |= FUNC_2(VAR_6)
         | FUNC_3(VAR_6, 0);
  else
   VAR_7 |= FUNC_1(VAR_6)
         | FUNC_3(VAR_6, 0);
 }

 FUNC_4(VAR_2, VAR_0, VAR_7);
}
