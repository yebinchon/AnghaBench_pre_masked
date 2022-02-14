
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int notifier_call; } ;
struct ccu_pll_nb {TYPE_3__ clk_nb; TYPE_2__* common; } ;
struct TYPE_4__ {int clk; } ;
struct TYPE_5__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*) ;

int FUNC_1(struct ccu_pll_nb *VAR_1)
{
 VAR_1->clk_nb.notifier_call = VAR_0;

 return FUNC_0(VAR_1->common->hw.clk,
         &VAR_1->clk_nb);
}
