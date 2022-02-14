
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct clk_omap_reg {int dummy; } ;
struct clk_hw_omap {int hw; TYPE_1__* ops; } ;
typedef int s16 ;
struct TYPE_4__ {int (* clk_readl ) (struct clk_omap_reg*) ;int (* cm_split_idlest_reg ) (struct clk_omap_reg*,int *,int*) ;int (* cm_wait_module_ready ) (int ,int ,int,int) ;} ;
struct TYPE_3__ {int (* find_idlest ) (struct clk_hw_omap*,struct clk_omap_reg*,int*,int*) ;int (* find_companion ) (struct clk_hw_omap*,struct clk_omap_reg*,int*) ;} ;


 int FUNC_0 (struct clk_hw_omap*,struct clk_omap_reg*,int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct clk_hw_omap*,struct clk_omap_reg*,int*) ;
 int FUNC_3 (struct clk_omap_reg*) ;
 int FUNC_4 (struct clk_hw_omap*,struct clk_omap_reg*,int*,int*) ;
 int FUNC_5 (struct clk_omap_reg*,int *,int*) ;
 int FUNC_6 (int ,int ,int,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_7(struct clk_hw_omap *VAR_1)
{
 struct clk_omap_reg VAR_2, VAR_3;
 u8 VAR_4, VAR_5, VAR_6, VAR_7;
 s16 VAR_8;
 int VAR_9;


 if (VAR_1->ops->find_companion) {
  VAR_1->ops->find_companion(VAR_1, &VAR_2, &VAR_4);
  if (!(VAR_0->clk_readl(&VAR_2) &
        (1 << VAR_4)))
   return;
 }

 VAR_1->ops->find_idlest(VAR_1, &VAR_3, &VAR_5, &VAR_6);
 VAR_9 = VAR_0->cm_split_idlest_reg(&VAR_3, &VAR_8,
            &VAR_7);
 if (VAR_9) {

  FUNC_0(VAR_1, &VAR_3, (1 << VAR_5),
         VAR_6, FUNC_1(&VAR_1->hw));
 } else {
  VAR_0->cm_wait_module_ready(0, VAR_8, VAR_7,
          VAR_5);
 }
}
