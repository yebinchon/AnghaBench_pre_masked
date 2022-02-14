
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_core {TYPE_1__* hw; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* clk; } ;


 struct clk_core* FUNC_0 (char const*) ;

struct clk *FUNC_1(const char *VAR_0)
{
 struct clk_core *VAR_1 = FUNC_0(VAR_0);

 return !VAR_1 ? ((void*)0) : VAR_1->hw->clk;
}
