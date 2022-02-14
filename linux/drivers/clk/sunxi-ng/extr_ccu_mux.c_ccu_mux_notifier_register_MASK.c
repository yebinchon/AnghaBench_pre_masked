
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int dummy; } ;
struct TYPE_2__ {int notifier_call; } ;
struct ccu_mux_nb {TYPE_1__ clk_nb; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*,TYPE_1__*) ;

int FUNC_1(struct clk *VAR_1, struct ccu_mux_nb *VAR_2)
{
 VAR_2->clk_nb.notifier_call = VAR_0;

 return FUNC_0(VAR_1, &VAR_2->clk_nb);
}
